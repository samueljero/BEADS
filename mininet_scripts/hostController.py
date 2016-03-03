# Samuel Jero <sjero@purdue.edu>
# Host Controller
import string
import os
import sys
import time
import subprocess

class HostController:
    def __init__(self, net, log, conf):
        self.mininet = net
        self.log = log
        self.conf = conf
        self.hosts = []

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
                results.append(self._iperf_test())
                running = False
            elif "http-test" in cmd['cmd']:
                if "mal" in cmd and "vict" in cmd:
                    results.append(self._http_test(cmd["mal"], cmd["vict"]))
            elif "attack" in cmd['cmd']:
                results.append(self._do_attack(cmd))
            elif "done" in cmd['cmd']:
                running = False
            else:
                results = [False]
                running = False

        self._stop_hosts()
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


    
    def _do_attack(self, cmd):
        if "mal" not in cmd:
            return False
        if "vict" not in cmd:
            return False
        if "action" not in cmd:
            return False
        mal = cmd["mal"]
        vict = cmd["vict"]
        action = cmd["action"]

        if not isinstance(mal, int) or mal < 0 or mal >= len(self.mininet.hosts):
            return False
        if not isinstance(vict, int) or vict < 0 or vict >= len(self.mininet.hosts):
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
