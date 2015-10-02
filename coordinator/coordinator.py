#!/bin/env python
# Samuel Jero <sjero@purdue.edu>
# Testing Coordinator
#
# Comments on controller<->executor message format:
# Messages are arbitrary strings ending in \n
# use sock.send() to send and sock.makefile.readline() to receive a full message.
# readline() properly handles waiting for a full message before delivering it. On
# error, an empty string is returned.
# Arbitrary python can be passed back and forth with str=repr(data) and data=eval(str)
import os
import sys
import time
from datetime import datetime
import SocketServer as ss
import argparse
import threading
import strategies

system_home = os.path.split(os.path.dirname(os.path.realpath(__file__)))[0]
config_path = os.path.abspath(os.path.join(system_home, 'config'))
sys.path.insert(0,config_path)
import config

#Threaded Server Class
class ThreadingTCPServer(ss.ThreadingMixIn, ss.TCPServer):
	pass

#Global Strategy Generator
strat_gen = 0
strat_lock = threading.Lock()

#Global Logger
lg_lock = threading.Lock()
lg = 0

#Executor List
exec_lst = []
exec_lst_lock = threading.Lock()


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
				#Check if in executor list
				exec_lst_lock.acquire()
				if parsed[1] not in exec_lst:
					lg_lock.acquire()
					lg.write("[%s] New Executor: %s\n" % (str(datetime.today()),parsed[1]))
					print "[%s] New Executor: %s" % (str(datetime.today()),parsed[1])
					lg_lock.release()
					exec_lst.append(parsed[1])
				exec_lst_lock.release()
	
				#Get Next Strategy
				strat_lock.acquire()
				strat = strat_gen.next_strategy()
				strat_lock.release()

				if strat=="":
					#Finished
					lg_lock.acquire()
					lg.write("[%s] Finished Testing\n" % (str(datetime.today())))
					print "[%s] Finished Testing" % (str(datetime.today()))
					lg_lock.release()
					self.request.send("%s\n"%(repr([])))
					return

				#Send strategy
				string = repr(strat)
				lg_lock.acquire()
				lg.write("[%s] Executor (%s) testing strategy: %s\n" % (str(datetime.today()),parsed[1], string))
				lg.flush()
				print "[%s] Executor (%s) testing strategy: %s" % (str(datetime.today()),parsed[1], string)
				lg_lock.release()
				self.request.send("%s\n"%(string))

def main(args):
	global lg, strat_gen
	#Parse Args
	argp = argparse.ArgumentParser(description='Testing Coordinator')
	argp.add_argument('-p','--port', type=int, default=config.coordinator_port)
	args = vars(argp.parse_args(args[1:]))
	print "Starting Coordinator..."

	#Open Log file
	lg = open(config.coord_log, "w")
	lg.write("[%s] Starting Coordinator\n" % (str(datetime.today())))
	lg.flush()

	#Create Strategy Generator
	strat_gen = strategies.StrategyGenerator(lg)
	strat_gen.build_strategies()
	
	#Start Server
	ThreadingTCPServer.allow_reuse_address = True
	server = ThreadingTCPServer(('',args['port']), ExecutorHandler)
	server.serve_forever();

	#Close log
	lg.write(str(datetime.today()) + "\n")
	lg.close()

if __name__ == "__main__":
	main(sys.argv)
