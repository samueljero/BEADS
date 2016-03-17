# Samuel Jero <sjero@purdue.edu>
# Magic Packet based test
# Command Structure:
# {'module':'magic',
#    'command':'',
#    'dest':'',
#    'layer':0,
# }
# Commands:
#    'listen',
#    'inject',
#    'report'
#
# For 'listen':
# Start listening for magic packets
#
# For 'inject':
# Inject magic packets at layer 'layer' with destination 'dest'
# 
# For 'report':
# Report any magic packet observations
import threading
import struct
import socket
import os
from lldp_layer import *
from scapy.sendrecv import sendp
from scapy.config import conf
from module import Module
from scapy.packet import Raw
from scapy.layers.inet import IP
from scapy.layers.l2 import Ether
from new_arch import L2Socket

class ListenThread(threading.Thread):
    def __init__(self,iface):
        threading.Thread.__init__(self)
        self.iface = iface
        self.running = True
        self.buff = []
        self.debug = False
        if self.debug:
            self.log = open("/tmp/lstn"+str(os.getpid())+".log","w")
        else:
            self.log = None

    def run(self):
        self.sock = L2Socket(iface=self.iface,promisc=True)

        if self.debug and self.log:
            self.log.write("Ready to read\n")
	    self.log.flush()

        while self.running:
            pkt = None
            try:
                pkt = self.sock.recv(65535)
            except Exception as e:
                if self.debug and self.log:
                    self.log.write(str(e)+"\n")
                    self.log.flush()
            if pkt == None:
                continue
            if len(pkt) == 0:
                break

            self.buff.append(pkt)

            if self.debug and self.log:
                self.log.write("%s\n" % pkt.summary())
		self.log.flush()

        self.sock.close()
        return 0

    def quit(self):
        self.running = False
        if self.sock:
            self.sock.close()
        return

    def get_buffer(self):
        return self.buff

class Magic(Module):
    def __init__(self,myeth,myip,myif):
        self.name = "magic"
        self.ip = myip
        self.eth = myeth
        self.iface = myif
        self.listen_thread = None
        
    def cmd(self,cmd):
        #Sanity checks
        if not isinstance(cmd,dict):
            return False,"Not dict"
        if not 'module' in cmd:
            return False, "no module member"
        if cmd['module'] is not "magic":
            return False, "not magic module!"
        if not 'command' in cmd:
            return False, "no command member"
        layer = None
        dest = None
        if 'layer' in cmd:
            layer = cmd['layer']
        if 'dest' in cmd:
            dest = cmd['dest']

        if 'listen' in cmd['command']:
            return self._listen()
        elif 'inject' in cmd['command']:
            return self._inject(layer,dest)
        elif 'report' in cmd['command']:
            return self._report()
        else:
            return False, "No such command"

    def _listen(self):
        if self.listen_thread is not None:
            return False, "Listener already running"
        
        self.listen_thread = ListenThread(self.iface)
        self.listen_thread.daemon = True
        self.listen_thread.start()
        return True, "Listener Started"

    def _report(self):
        magic_count = 0
        if self.listen_thread is None:
            return False, "Listener never started"
        self.listen_thread.quit()
        pkts = self.listen_thread.get_buffer()
        self.listen_thread = None

        for p in pkts:
            try:
	   	 if "DEADBEEF" in str(p):
			magic_count += 1
            except Exception as e:
                return False, str(e)

        return True, magic_count

    def _inject(self,layer,dest):
        pkt = None

        try:
            layer = int(layer)
        except Exception as e:
            return False,"Layer not an integer"

        if layer  == 1:
            pkt = Ether(src=self.eth,dst=dest)/Raw(load="DEADBEEF")
        elif layer == 2:
            pkt = Ether(src=self.eth)/IP(src=self.ip,dst=dest)/Raw(load="DEADBEEF")
        else:
            return False, "Bad Layer"

        try:
            for i in range(0,10):
                sendp(pkt,iface=self.iface,verbose=False)
        except Exception as e:
            return False, str(e)
        return True, "Packets Sent"
        
    def start(self):
        return

    def stop(self):
        if self.listen_thread is not None:
            self.listen_thread.quit()
        return
