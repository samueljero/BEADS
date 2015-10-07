#Samuel Jero <sjero@purdue.edu>
#SDN Testing Strategy Generation
import os
import sys
import time
from datetime import datetime
import openflow
import manipulations

system_home = os.path.split(os.path.dirname(os.path.realpath(__file__)))[0]
config_path = os.path.abspath(os.path.join(system_home, 'config'))
sys.path.insert(0,config_path)
import config

class StrategyGenerator:
	#Constructor
	def __init__(self, lg, res_lg):
		self.lg = lg
		self.results = res_lg
		self.strat_lst = []
		self.strat_ptr = 0
		self.failed_lst = []
		self.failed_ptr = 0

	def next_strategy(self):
		# Check for new failed strategies that need to be retried
		if (self.failed_ptr < len(self.failed_lst)):
			strat = self.failed_lst[self.failed_ptr]
			self.failed_ptr+=1
			return strat

		#Check if all strategies have been tested
		if (self.strat_ptr >= len(self.strat_lst)):
			return []

		#Select next strategy
		strat = self.strat_lst[self.strat_ptr]
		self.strat_ptr+=1

		if self.strat_ptr % 100 == 0:
			self.lg.write("[%s] Returning Strategy: %d\n" % (str(datetime.today()),self.strat_ptr))
			print "[%s] Testing Strategy: %d" % (str(datetime.today()),self.strat_ptr)
		return strat

	def return_strategy(self, strat):
		self.strat_lst.insert(self.strat_ptr + 1, strat)

	def strategy_result(self, strat, res):
		if res == False:
			#Failed strategies will be retried once to remove false positives
			if strat not in self.failed_lst:
				self.failed_lst.append(strat)
			else:
				self.results.write("FAILED, %s\n" %(str(strat)))
				self.results.flush()
				self.lg.write("[%s] Strategy HARD FAILED: %s\n" % (str(datetime.today()),str(strat)))
				print "[%s] Strategy HARD FAILED: %s" % (str(datetime.today()),str(strat))

	def strategy_feedback(self, strat, feedback):
		return

	def build_strategies(self):
		for pkt in openflow.openflow:
			print "Creating Strategies for " + pkt[0] + "..."
			mtype = pkt[0]
			fields = pkt[1]

			#Message Delivery Strategies
			for c in config.coord_test_controllers:
				for switch in config.coord_test_switches:
					for t in manipulations.message_actions:
						act = t[1]
						for v in t[2]:
							strat = "{controllers[" +str(c) + "]}" + ",{sw},*,{pkt_type},*,{action}".format(sw=switch, pkt_type=mtype,action=act.format(v))
							self.strat_lst.append([config.coord_test_case, [strat]])

			#Message Modification Strategies
			flds = self.build_field_list(fields)
			for c in config.coord_test_controllers:
				for switch in config.coord_test_switches:
					for f in flds:
						for a in manipulations.field_actions:
							for m in manipulations.field_lies:
								for v in manipulations.field_lie_values[f['type']]:
									strat = "{controllers[" +str(c) + "]}" + ",{sw},*,{pkt_type},{fld},{action}".format(sw=switch, pkt_type=mtype,fld=f['field'],action=a[1].format(m,v))
									self.strat_lst.append([config.coord_test_case, [strat]])
		self.lg.write("[%s] Strategies: %d\n" % (str(datetime.today()),len(self.strat_lst)))
		print "[%s] Strategies: %d" % (str(datetime.today()),len(self.strat_lst))

	def build_field_list(self,fields):
		lst = []
		if len(fields)==1 and 'type' in fields[0] and (fields[0]['type']=='list' or fields[0]['type']=='TLV'):
			#Lists
			l = self.build_field_list(fields[0]['fields'])
			iterations = config.coord_test_list_iters
			if('max' in fields[0]):
				iterations = fields[0]['max']
			for i in range(1,iterations + 1):
				for elm in l:
					lst.append({'field':str(i) + "." + elm['field'], 'type':elm['type']})
		else:
			#Normal structures
			for i,f in enumerate(fields):
				string = str(i + 1)
				#Ignore fields we can't change
				if 'impl' in f and f['impl'] is False:
					continue
				#Subfields
				if 'fields' in f:
					l = self.build_field_list(f['fields'])
					for i in l:
						lst.append({'field':string + "." + i['field'], 'type':i['type']})
				else:
					lst.append({'field':string, 'type':f['type']})
		return lst

	def pretty_print_field(self, msg_type, field):
		if type(field)!=str or type(msg_type)!=str:
			return
		flist = field.split(".")
		fdata = []
		for i in openflow.openflow:
			if i[0]==msg_type:
				fdata = i[1]
				break
		if len(fdata)==0:
			return
		full=""
		for i in flist:
			v = int(i) - 1
			if len(fdata)==1 and 'type' in fdata[0] and (fdata[0]['type']=='list' or fdata[0]['type']=='TLV'):
				full+=i
				full+="."
				fdata = fdata[0]['fields']
			elif len(fdata) <= v:
				print "Error: Invalid field description"
				break
			else:
				full +=fdata[v]['name']
				full +="."
				if 'fields' in fdata[v]:
					fdata = fdata[v]['fields']
				else:
					fdata = []
		if full[len(full)-1]=='.':
			full = full[0:len(full)-1]
		return full

