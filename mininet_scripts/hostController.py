# Samuel Jero <sjero@purdue.edu>
# Host Controller
# Communication on stdin/stdout
# Reads commands until a 'basic' or 'done' command
# Command Structure:
# {'cmd':'',
#    'mal':0,
#    'vict':3,
#    'sw':1,
#    'action':'',
#    'h1':1,
#    'h2':2,
#    'filter':'lldp',
#    'layer':1,
# }
# Commands:
#  'basic',
#  'iperf-test',
#  'ping-test',
#  'wait',
#  'http-test',
#  'magic-test',
#  'attack',
#  'tunnel',
#  'done'
#
# For 'basic':
# Executes basic all pairs ping and iperf tests. No additional arguments needed
#
# For 'iperf-test':
# Executes an all pairs iperf test. No additional arguments required
#
# For 'ping-test':
# Executes an all pairs ping test. No additional arguments required
#
# For 'wait':
# Waits for topology discovery delay to complete. No additional arguments required
# 
# For 'http-test':
# Executes a host spoofing test using http servers. Requires 'mal' argument indicating malicious host and 'vict' argument indicating target of spoofing
#
# For 'magic-test':
# Executes a spoofing test by injecting magic packets and watching where they show up. Requires 'mal' argument indicating malicious host, 'vict' argument indicating target of spoofing, and 'layer'
#indicating what layers to include (1=Ethernet,2=Ethernet+IP)
# 
# For 'attack':
# Executes the attack command specified in 'action' on the malicious host 'mal'.
# If an 'ids' list is present in 'action', 'mal', 'sw', and 'vict' can be used to specify the substitution of particular key-words for malicious host/switch/victim IP/MAC/DPID values
# In particular:
#    'mal-ip' is replaced with malicious host IP
#    'mal-mac' is replaced with malicious host MAC
#    'vict-ip' is replaced with victim IP
#    'vict-mac' is replaced with victim MAC
#    'sw-dpid' is replaced with the switches DPID
#
# For 'tunnel':
# Creates a tunnel between hosts 'h1' and 'h2' to tunnel packets matching filter 'filter'. 'filter' is optional and defaults to everything.
#
# For 'done':
# Terminates testing. No additional arguments needed
import string
import os
import sys
import time
import subprocess
import tempfile

