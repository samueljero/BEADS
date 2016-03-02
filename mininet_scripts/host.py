#!/usr/bin/env python
#Samuel Jero <sjero@purdue.edu>
#(Malicious) Host Program
#Communication is via python dicts on stdin/stdout
import re
import subprocess
import os
import sys
import threading
import SimpleHTTPServer
import SocketServer
from arp import Arp
from module import Module

class Ping(Module):
    def __init__(self,myeth,myip,myif):
        self.name = "ping"
        self.ip = myip
        self.eth = myeth
        self.iface = myif
        self.timeout = 3

    def cmd(self, cmd):
        if not isinstance(cmd,dict):
            return False, "Not dict"
        if not 'module' in cmd:
            return False, "no module member"
        if cmd['module'] is not "ping":
            return False, "not ping module!"
        if not 'dst' in cmd:
            return False, "No destination"
        return self._ping(cmd['dst'])

    def _ping(self, dst):
        opts = ""
        if self.timeout:
            opts = "-W %s" % self.timeout
        cmd = "ping -c1 %s %s" % (opts, dst)
        out = ""
        try:
            p = subprocess.Popen(cmd,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,shell=True)
            out = p.communicate()[0]
        except Exception as e:
            return False, "Exception: %s" % str(e)
        sent, received = self._parsePing(out)
        if received > sent:
            return False, "Recieved too many packets!"
        lost = sent - received
        if lost > 0:
            return False, out
        else:
            return True, out

    def start():
        pass

    def stop():
        pass

    @staticmethod
    def _parsePing(pingOutput):
        "Parse ping output and return packets sent, received."
        # Check for downed link
        if 'connect: Network is unreachable' in pingOutput:
            return 1, 0
        r = r'(\d+) packets transmitted, (\d+) received'
        m = re.search(r, pingOutput)
        if m is None:
            return 1, 0
        sent, received = int(m.group(1)), int(m.group(2))
        return sent, received

class Iperf(Module):
    def __init__(self,myeth,myip,myif):
        self.name = "iperf"
        self.ip = myip
        self.eth = myeth
        self.iface = myif
        self._server = None
        self.timeout = 2
        self.kill_timeout = 15
    
    def cmd(self, cmd):
        if not isinstance(cmd,dict):
            return False, "Not dict"
        if not 'module' in cmd:
            return False, "no module member"
        if cmd['module'] is not "iperf":
            return False, "not iperf module!"
        if not 'command' in cmd:
            return False, "no cmd member"
        if "start-server" in cmd['command']:
            return self._start_server(cmd)
        elif "stop-server" in cmd['command']:
            return self._stop_server(cmd)
        elif "run-client" in cmd['command']:
            return self._run_client(cmd)
        else:
            return False, "Invalid command"

    def start():
        pass

    def stop():
        pass

    def _start_server(self, cmd):
        if self._server is not None:
            self._stop_server(cmd)
        server_cmd = ["/usr/bin/iperf", "-s"]
        #The Below may cause problems for very long running iperf commands that exceed PIPE buffer...
        self._server = subprocess.Popen(server_cmd,stdout=subprocess.PIPE,stderr=subprocess.STDOUT)
        if self._server is None:
            return False, "Starting Error"
        return True,"Server Started"

    def _stop_server(self,cmd):
        if self._server is None:
            return True, "Server not Started"
        self._server.terminate()
        tmr = threading.Timer(self.kill_timeout, self._timeout_func)
        tmr.start()
        output = self._server.communicate()[0]
        tmr.cancel()
        parsed = self._parseIperf(output)
        self._server = None
        return True,(parsed,output)

    def _run_client(self, cmd):
        if not 'dst' in cmd:
            return False, "No destination"
        if not 'duration' in cmd:
            return False, "No duration"
        timeout = self.timeout
        if 'timeout' in cmd:
            timeout = cmd['timeout']
        client_cmd = "iperf -c %s -t %s" % (cmd['dst'], str(cmd['duration']))
        tmr = threading.Timer(cmd['duration'] + self.kill_timeout, self._timeout_func)
        tmr.start()
        client = subprocess.Popen(client_cmd,stdout=subprocess.PIPE, stderr=subprocess.STDOUT,shell=True)
        output = client.communicate()[0]
        tmr.cancel()
        parsed = self._parseIperf(output)
        output = output
        return True,(parsed,output)

    @staticmethod
    def _timeout_func():
        os.system("killall iperf")

    @staticmethod
    def _parseIperf(iperfOutput):
        """Parse iperf output and return bandwidth.
        iperfOutput: string
        returns: result string"""
        r = r'([\d\.]+ \w+/sec)'
        m = re.findall(r, iperfOutput)
        if m:
            return m[-1]
        else:
            return 0

class HttpTest(Module):
    def __init__(self,myeth,myip,myif):
        self.name = "http"
        self.ip = myip
        self.eth = myeth
        self.iface = myif
        self._server = None
        self.timeout = 2
        self.kill_timeout = 15
    
    def cmd(self, cmd):
        if not isinstance(cmd,dict):
            return False, "Not dict"
        if not 'module' in cmd:
            return False, "no module member"
        if cmd['module'] is not "http":
            return False, "not http module!"
        if not 'command' in cmd:
            return False, "no cmd member"
        if not isinstance(cmd['command'],dict):
            return False, "bad cmd member"
        if "start-good-server" in cmd['command']:
            return self._start_good_server()
        elif "start-mal-server" in cmd['command']:
            return self._start_mal_server()
        elif "start-client" in cmd['command']:
            return self._start_client(cmd)
        elif "stop-server" in cmd['command']:
            return self._stop_server()
        else:
            return False,"Invalid Command"

    def _start_good_server(self):
        return

    def _start_mal_server(self):
        return

    def _start_client(self,cmd):
        if not "dist" in cmd:
            return False, "No destination"
        return

    def _stop_server(self):
        return

    def start(self):
        return

    def stop(self):
        return
    


def send_response(rsp):
    try:
        print "%s" % repr(rsp)
        sys.stdout.flush()
    except Exception as e:
        print e
    return

def response(out):
    r = dict()
    r['code'] = out[0]
    r['output']=out[1]
    return r

def main(args):
    mods = dict()
    #Parse commandline args
    if len(args) != 4:
        print "host.py MAC IP IFACE"
        return
    mymac = args[1]
    myip = args[2]
    myiface = args[3]


    while True:
        #Read and Parse Message
        line = ""
        msg = None
        try:
            line = sys.stdin.readline()
        except Exception as e:
            print e
            print "Exiting"
            return
        if len(line)==0:
            continue
        try:
            msg = eval(line)
        except Exception as e:
            continue
        if not isinstance(msg,dict):
            continue
        if not 'module' in msg:
            continue

        #Select Module and send command
        m = None
        if msg['module'] is "ping":
            if "ping" in mods:
                m = mods['ping']
            else:
                m = Ping(mymac, myip, myiface)
                mods['ping'] = m
            out = response(m.cmd(msg))
            send_response(out)
        elif msg['module'] is "iperf":
            if "iperf" in mods:
                m = mods['iperf']
            else:
                m = Iperf(mymac, myip, myiface)
                mods['iperf'] = m
            out = response(m.cmd(msg))
            send_response(out)
        elif msg['module'] is "arp":
            if "arp" in mods:
                m = mods['arp']
            else:
                m = Arp(mymac,myip,myiface)
                mods['arp'] = m
            out = response(m.cmd(msg))
            send_response(out)
        else:
            print "Unknown Module"

if __name__ == '__main__':
    try:
        main(sys.argv)
    except Exception as e:
        send_response({'code':False,'output':str(e)})
