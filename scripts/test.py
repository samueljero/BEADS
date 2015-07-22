#!/bin/env python
# Samuel Jero <sjero@purdue.edu>
# Actual strategy test routines
import manage_vms as mv
import os
import sys
import subprocess
import time

#SSH library
system_home = os.path.split(os.path.dirname(os.path.realpath(__file__)))[0]
lib_path = os.path.abspath(os.path.join(system_home, 'scripts','libs'))
sys.path.append(lib_path)
import spur

proxy_path = system_home + "/switch_proxy/sw_proxy"
ctl_path = system_home + "/switch_proxy/sndcmd"
test_controller_start_cmd = "start"
test_controller_stop_cmd = "stop"
test_controller_user = "root"
test_controller_port = 6633
test_mininet_cmd = "/root/test1.py {controllers}"
test_mininet_cleanup_cmd = "mn -c"
test_mininet_user = "root"
test_proxy_addr = "10.0.0.1"
test_proxy_base_port = 1025
test_proxy_com_port = 1100
test_delay = 30


def doTest(mininet, controllers, test_script, strategy, testnum, log):
	global test_controller_port, test_proxy_base_port, test_proxy_addr, test_proxy_com_port
	global test_controller_user, test_controller_start_cmd, test_mininet_user
	global proxy_path, test_controller_stop_cmd, ctl_path, test_delay, test_mininet_cleanup_cmd
	assert(isinstance(mininet, (list,tuple)) and isinstance(controllers, (list,tuple)) and len(mininet) == 1)
	result = True
	log.write("##############################Starting Test " + str(testnum) + "###################################\n")
	
	#Create Address/Port strings
	controlleraddrs = list()
	proxyaddrs = list()
	proxyports = list()
	for c in controllers:
		controlleraddrs.append(mv.vm2ip(c) + ":" + str(test_controller_port))
		proxyaddrs.append(test_proxy_addr + ":" + str(test_proxy_base_port + c))
		proxyports.append(str(test_proxy_base_port + c))
	
	#Start Proxy
	cmd = proxy_path + " -p " + str(test_proxy_com_port + mininet[0])
	for c in range(0,len(controlleraddrs)):
		cmd = cmd + " -c " +  proxyports[c] + ":" + controlleraddrs[c]
	log.write("Proxy CMD: " + cmd + "\n")
	log.write("********* Proxy output ********\n")
	log.flush()
	try:
		proxy = subprocess.Popen(cmd, shell = True, stdout = log, stderr = subprocess.STDOUT)
	except Exception as e:
		print e
		log.write("Exception: " + str(e) + "\n")
		log.flush()
		return False
	time.sleep(1)

	#Send Proxy Strategy
	for l in strategy:
		cmd = ctl_path + " -p " + str(test_proxy_com_port + mininet[0]) + " localhost \"" + l.format(controllers=proxyports) + "\""
		log.write("Strategy CMD: " + cmd + "\n")
		log.flush()
		try:
			com = subprocess.Popen(cmd, shell = True , stdout = log, stderr = subprocess.STDOUT)
			com.wait()
		except Exception as e:
			print e
			log.write("Exception: " + str(e) + "\n")
			log.flush()
			result = False


	#Start Controllers
	for c in controllers:
		shell = spur.SshShell(hostname=mv.vm2ip(c), username = test_controller_user, missing_host_key=spur.ssh.MissingHostKey.accept)
		res = shell.run(["/bin/bash","-i" ,"-c", test_controller_start_cmd])
		log.write("Starting Controller (" + mv.vm2ip(c) + ")... " + res.output + "\n")
		log.flush()
	time.sleep(test_delay)

	#Do Test
	res = None
	proc = None
	m = mininet[0]
	shell = spur.SshShell(hostname=mv.vm2ip(m), username =test_mininet_user, missing_host_key=spur.ssh.MissingHostKey.accept)
	log.write("Starting Test: " + test_mininet_cmd.format(controllers=" ".join(proxyaddrs)) + "\n")
	log.flush()
	try:
		proc = shell.run(["/bin/bash","-i" ,"-c", test_script.format(controllers=" ".join(proxyaddrs))])
		res = eval(proc.output)
	except Exception as e:
		print e
		log.write("Exception: " + str(e) + "\n")
		log.flush()

	#Evaluate Results
	if  isinstance(res, (list,tuple)):
		for r in res:
			if r == False:
				result = False
	else:
		result = False
		
	#Stop Controllers
	for c in controllers:
		shell = spur.SshShell(hostname=mv.vm2ip(c), username = test_controller_user, missing_host_key=spur.ssh.MissingHostKey.accept)
		res = shell.run(["/bin/bash","-i" ,"-c", test_controller_stop_cmd])

	#Stop Proxy
	proxy.terminate()

	#Cleanup Any Mininet Remnants
	shell = spur.SshShell(hostname=mv.vm2ip(m), username =test_mininet_user, missing_host_key=spur.ssh.MissingHostKey.accept)
	res = shell.run(["/bin/bash","-i" ,"-c", test_mininet_cleanup_cmd])
	
	#Log
	log.flush()
	log.write("*****************\n")
	log.write("********* Test Script output ********\n")
	if proc:
		log.write(proc.stderr_output)
	log.write("*****************\n")
	log.write("Test Result: " + str(result) + "\n")
	log.write("##############################Ending Test " + str(testnum) + "###################################\n")
	log.flush()
	return result


def startVms(mininet, controllers):
	assert(isinstance(mininet, (list,tuple)) and isinstance(controllers, (list,tuple)) and len(mininet) == 1)
	for c in controllers:
		mv.startvm(c)
	for m in mininet:
		mv.startvm(m)

def stopVms(mininet, controllers):
	assert(isinstance(mininet, (list,tuple)) and isinstance(controllers, (list,tuple)) and len(mininet) == 1)
	for c in controllers:
		mv.stopvm(c)
	for m in mininet:
		mv.stopvm(m)

if __name__ == "__main__":
	print "Running demo..."
	print doTest([1], [2,3], ["d"], 1, sys.stdout)