class HostController:
    def __init__(self, net, log, conf):
        self.mininet = net
        self.log = log
        self.conf = conf
        self.hosts = []
        self.tunnels = []

    def do_test(self):
        running = True
        results = []
        
        self._launch_hosts()

        while running:
            cmd = self._read_cmd()
            if cmd is None:
                results = [False]
                running = False
                continue

            if "basic" in cmd['cmd']:
                time.sleep(self.conf['topo_discovery'])
                results.append(self._ping_test())
                #time.sleep(120)
                results.append(self._iperf_test())
                running = False
            elif "wait" in cmd['cmd']:
                time.sleep(self.conf['topo_discovery'])
            elif "ping-test" in cmd['cmd']:
                results.append(self._ping_test())
            elif "iperf-test" in cmd['cmd']:
                results.append(self._iperf_test())
            elif "http-test" in cmd['cmd']:
                if "mal" in cmd and "vict" in cmd:
                    results.append(self._http_test(cmd["mal"], cmd["vict"]))
            elif "magic-test" in cmd['cmd']:
                if "mal" in cmd and "vict" in cmd and "layer" in cmd:
                    results.append(self._magic_test(cmd["mal"], cmd["vict"], cmd['layer']))
            elif "attack" in cmd['cmd']:
                results.append(self._do_attack(cmd))
            elif "tunnel" in cmd['cmd']:
                results.append(self._do_tunnel(cmd))
            elif "done" in cmd['cmd']:
                running = False
            else:
                results = [False]
                running = False

        self._stop_hosts()
        self._cleanup()
        return results

    def _read_cmd(self):
        cmd = None
        try:
            line = sys.stdin.readline()
            cmd = eval(line)
        except Exception as e:
            self.log.output(str(e))
        if not isinstance(cmd, dict):
            return None
        if 'cmd' not in cmd:
            return None
        return cmd

    def _launch_hosts(self):
        my_loc = os.path.dirname(os.path.realpath(__file__))
        self.log.output("\nStarting Hosts:\n")
        for h in self.mininet.hosts:
            cmd = "%s/host.py %s %s %s" % (my_loc, h.MAC(),h.IP(),h.intf())
            self.log.output(cmd + "\n")
            h.sendCmd(cmd)

    def _stop_hosts(self):
        for h in self.mininet.hosts:
            h.sendInt()

    def _read_eval(self,host):
        out = None
        line = " "
        try:
            while line.isspace():
                line = host.stdin.readline()
            out = eval(line)
        except Exception as e:
            self.log.output(str(e))
            self.log.output(line)
        return out

    def _ping_test(self):
        self.log.output("\n\nPing Test\n")
        ret = True
        for h1 in self.mininet.hosts:
            for h2 in self.mininet.hosts:
                if h1==h2:
                    continue
                self.log.output("Ping %s -> %s:\n" % (str(h1),str(h2)))

                cmd = {"module":"ping","dst":str(h2.IP())}
                h1.write(repr(cmd)+"\n")
                out = self._read_eval(h1)
                if out is None:
                    ret = False
                    self.log.output("Ping %s -> %s failed\n" % (str(h1),str(h2)))
                    continue
                if 'code' not in out:
                    ret = False
                elif out['code'] == False:
                    ret = False
                    if 'output' in out:
                        self.log.output(out['output'])
                else:
                    self.log.output("Ping Successful!\n")
        return ret

    def _iperf_test(self):
        self.log.output("\n\nIperf Test:\n")
        ret = True
        for h1 in self.mininet.hosts:
            for h2 in self.mininet.hosts:
                if h1==h2:
                    continue
                self.log.output("Iperf %s -> %s:\n" % (str(h1),str(h2)))

                #Start Server
                cmd = {"module":"iperf","command":"start-server"}
                h2.write(repr(cmd)+"\n")
                out = self._read_eval(h2)
                if out == None:
                    ret = False
                    self.log.output("Iperf %s -> %s failed\n" % (str(h1),str(h2)))
                    continue
                if 'code' not in out or  out['code'] == False:
                    ret = False

                #Start Client
                cmd = {"module":"iperf","command":"run-client","dst":str(h2.IP()),'duration':2}
                h1.write(repr(cmd)+"\n")
                out = self._read_eval(h1)
                if out == None:
                    ret = False
                    self.log.output("Iperf %s -> %s failed\n" % (str(h1),str(h2)))
                    continue
                if 'code' not in out or  out['code'] == False:
                    ret = False
                if 'output' in out:
                    if out['output'][0] <= 0:
                        ret = False
                        self.log.output("Client: %s\n" % out['output'][1])
                    else:
                        self.log.output("Client: %s\n" % out['output'][0])

                #Stop Server
                cmd = {"module":"iperf","command":"stop-server"}
                h2.write(repr(cmd)+"\n")
                out = self._read_eval(h2)
                if out == None:
                    ret = False
                    self.log.output("Iperf %s -> %s failed\n" % (str(h1),str(h2)))
                    continue
                if 'code' not in out or  out['code'] == False:
                    ret = False
                if 'output' in out:
                    if out['output'][0] <= 0:
                        ret = False
                        self.log.output("Server: %s\n" % out['output'][1])
                    else:
                        self.log.output("Server: %s\n" % out['output'][0])
        return ret

    def _http_test(self, mal, vict):
        ret = True
        if not isinstance(mal, int) or mal < 0 or mal >= len(self.mininet.hosts):
            return False
        if not isinstance(vict, int) or vict < 0 or vict >= len(self.mininet.hosts):
            return False
        self.log.output("\n\nHttp Test:\n")

        #Start Servers
        for h in self.mininet.hosts:
            cmd = {'module':'http','command':'start-good-server'}
            if h == self.mininet.hosts[mal]:
                #Malicious Host
                cmd = {'module':'http','command':'start-mal-server'}
            h.write(repr(cmd)+"\n")
            out = self._read_eval(h)
            if out == None:
                ret = False
                self.log.output("http server failed to start on %s\n" % str(h))
                break
            if 'code' not in out or  out['code'] == False:
                ret = False
                self.log.output("http server failed to start on %s\n" % str(h))
                break

        #Start Client
        for h in self.mininet.hosts:
            if h == self.mininet.hosts[mal]:
                continue
            if h == self.mininet.hosts[vict]:
                continue
            cmd = {'module':'http','command':'start-client','dst':self.mininet.hosts[vict].IP()}
            h.write(repr(cmd)+"\n")
            out = self._read_eval(h)
            if out == None:
                ret = False
                self.log.output("http client failed on %s\n" % str(h))
            if 'code' not in out or  out['code'] == False:
                ret = False
            if 'output' in out:
                self.log.output("Client: %s\n" % out['output'])

        #Stop Servers
        for h in self.mininet.hosts:
            cmd = {'module':'http','command':'stop-server'}
            h.write(repr(cmd)+"\n")
            out = self._read_eval(h)
            if out == None:
                ret = False
                self.log.output("http server failed to stop on %s\n" % str(h))
                break
            if 'code' not in out or  out['code'] == False:
                ret = False
                self.log.output("http server failed to stop on %s\n" % str(h))
                break
        return ret

    def _magic_test(self, mal, vict, layer):
        ret = True
        if not isinstance(mal, int) or mal < 0 or mal >= len(self.mininet.hosts):
            return False
        if not isinstance(vict, int) or vict < 0 or vict >= len(self.mininet.hosts):
            return False
        if not isinstance(layer, int) or layer < 1 or layer > 2:
            return False
        self.log.output("\n\nMagic Packet Test:\n")

        #Start Listeners
        for h in self.mininet.hosts:
            cmd = {'module':'magic','command':'listen'}
            h.write(repr(cmd)+"\n")
            out = self._read_eval(h)
            if out == None:
                ret = False
                self.log.output("magic packet listener failed to start on %s\n" % str(h))
                break
            if 'code' not in out or  out['code'] == False:
                ret = False
                self.log.output("magic packet listener failed to start on %s\n" % str(h))
                break

        #Start Injections
        for h in self.mininet.hosts:
            if h == self.mininet.hosts[vict]:
                continue
            if h == self.mininet.hosts[mal]:
                continue
            self.log.output("Injecting packets at %s...\n" % str(h))
            dest = None
            if layer == 1:
                dest = self.mininet.hosts[vict].MAC()
            elif layer == 2:
                dest = self.mininet.hosts[vict].IP()
            cmd = {'module':'magic','command':'inject','layer':layer,'dest':dest}
            h.write(repr(cmd)+"\n")
            out = self._read_eval(h)
            if out == None:
                ret = False
                self.log.output("magic packet injector failed on  %s\n" % str(h))
                break
            if 'code' not in out or  out['code'] == False:
                ret = False
                self.log.output("magic packet injector failed on %s\n" % str(h))
                break

        #Get Reports
        for h in self.mininet.hosts:
            cmd = {'module':'magic','command':'report'}
            h.write(repr(cmd)+"\n")
            out = self._read_eval(h)
            if out == None:
                ret = False
                self.log.output("failed to collect report on %s\n" % str(h))
                break
            if 'code' not in out or  out['code'] == False:
                ret = False
                self.log.output("failed to collect report on %s\n" % str(h))
                break
            if 'output' in out:
                if not isinstance(out['output'],int):
                    ret = False
                    break
                self.log.output("Magic packets at host %s: %d\n" % (str(h),out['output']))
                if h != self.mininet.hosts[vict] and out['output'] > 0:
                    ret = False
        return ret
                    
                
    
    def _do_attack(self, cmd):
        vict = 0
        sw = 0
        if "mal" not in cmd:
            return False
        if "action" not in cmd:
            return False
        if "vict"  in cmd:
            vict = cmd['vict']
        if "sw" in cmd:
            sw = cmd['sw']
        mal = cmd["mal"]
        action = cmd["action"]


        if not isinstance(mal, int) or mal < 0 or mal >= len(self.mininet.hosts):
            return False
        if not isinstance(vict, int) or vict < 0 or vict >= len(self.mininet.hosts):
            return False
        if not isinstance(sw, int) or sw < 0 or sw >= len(self.mininet.switches):
            return False
        if not isinstance(action,dict):
            return False

        #Replace placeholders for attacker/victim IP/MAC
        if "ids" in action and isinstance(action["ids"],list):
            ids = action["ids"]
            for i in range(0,len(ids)):
                if ids[i] == None:
                    continue
                if "mal-ip" in ids[i]:
                    ids[i] = self.mininet.hosts[mal].IP()
                if "mal-mac" in ids[i]:
                    ids[i] = self.mininet.hosts[mal].MAC()
                if "vict-ip" in ids[i]:
                    ids[i] = self.mininet.hosts[vict].IP()
                if "vict-mac" in ids[i]:
                    ids[i] = self.mininet.hosts[vict].MAC()
                if "sw-dpid" in ids[i]:
                    ids[i] = self.mininet.switches[sw].dpid
            action["ids"] = ids
        
        m = self.mininet.hosts[mal]
        m.write(repr(action)+"\n")

        out = self._read_eval(m)
        if out == None:
            return False
        if not isinstance(out,dict):
            return False
        if 'output' in out:
            self.log.output("Attack: %s\n" % out["output"])
        if 'code' not in out or out['code'] == False:
            return False
        return True

    def _do_tunnel(self,cmd):
        if "h1" not in cmd or "h2" not in cmd:
            return False

        h1 = cmd["h1"]
        h2 = cmd["h2"]

        if not isinstance(h1, int) or h1 < 0 or h1 >= len(self.mininet.hosts):
            return False
        if not isinstance(h2, int) or h2 < 0 or h2 >= len(self.mininet.hosts):
            return False

        filt = None
        if 'filter' in cmd:
            filt = cmd['filter']

        fifo1 = None
        fifo2 = None
        try:
            fifo1 = tempfile.mktemp()
            os.mkfifo(fifo1)
            fifo2 = tempfile.mktemp()
            os.mkfifo(fifo2)
        except Exception as e:
            print str(e)
            return False

        self.tunnels.append((fifo1,fifo2))

        action = {'module':'tunnel','command':'start','read':fifo1,'write':fifo2}
        if filt:
            action['filter']=filt
        m = self.mininet.hosts[h1]
        m.write(repr(action)+"\n")
        out = self._read_eval(m)
        if out == None:
            return False
        if not isinstance(out,dict):
            return False
        if 'output' in out:
            self.log.output("Tunnel: %s\n" % out["output"])
        if 'code' not in out or out['code'] == False:
            return False
        
        action = {'module':'tunnel','command':'start','read':fifo2,'write':fifo1}
        if filt:
            action['filter']=filt
        m = self.mininet.hosts[h2]
        m.write(repr(action)+"\n")
        out = self._read_eval(m)
        if out == None:
            return False
        if not isinstance(out,dict):
            return False
        if 'output' in out:
            self.log.output("Tunnel: %s\n" % out["output"])
        if 'code' not in out or out['code'] == False:
            return False

        return True

    def _cleanup(self):
        for t in self.tunnels:
            os.unlink(t[0])
            os.unlink(t[1])
