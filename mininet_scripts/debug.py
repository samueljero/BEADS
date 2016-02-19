#!/usr/bin/env python
# Samuel Jero <sjero@purdue.edu>
# Testing Script
from mininet.net import Mininet
from mininet.node import UserSwitch, OVSKernelSwitch, Controller, RemoteController
from mininet.node import CPULimitedHost
from mininet.topo import Topo
from mininet.log import lg
from mininet.link import TCLink
from mininet.cli import CLI
from mininet.util import quietRun
from functools import partial
from threeTierTree import ThreeTierTree
from fatTree import FatTree
from fixedTree import FixedTree
from hostController import HostController
import os
import sys
import time

sys.path.insert(0, '/root/monitors/api')


import procmon

ENABLE_STAT = True
SWITCH_PNAME = 'ovs-vswitchd'

def get_config():
    conf = None
    try:
        line = sys.stdin.readline()
        conf = eval(line)
    except Exception as e:
        lg.output(str(e))
    if 'controllers' not in conf:
        return None
    if 'topo_discovery' not in conf:
        return None
    return conf

def send_output(out):
    if out == None:
        out = {"results":[False]}
    print repr(out)


# Main
def main():
    # Set Log Level
    lg.setLogLevel('info')
    #lg.setLogLevel( 'error' )

    #Read and parse configuration
    conf = get_config()
    if conf is None:
		send_output(None)
		return

    ctlip = list()
    ctlport = list()
    for i in range(0,len(conf['controllers'])):
        ctlip.append(conf['controllers'][i][0])
        ctlport.append(conf['controllers'][i][1])

    #Setup Network
    ts = time.time()
    topo = FixedTree(depth=1, fanout=2)
    network = Mininet(topo=topo, controller=None, switch=OVSKernelSwitch)
    for i in range(0, len(ctlip)):
        network.addController(
            'c' + str(i + 1), controller=RemoteController, ip=ctlip[i], port=ctlport[i])
    network.start()
    if ENABLE_STAT:
        lg.output('[timer] Setup network: %f sec.\n' % (time.time() - ts))

    #Start Switch Monitor
    monitor_id = procmon.start(pname=SWITCH_PNAME, lg=lg)

    #Tests
    ts = time.time()
    hc = HostController(network,lg,conf)
    results = hc.do_test()
    if results == None:
        results = [False]
    if ENABLE_STAT:
        lg.output('[timer] Tests: %f sec.\n' % (time.time() - ts))


    #Dump process monitor output
    stat_dict = procmon.stop(monitor_id, lg)
    
    # Pull Rules
    raw = []
    for s in network.switches:
                raw.append(s.name + "," + s.dpctl("dump-flows"))

    #Write Output
    d = {"results": results, "rules": raw, "stat": stat_dict}
    send_output(d)
    lg.output(str(d) + "\n")

    # Cleanup Network
    ts = time.time()
    network.stop()
    if ENABLE_STAT:
        lg.output('[timer] Stop network: %f sec.\n' % (time.time() - ts))

# Main
if __name__ == '__main__':
    try:
         main()
    except Exception as e:
        send_output(None)
        lg.output(e)
        os.system("mn -c > /dev/null 2>/dev/null")
