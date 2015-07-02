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
import string
import os
import sys


#Main
if __name__ == '__main__':
	try:
		#Set Log Level
		lg.setLogLevel( 'info' )
		#lg.setLogLevel( 'error' )

		if len(sys.argv) < 2:
			lg.output("No Controller!\n")
			sys.exit()

		ctlip = list()
		ctlport = list()
		for i in range(1, len(sys.argv)):
			tmp = string.split(sys.argv[i],':')
			if len(tmp) != 2:
				lg.output("Invalid controller format. Expect:  <host:port>")
				sys.exit()
			ctlip.append(tmp[0])
			ctlport.append(int(tmp[1]))

		#Setup Network
		#topo = ThreeTierTree(5,6)
		#topo = FatTree(4,4)
		topo = FixedTree(depth=2, fanout=2)
		network = Mininet(topo=topo, controller=None, switch=OVSKernelSwitch)
		for i in range(0, len(ctlip)):
			network.addController('c' + str(i+1), controller=RemoteController, ip=ctlip[i], port=ctlport[i])
		network.start()

		#Wait for topology discovery
		sleep(10)

		results = list()

		#Test 1 -- ping
		lg.output("\n\nTest 1 --- Ping\n")
		res = network.pingAll()
		if res > 0:
			results.append(False)
		else:
			results.append(True)

		#Test 2 -- iperf
		lg.output("\n\nTest 2 --- Iperf\n")
		found = False
		for ha in network.hosts:
			for hb in network.hosts:
				if ha != hb:
					try:
						res = network.iperf([ha, hb], l4Type = 'TCP', seconds=2)
						if res[0] == 0 or res[1] == 0:
							found = True
							break
					except:
						hb.sendInt()
						hb.waitOutput()
						found = True
						break
			if found == True:
				break
		if found:
			results.append(False)
		else:
			results.append(True)

		#Test 3 -- www
		lg.output("\n\nTest 3 --- WWW\n")
		network.hosts[3].sendCmd("cd /root/web/benign; python -m SimpleHTTPServer 8080")
		network.hosts[1].sendCmd("cd /root/web/evil; python -m SimpleHTTPServer 8080")
		network.hosts[2].sendCmd("cd /root/web/evil; python -m SimpleHTTPServer 8080")
		sleep(1)
		res = network.hosts[0].cmd("curl http://" + network.hosts[3].IP() + ":8080/")
		lg.output(res + "\n")
		if string.find(res, "HTML") > 0 and string.find(res, "evil") == -1:
			results.append(True)
		else:
			results.append(False)
		network.hosts[1].sendInt()
		network.hosts[2].sendInt()
		network.hosts[3].sendInt()

		print results

		#Cleanup Network
		network.stop()
	except Exception as e:
		print [False, False, False]
		lg.output(e)
		os.system("mn -c > /dev/null 2>/dev/null")
