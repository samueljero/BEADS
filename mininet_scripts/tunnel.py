# Samuel Jero <sjero@purdue.edu>
# Host Tunnelling module
# Command Structure:
# {'module':'tunnel',
#    'command':'',
#    'read':'',
#    'write':'',
#    'filter':'',
# }
# Commands:
#    'start',
#    'stop'
#
# For 'start':
# 'read' specifies the path to the read fifo
# 'write' specifies the path to the write fifo
# 'filter' specifies the tcpdump filter for packets to tunnel. Defaults to everything
#           + "lldp" to tunnel lldp packets
# 
# For 'stop':
# Stop tunneling. No other components needed.
import threading
import struct
import socket
import os
from lldp_layer import *
from scapy.sendrecv import sendp
from scapy.config import conf
from module import Module
from scapy.layers.inet import IP
from scapy.layers.l2 import Ether
from new_arch import L2Socket

class SendThread(threading.Thread):
    def __init__(self,iface,fifo):
        threading.Thread.__init__(self)
        self.iface = iface
        self.fifoname = fifo
        self.fifo = None
        self.running = True
        self.debug = False
        if self.debug:
            self.log = open("/tmp/snd"+str(os.getpid())+".log","w")
        else:
            self.log = None

    def run(self):
        self.fifo = open(self.fifoname,"r")
        if not self.fifo:
            return 1

        while self.running:
            pkt = self._fifo_recv()
            if len(pkt)==0:
                break

            pkt = Ether(pkt)
            
            if self.debug and self.log:
                self.log.write("%s\n" % pkt.summary())
            
            try:
                sendp(pkt,iface=self.iface,verbose=False)
            except Exception as e:
                print str(e)
        self.fifo.close()
        return 0

    def _fifo_recv(self):
        data = ""
        
        #Wait for Length
        while (len(data) < 2):
            data = self.fifo.read(2)
            if len(data) == 0:
                self.fifo.close()
                return ""
        
        #compute length
        try:
            length = struct.unpack("!H",data[0:2])
            length = length[0]
        except Exception as e:
            self.fifo.close()
            return ""
                        
        #Receive Message
        msg = ""
        mlen = length
        while(len(msg) < mlen):
            data = self.fifo.read(length)
            if len(data) == 0:
                 self.fifo.close()
                 return ""
            msg += data
            length -= len(data)
        
        return msg

    def quit(self):
        self.running = False
        if self.fifo:
            self.fifo.close()
        return

class RecvThread(threading.Thread):
    def __init__(self,iface,filt,fifo):
        threading.Thread.__init__(self)
        self.iface = iface
        self.filt = filt
        self.fifoname = fifo
        self.fifo = None
        self.running = True
        self.sock = None
        self.debug = False
        if self.debug:
            self.log = open("/tmp/rcv"+str(os.getpid())+".log","w")
        else:
            self.log = None

    def run(self):
        self.fifo = open(self.fifoname,"w")
        if not self.fifo:
            return 1
        
        self.sock = L2Socket(iface=self.iface,promisc=True,filter=self.filt)

        while self.running:
            pkt = None
            try:
                pkt = self.sock.recv(65535)
            except Exception as e:
                print str(e)
            if pkt == None:
                continue
            if len(pkt) == 0:
                break

            if self.debug and self.log:
                self.log.write("%s\n" % pkt.summary())

            msg = str(pkt)
            if not self._fifo_send(msg):
                break
        self.fifo.close()
        self.sock.close()
        return 0

    def _fifo_send(self, msg):
        snd = struct.pack("!H",len(msg))
        snd += msg
        try:
            self.fifo.write(snd)
        except Exception as e:
            return False
        return True

    def quit(self):
        self.running = False
        if self.sock:
            self.sock.close()
        return

class Tunnel(Module):
    def __init__(self,myeth,myip,myif):
        self.name = "tunnel"
        self.ip = myip
        self.eth = myeth
        self.iface = myif
        self.rfifo = None
        self.wfifo = None
        self.threads = []
        
    def cmd(self,cmd):
        #Sanity checks
        if not isinstance(cmd,dict):
            return False,"Not dict"
        if not 'module' in cmd:
            return False, "no module member"
        if cmd['module'] is not "tunnel":
            return False, "not tunnel module!"
        if not 'command' in cmd:
            return False, "no command member"

        if 'start' in cmd['command']:
            return self._start_tunnel(cmd)
        elif 'stop' in cmd['command']:
            return self._stop_tunnel()
        else:
            return False, "No such command"

    def _start_tunnel(self, cmd):
        filt = None
        if len(self.threads) > 0:
            return False, "Tunnel already running"
        if not 'read' in cmd or not 'write' in cmd:
            return False, "no read/write fifo's"
        self.rfifo = cmd['read']
        self.wfifo = cmd['write']
        
        if 'filter' in cmd:
            filt = cmd['filter']
            if "lldp" in filt:
                filt = filt.replace("lldp","ether proto 0x88cc")

        sth = SendThread(self.iface,self.rfifo)
        sth.daemon = True
        rth = RecvThread(self.iface,filt,self.wfifo)
        rth.daemon = True
        self.threads.append(sth)
        self.threads.append(rth)
        sth.start()
        rth.start()
        return True, "Tunnel Started"

    def _stop_tunnel(self):
        for th in self.threads:
            th.quit()
        self.threads = []
        return True, "Tunnel Stopped"
        
    def start(self):
        return

    def stop(self):
        self._stop_tunnel()
        return
