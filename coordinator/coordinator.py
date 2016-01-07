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
res_lg = 0

#Executor List
exec_lst = {}
exec_lst_lock = threading.Lock()


class ExecutorHandler(ss.StreamRequestHandler):
	#Called on every new TCP connection
	def handle(self):
		instance = ""
		strat = []
		fb = None

		while True:
			#Get Message
			msg = ""
			try:
				msg = self.rfile.readline()
			except Exception as e:
				print e
			if msg == "":
				#Connection Error!
				if len(strat) > 0:
					strat_lock.acquire()
					strat_gen.return_strategy(strat)
					strat_lock.release()
				exec_lst_lock.acquire()
				if len(instance) > 0 and instance in exec_lst:
					del exec_lst[instance]
				exec_lst_lock.release()
				lg_lock.acquire()
				lg.write("[%s] Executor (%s) failed\n" % (str(datetime.today()),instance))
				print "[%s] Executor (%s) failed" % (str(datetime.today()),instance)
				lg_lock.release()
				break

			#Parse Message
			try:
				msg = eval(msg)
			except Exception as e:
				continue

			if msg['msg'] == 'READY':
				#New Strategy Request
				instance = msg['instance']
				strat = []
				fb = None

				#Check if Executor is new
				exec_lst_lock.acquire()
				if instance not in exec_lst:
					#New executor
					lg_lock.acquire()
					lg.write("[%s] New Executor: %s\n" % (str(datetime.today()),instance))
					print "[%s] New Executor: %s" % (str(datetime.today()),instance)
					lg_lock.release()
					exec_lst[instance] = []

					#Do Perf Baseline
					lg_lock.acquire()
					lg.write("[%s] Executor (%s) doing baseline\n" % (str(datetime.today()),instance))
					print "[%s] Executor (%s) doing baseline" % (str(datetime.today()),instance)
					lg_lock.release()
					msg = {'msg':'BASELINE', 'test': config.coord_test_case}
					try:
						self.request.send("%s\n"%(repr(msg)))
					except Exception as e:
						#Connection Error!
						if len(strat) > 0:
							strat_lock.acquire()
							strat_gen.return_strategy(strat)
							strat_lock.release()
						del exec_lst[instance]
						lg_lock.acquire()
						lg.write("[%s] Executor (%s) failed\n" % (str(datetime.today()),instance))
						print "[%s] Executor (%s) failed" % (str(datetime.today()),instance)
						lg_lock.release()
						exec_lst_lock.release()
						break
					exec_lst_lock.release()
					continue
				exec_lst_lock.release()
	
				#Get Next Strategy
				if len(strat)==0:
					strat_lock.acquire()
					strat = strat_gen.next_strategy()
					strat_lock.release()
				else:
					#Strategy already pending
					pass

				#Check if Finished
				if len(strat)==0:
					lg_lock.acquire()
					lg.write("[%s] Finished Testing\n" % (str(datetime.today())))
					print "[%s] Finished Testing" % (str(datetime.today()))
					lg_lock.release()

					#Notify Executor
					msg = {'msg':'DONE'}
					try:
						self.request.send("%s\n"%(repr(msg)))
					except Exception as e:
						pass

					#Remove Exector from list
					exec_lst_lock.acquire()
					del exec_lst[instance]
					exec_lst_lock.release()
					return

				#Send strategy
				lg_lock.acquire()
				lg.write("[%s] Executor (%s) testing strategy: %s\n" % (str(datetime.today()),instance, strat))
				print "[%s] Executor (%s) testing strategy: %s" % (str(datetime.today()),instance, strat)
				lg_lock.release()
				msg = {'msg':'STRATEGY', 'data':strat}
				try:
					self.request.send("%s\n"%(repr(msg)))
				except Exception as e:
					#Connection Error!
					if len(strat) > 0:
						strat_lock.acquire()
						strat_gen.return_strategy(strat)
						strat_lock.release()
					exec_lst_lock.acquire()
					del exec_lst[instance]
					exec_lst_lock.release()
					lg_lock.acquire()
					lg.write("[%s] Executor (%s) failed\n" % (str(datetime.today()),instance))
					print "[%s] Executor (%s) failed" % (str(datetime.today()),instance)
					lg_lock.release()
					break
			elif msg['msg']=="RESULT":
				#Testing Results
				res = msg['value']
				reason = msg['reason']

				#Print Result
				lg_lock.acquire()
				lg.write("[%s] Executor (%s) Result: %s\n" % (str(datetime.today()),instance, str(res)))
				print "[%s] Executor (%s) Result: %s" % (str(datetime.today()),instance, str(res))
				lg_lock.release()

				#Process Result
				strat_lock.acquire()
				strat_gen.strategy_feedback(strat, fb, res)
				strat_gen.strategy_result(strat, (res,reason))
				strat_lock.release()

				#Clear Current Strategy
				strat = []
				fb = None
			elif msg['msg'] == "FEEDBACK":
				#Testing Feedback
				data = msg['data']
				fb = data

				#Print Result
				lg_lock.acquire()
				lg.write("[%s] Executor (%s) sent feedback...\n" % (str(datetime.today()),instance))
				print "[%s] Executor (%s) sent feedback..." % (str(datetime.today()),instance)
				lg_lock.release()

				#Process Result
				strat_lock.acquire()
				strat_gen.strategy_feedback(strat, data)
				strat_lock.release()
			else:
				print "Unknown Message: %s" % msg
			lg_lock.acquire()
			lg.flush()
			lg_lock.release()

def main(args):
	global lg, res_lg, strat_gen
	#Parse Args
	argp = argparse.ArgumentParser(description='Testing Coordinator')
	argp.add_argument('-p','--port', type=int, default=config.coordinator_port)
	argp.add_argument('-c','--checkpoint', default=config.coord_checkpoint_file)
	argp.add_argument('-r','--restore', action='store_true')
	argp.add_argument('-l','--load', default="")
	args = vars(argp.parse_args(args[1:]))
	if args['restore'] == True:
		mode = "a"
	else:
		mode = "w"
	print "Starting Coordinator..."

	#Open Log file
	lg = open(config.coord_log, mode)
	lg.write("[%s] Starting Coordinator\n" % (str(datetime.today())))
	lg.flush()

	#Open Results File
	res_lg = open(config.coord_results_log, mode)
	res_lg.write("#Started %s\n" % (str(datetime.today())))
	res_lg.flush()

	#Create Strategy Generator
	strat_gen = strategies.StrategyGenerator(lg, res_lg)
	if len(args['load']) > 0:
		#Load fixed list of strategies
		print "Loading Strategies from File..."
		lg.write("[%s] Loading Strategies from File\n" % (str(datetime.today())))
		f = open(args['load'],"r")
		strat_gen.load_from_file(f)
		f.close()
	else:
		#Generate Strategies
		print "Generating Strategies..."
		lg.write("[%s] Generating Strategies\n" % (str(datetime.today())))
		strat_gen.build_strategies()

	#Restore, if needed
	if args['restore'] == True:
		ck = open(args['checkpoint'], "r")
		if strat_gen.restore(ck) == False:
			return

	#Open Checkpoint file
	if len(args['checkpoint']) > 0:
		ck = open(args['checkpoint'], "w")
		strat_gen.enable_checkpointing(ck)
	
	#Start Server
	ThreadingTCPServer.allow_reuse_address = True
	server = ThreadingTCPServer(('',args['port']), ExecutorHandler)
	server.serve_forever();

	#Close log
	lg.write(str(datetime.today()) + "\n")
	lg.close()
	res_lg.close()

if __name__ == "__main__":
	main(sys.argv)
