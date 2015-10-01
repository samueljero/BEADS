#Samuel Jero <sjero@purdue.edu>
#SDN Testing Strategy Generation
import os
import sys
import time
import openflow
import manipulations

system_home = os.path.split(os.path.dirname(os.path.realpath(__file__)))[0]
config_path = os.path.abspath(os.path.join(system_home, 'config'))
sys.path.insert(0,config_path)
import config

class StrategyGenerator:
	#Constructor
	def __init__(self, lg):
		self.lg = lg
		self.strat_lst = []
		self.strat_ptr = 0
		self.test_case = "/root/test2.py {controllers}"

	def next_strategy(self):
		return self.strat_lst.pop()

	def build_strategies(self):
		for pkt in openflow.openflow:
			print "Creating Strategies for " + pkt[0] + "..."
			mtype = pkt[0]
			fields = pkt[1]

			#Message Delivery Strategies
			for t in manipulations.message_actions:
				act = t[1]
				for v in t[2]:
					strat = "{controllers[" +str(0) + "]}" + ",{sw},*,{pkt_type},*,{action}".format(sw=2, pkt_type=mtype,action=act.format(v))
					self.strat_lst.append([self.test_case, [strat]])
			
