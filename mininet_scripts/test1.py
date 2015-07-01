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


#Main
if __name__ == '__main__':
	#Set Log Level
	lg.setLogLevel( 'info' )
	#lg.setLogLevel( 'error' )

	#Setup Network
	#topo = ThreeTierTree(5,6)
	#topo = FatTree(4,4)
	topo = FixedTree(depth=2, fanout=2)
	network = Mininet(topo=topo, controller=None, switch=OVSKernelSwitch)
	network.addController('c1', controller=RemoteController, ip='10.0.0.1', port=1025)
	network.addController('c2', controller=RemoteController, ip='10.0.0.1', port=1026)
	network.addController('c3', controller=RemoteController, ip='10.0.0.1', port=1027)
	network.start()

	#Wait for topology discovery
	sleep(10)

	#Test 1 -- ping

	#Test 2 -- iperf

	#Test 3 -- www
	

	#Cleanup Network
	network.stop()
	
