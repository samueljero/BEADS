#!/bin/env python
# Samuel Jero <sjero@purdue.edu>
# Testing Coordinator
import os
import sys
import time
from datetime import datetime
import SocketServer as ss
import argparse

system_home = os.path.split(os.path.dirname(os.path.realpath(__file__)))[0]
config_path = os.path.abspath(os.path.join(system_home, 'config'))
sys.path.insert(0,config_path)
import config

class ThreadingTCPServer(ss.ThreadingMixIn, ss.TCPServer):
	pass

#Comments on controller<->executor message format:
# Messages are arbitrary strings ending in \n
# use sock.send() to send and sock.makefile.readline() to receive a full message.
# readline() properly handles waiting for a full message before delivering it. On
# error, an empty string is returned.
# Arbitrary python can be passed back and forth with str=repr(data) and data=eval(str)
class ExecutorHandler(ss.StreamRequestHandler):
	#Called on every new TCP connection
	def handle(self):
		while True:
			#Get Message
			msg = self.rfile.readline()
			if msg == "":
				break
			print msg

			#Parse message
			parsed = msg.split()
			if parsed[0]=="READY":
				#Send strategy
				strat = ["/root/test2.py {controllers}", ["*,*,*,*,*,CLEAR,*"]]
				string = repr(strat)
				print string
				self.request.send("%s\n"%(string))

def main(args):
	#Parse Args
	argp = argparse.ArgumentParser(description='Testing Coordinator')
	argp.add_argument('-p','--port', type=int, default=config.coordinator_port)
	args = vars(argp.parse_args(args[1:]))
	
	#Start Server
	ThreadingTCPServer.allow_reuse_address = True
	server = ThreadingTCPServer(('',args['port']), ExecutorHandler)
	server.serve_forever();

if __name__ == "__main__":
	main(sys.argv)
