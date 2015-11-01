#!/usr/bin/env python
# Samuel Jero <sjero@purdue.edu>
# Testing Script
from mininet.net import Mininet
from mininet.node import UserSwitch, OVSKernelSwitch, Controller, RemoteController
from mininet.node import CPULimitedHost
from mininet.topo import Topo
from mininet.log import lg
from mininet.link import TCLink
from functools import partial
from threeTierTree import ThreeTierTree
from fatTree import FatTree
from fixedTree import FixedTree
from time import time, sleep
from mininet.cli import CLI
from mininet.util import quietRun
from functools import partial
import string
import os
import sys
import re
import time
import threading
import switchmon


ENABLE_STAT = True
SWITCH_PNAME = 'ovs-vswitchd'


def func_timeout():
    lg.error('iperf timeout\n')
    os.system("killall -9 iperf")


def _parseIperf(iperfOutput):
    """Parse iperf output and return bandwidth.
       iperfOutput: string
       returns: result string"""
    r = r'([\d\.]+ \w+/sec)'
    m = re.findall(r, iperfOutput)
    if m:
        return m[-1]
    else:
        # was: raise Exception(...)
        lg.error('could not parse iperf output: ' + iperfOutput)
        return 0


def iperf(hosts=None, l4Type='TCP', udpBw='10M', fmt=None,
          seconds=5, port=5001, timeout=1):
    """Run iperf between two hosts.
       hosts: list of hosts; if None, uses first and last hosts
       l4Type: string, one of [ TCP, UDP ]
       udpBw: bandwidth target for UDP test
       fmt: iperf format argument if any
       seconds: iperf time to transmit
       port: iperf port
       returns: two-element array of [ server, client ] speeds
       note: send() is buffered, so client rate can be much higher than
       the actual transmission rate; on an unloaded system, server
       rate should be much closer to the actual receive rate"""
    assert len(hosts) == 2
    client, server = hosts
    lg.output('*** Iperf: testing', l4Type, 'bandwidth between',
              client, 'and', server, '\n')
    server.cmd('killall -9 iperf')
    iperfArgs = 'iperf -p %d ' % port
    bwArgs = ''
    if l4Type == 'UDP':
        iperfArgs += '-u '
        bwArgs = '-b ' + udpBw + ' '
    elif l4Type != 'TCP':
        raise Exception('Unexpected l4 type: %s' % l4Type)
    if fmt:
        iperfArgs += '-f %s ' % fmt
    server.sendCmd(iperfArgs + '-s')
    time.sleep(0.1)
    client.sendCmd(iperfArgs + '-t %d -c ' % seconds +
                   server.IP() + ' ' + bwArgs)
    time.sleep(seconds + timeout)
    tmr = threading.Timer(15, func_timeout)
    tmr.start()
    client.sendInt()
    server.sendInt()
    servout = server.waitOutput()
    os.system("killall -9 iperf")
    cliout = client.waitOutput()
    tmr.cancel()
    lg.debug('Client output: %s\n' % cliout)
    lg.debug('Server output: %s\n' % servout)
    result = [_parseIperf(servout), _parseIperf(cliout)]
    if l4Type == 'UDP':
        result.insert(0, udpBw)
    lg.output('*** Results: %s\n' % result)
    return result

# Main
if __name__ == '__main__':
    try:
        # Set Log Level
        lg.setLogLevel('info')
        #lg.setLogLevel( 'error' )

        if len(sys.argv) < 2:
            lg.output("No Controller!\n")
            sys.exit()

        ctlip = list()
        ctlport = list()
        for i in range(1, len(sys.argv)):
            tmp = string.split(sys.argv[i], ':')
            if len(tmp) != 2:
                lg.output("Invalid controller format. Expect:  <host:port>")
                sys.exit()
            ctlip.append(tmp[0])
            ctlport.append(int(tmp[1]))

        # Setup Network
        ts = time.time()
        topo = FixedTree(depth=2, fanout=2)
        network = Mininet(topo=topo, controller=None, switch=OVSKernelSwitch)
        for i in range(0, len(ctlip)):
            network.addController(
                'c' + str(i + 1), controller=RemoteController, ip=ctlip[i], port=ctlport[i])
        network.start()
        if ENABLE_STAT:
            lg.output('[timer] Setup network: %d sec.\n' % (time.time() - ts))

        # Setup Evil Node
        evilh = network.get("h3")
        evilh.setMAC(network.get("h4").MAC())
        evilh.setIP(network.get("h4").IP())

        # Wait for topology discovery
        monitor_id = switchmon.start(pname=SWITCH_PNAME, lg=lg)
        sleep(10)

        results = list()

        # Test 1 -- ping
        lg.output("\n\nTest 1 --- Ping\n")
        found = False
        ts = time.time()
        for ha in network.hosts:
            for hb in network.hosts:
                if ha != hb and ha != evilh and hb != evilh:
                    res = network.ping([ha, hb], timeout=3)
                    if res > 0:
                        found = True
        if found:
            results.append(False)
        else:
            results.append(True)
        if ENABLE_STAT:
            lg.output('[timer] Pingall: %d sec.\n' % (time.time() - ts))

        # Test 2 -- iperf
        lg.output("\n\nTest 2 --- Iperf\n")
        ts = time.time()
        found = False
        for ha in network.hosts:
            for hb in network.hosts:
                if ha != hb and ha != evilh and hb != evilh:
                    try:
                        res = iperf([ha, hb], l4Type='TCP', seconds=2)
                        if res[0] == 0 or res[1] == 0:
                            found = True
                            break
                    except Exception as e:
                        lg.output(str(e) + "\n")
                        hb.sendInt()
                        os.system("pkill iperf")
                        hb.waitOutput()
                        found = True
        if found:
            results.append(False)
        else:
            results.append(True)
        if ENABLE_STAT:
            lg.output('[timer] Iperf: %d sec.\n' % (time.time() - ts))

        # Test 3 -- www
        lg.output("\n\nTest 3 --- WWW\n")
        ts = time.time()
        network.get("h4").sendCmd(
            "cd /root/web/benign; python -m SimpleHTTPServer 8080")
        evilh.sendCmd("cd /root/web/evil; python -m SimpleHTTPServer 8080")
        sleep(1)
        res = network.hosts[0].cmd(
            "curl --connect-timeout 5 http://" + network.get("h4").IP() + ":8080/")
        lg.output(res + "\n")
        if string.find(res, "HTML") > 0 and string.find(res, "Evil") == -1:
            results.append(True)
        else:
            results.append(False)
        evilh.sendInt()
        network.get("h4").sendInt()
        if ENABLE_STAT:
            lg.output('[timer] www: %d sec.\n' % (time.time() - ts))

        # Dump process monitor output
        if monitor_id is not None:
            switchmon.stop(monitor_id, lg)

		#Pull Rules
        raw = []
        for s in network.switches:
            raw.append(s.name + "," + s.dpctl("dump-flows"))

        #Write Output
        d = {"results": results, "rules": raw}
        print repr(d)
        lg.output(str(d) + "\n")

        # Cleanup Network
        ts = time.time()
        network.stop()
        if ENABLE_STAT:
            lg.output('[timer] Stop network: %d sec.\n' % (time.time() - ts))
    except Exception as e:
        print repr({"results":[False, False, False]})
        lg.output(e)
        os.system("mn -c > /dev/null 2>/dev/null")
