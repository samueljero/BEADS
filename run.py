#!/bin/env python
# Samuel Jero <sjero@purdue.edu>
# Top-level testing script
from scripts.test import *
import sys
import time
from datetime import datetime

system_home = os.path.dirname(os.path.realpath(__file__))
controllers_per_instance = 1
logs_loc = system_home + "/logs/inst{instance}.log"

def main(args):
	global controllers_per_instance, logs_loc
	vms_per_instance = controllers_per_instance + 1
	instance = 0

	#Parse args
	if (len(args) > 1):
		instance = int(args[1])
	print "Running Instance " + str(instance) + "..."

	#Open Log file
	lg = open(logs_loc.format(instance=instance), "w")
	lg.write(str(datetime.today()) + "\n")
	lg.write("Instance: " + str(instance) + "\n")

	#Determine VMs
	mininet = [instance*vms_per_instance + 1]
	controllers = list()
	for i in range(1,vms_per_instance):
		controllers.append(mininet[0] + i)
	lg.write("Mininet: " + str(mininet) + "\n")
	lg.write("Controllers: " + str(controllers) + "\n")
	lg.flush()
	

	#Start VMs
	print "Starting VMs..."
	startVms(mininet, controllers)
	time.sleep(30)

	#Do Tests
	print "Starting Tests..."
	print "Test 1"
	res = doTest(mininet, controllers, "/root/test2.py {controllers}", ["*,*,*,*,*,CLEAR,*"], 1, lg)
	print "Test Result: " + str(res)
	print "******"
	print "Test 2"
	res = doTest(mininet, controllers, "/root/test2.py {controllers}", ["{controllers[0]},3,*,of_packet_in,12,CLIE,mfield=12&mval=2&act==&val=1"], 2, lg)
	print "Test Result: " + str(res)
	print "******"
	print "Test 3"
	res = doTest(mininet, controllers, "/root/test1.py {controllers}", ["*,*,*,*,*,CLEAR,*"], 3, lg)
	print "Test Result: " + str(res)
	print "******"
	print "Test 4"
	res = doTest(mininet, controllers, "/root/test1.py {controllers}", ["{controllers[0]},3,*,of_packet_in,12,CDIVERT,mfield=12&mval=3&p=100&sw=2&ctl={controllers[0]}","{controllers[0]},2,*,of_packet_in,12,CDIVERT,mfield=12&mval=3&p=100&sw=3&ctl={controllers[0]}"], 4, lg)
	print "Test Result: " + str(res)
	print "******"

	#Stop VMs
	print "Stopping VMs..."
	stopVms(mininet, controllers)
	time.sleep(30)

	#Close log
	lg.close()

if __name__ == "__main__":
	main(sys.argv)
