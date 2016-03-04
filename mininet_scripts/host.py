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
import httplib
from arp import Arp
from module import Module
from lldp import LLDPAttack

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
    class HttpServerThread(threading.Thread):
        def __init__(self, port):
            threading.Thread.__init__(self)
            self.port = port
            self.httpd = None

        def run(self):
            Handler = SimpleHTTPServer.SimpleHTTPRequestHandler
            self.httpd = SocketServer.TCPServer(("", self.port), Handler)
            self.httpd.serve_forever()

        def quit(self):
            if self.httpd is not None:
                self.httpd.shutdown()
                self.httpd.socket.close()
            
    def __init__(self,myeth,myip,myif):
        self.name = "http"
        self.ip = myip
        self.eth = myeth
        self.iface = myif
        self._server = None
        self.timeout = 2
        self.saved_cwd = None
        self.good_path = "/root/web/benign/"
        self.bad_path = "/root/web/evil/"
        self.port = 9000
    
    def cmd(self, cmd):
        if not isinstance(cmd,dict):
            return False, "Not dict"
        if not 'module' in cmd:
            return False, "no module member"
        if cmd['module'] is not "http":
            return False, "not http module!"
        if not 'command' in cmd:
            return False, "no cmd member"
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
        if self._server is not None:
            self._stop_server()

        self.saved_cwd = os.getcwd()
        os.chdir(self.good_path)

        self._server = HttpTest.HttpServerThread(self.port)
        self._server.daemon = True
        self._server.start()
        return True, "Server Started"

    def _start_mal_server(self):
        if self._server is not None:
            self._stop_server()

        self.saved_cwd = os.getcwd()
        os.chdir(self.bad_path)

        self._server = HttpTest.HttpServerThread(self.port)
        self._server.daemon = True
        self._server.start()
        return True, "Server Started"

    def _start_client(self,cmd):
        if not "dst" in cmd:
            return False, "No destination"
        try:
            conn = httplib.HTTPConnection(cmd["dst"],self.port,timeout=self.timeout)
            conn.connect()
            conn.request("GET","/")
            r1 = conn.getresponse()
            if r1.status != 200:
                conn.close()
                return False,"Error Code: %d" % r1.status
            body = r1.read()
            if "Evil" in body:
                conn.close()
                return False,"Spoofing Suceeded"
            conn.close()
        except Exception as e:
            return False, "Error: %s" % str(e)
        return True, "Test Passed"

    def _stop_server(self):
        if self._server == None:
            return True, "Server Not Running"

        if self.saved_cwd is not None:
            os.chdir(self.saved_cwd)

        self._server.quit()
        self._server = None
        return True, "Server Stopped"

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
        elif msg['module'] is "http":
            if "http" in mods:
                m = mods["http"]
            else:
                m = HttpTest(mymac,myip,myiface)
                mods['http'] = m
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
        elif msg['module'] is "lldp":
            if "lldp" in mods:
                m = mods['lldp']
            else:
                m = LLDPAttack(mymac,myip,myiface)
                mods['lldp'] = m
            out = response(m.cmd(msg))
            send_response(out)
        else:
            print "Unknown Module"

if __name__ == '__main__':
    try:
        main(sys.argv)
    except Exception as e:
        send_response({'code':False,'output':str(e)})
