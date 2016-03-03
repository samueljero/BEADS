#Samuel Jero <sjero@purdue.edu>
#Host ARP manipulation Module
import threading
import time
from scapy.layers.l2 import Ether
from scapy.sendrecv import sendp
from module import Module

class LLDPInjectThread(threading.Thread):
    def __init__(self,pkt,start,freq,num,iface):
        threading.Thread.__init__(self)
        self.pkt = pkt
        self.start_time = start
        self.freq = freq
        self.num = num
        self.iface = iface
        self.running = True

    def run(self):
        if self.start_time is not None:
            sl = time.time() - self.start_time
            time.sleep(sl)

        while self.running:
            if self.num == 0:
                break
            self.num-=1

            try:
                sendp(self.pkt,iface=self.iface,verbose=False)
            except Exception as e:
                print str(e)

            time.sleep(self.freq)
        return 0

    def quit(self):
        self.running = False
            

class LLDP(Module):
    def __init__(self,myeth,myip,myif):
        self.name = "LLDP"
        self.ip = myip
        self.eth = myeth
        self.iface = myif
        self.threads = []

    def cmd(self,cmd):
        #Sanity checks
        if not isinstance(cmd,dict):
            return False, "Not dict"
        if not 'module' in cmd:
            return False, "no module member"
        if cmd['module'] is not "lldp":
            return False, "not lldp module!"
        if not 'command' in cmd:
            return False, "no command member"

        #Parse command
        if 'inject' in cmd['command']:
            return self.inject(cmd)
        elif 'stop' in cmd['command']:
            self.stop()
            return True, "Sucess"
        else:
            False, "Invalid Command"

    def inject(self, cmd):
        start = None
        freq = 0
        num = -1
        ids = []
        ptype = None

        if 'freq' in cmd:
            freq = cmd['freq']
        else:
            num = 1
        if 'num' in cmd:
            num = cmd['num']
        if 'start' in cmd:
            start = cmd['start']
        if 'num' == 1:
            freq = 0
        if 'freq' == 0:
            num = 1
        if 'ids' in cmd:
            ids = cmd['ids']
        if not isinstance(ids,(list,tuple)) and len(ids)!=6:
            return False, "Invalid IDs"
        if 'type' in cmd:
            ptype = cmd['type']

        try:
            pkt = Ether()
        except Exception as e:
            return False, str(e)

        th = LLDPInjectThread(pkt,start,freq,num,self.iface)
        th.daemon = True
        self.threads.append(th)
        th.start()
        return True,"Injection Sucess"


    def start(self):
        return

    def stop(self):
        for th in self.threads:
            th.quit()
        return
