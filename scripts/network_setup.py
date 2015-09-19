#!/usr/bin/env python
# Samuel Jero <sjero@purdue.edu>
# Network setup script

import os
import argparse
import sys

user = os.getlogin()

def do_network(cmd, start, end):
	global user
	if end - start < 0:
		print "Error: End before start!"
		sys.exit()

	if cmd == "start":
		os.system("sudo brctl addbr brhost")
		os.system("sudo ifconfig brhost 10.0.0.1 netmask 255.255.0.0 up")
		os.system("echo \"\" > /tmp/ip-mac")
		for i in range(start, end):
			os.system("sudo tunctl -u {0} -t tap-h{1}".format(user, str(i)))
			os.system("sudo ifconfig tap-h{0} 0.0.0.0 up".format(str(i)))
			os.system("sudo brctl addif brhost tap-h{0}".format(str(i)))
			os.system("echo \"10.0.1.{:d} 00:00:00:01:00:{:02X}\" >> /tmp/ip-mac".format(i,i))
		os.system("sudo /usr/local/sbin/restart-dhcpd < /tmp/ip-mac")
	elif cmd == "stop":
		for i in range(start, end):
			os.system("sudo ifconfig tap-h{0} down".format(str(i)))
			os.system("sudo brctl delif brhost tap-h{0}".format(str(i)))
			os.system("sudo tunctl -d tap-h{0}".format(str(i)))
		os.system("sudo ifconfig brhost down")
		os.system("sudo brctl delbr brhost")
		os.system("rm /tmp/ip-mac")
	else:
		return False
	return True

if __name__ == "__main__":
	if len(sys.argv)!= 4:
		print "Usage: network_setup.py start|stop start end"
		sys.exit()

	cmd = sys.argv[1]
	start = int(sys.argv[2])
	end = int(sys.argv[3]) + 1
	do_network(cmd, start, end)
