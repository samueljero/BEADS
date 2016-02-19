# Samuel Jero <sjero@purdue.edu>
# Host Controller
import string
import os
import sys
import subprocess

class HostController:
    def __init__(self, net, log, conf):
        self.mininet = net
        self.log = log
        self.conf = conf
        self.hosts = []

    def do_test(self):
        results = []
        cmd = self._read_cmd()
        if cmd is None:
            return False
        self._launch_hosts()

        if "basic" in cmd['cmd']:
            sleep(self.conf['topo_discovery'])
            results.append(self._ping_test())
            results.append(self._iperf_test())
        else:
            results = [False]
        self._stop_hosts()
        return results

    def _read_cmd(self):
        cmd = None
        try:
            line = sys.stdin.readline()
            cmd = eval(line)
        except Exception as e:
            self.log.output(str(e))
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
