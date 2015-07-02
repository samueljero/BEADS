#!/bin/env python
# Samuel Jero <sjero@purdue.edu>
# Actual strategy test routines
import manage_vms as mv
import os
import sys

system_home = os.path.split(os.path.dirname(os.path.realpath(__file__)))[0]
test_controller_start_cmd = "start"
test_controller_stop_cmd = "stop"
test_controller_port = 6633
test_mininet_cmd = "/root/test1.py {controllers}"
test_proxy_addr = "10.0.0.1"
test_proxy_base_port = 1025


def doTest(mininet, controllers, strategy):
	assert(isinstance(mininet, (list,tuple)) and isinstance(controllers, (list,tuple)) and len(mininet) == 1)
	
	controlleraddrs = list()
	proxyaddrs = list()
	for c in controllers:
		controlleraddrs.append(mv.vm2ip(c) + ":" + str(test_controller_port))
		proxyaddrs.append(test_proxy_addr + ":" + str(test_proxy_base_port + c))
