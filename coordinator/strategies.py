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

			#Message Modification Strategies
			flds = self.build_field_list(fields)
			for f in flds:
				for a in manipulations.field_actions:
					for m in manipulations.field_lies:
						for v in manipulations.field_lie_values[f['type']]:
							strat = "{controllers[" +str(0) + "]}" + ",{sw},*,{pkt_type},{fld},{action}".format(sw=2, pkt_type=mtype,fld=f['field'],action=a[1].format(m,v))
							self.strat_lst.append([self.test_case, [strat]])
		print "Strategies:" + str(len(self.strat_lst))

	def build_field_list(self,fields):
		lst = []
		if len(fields)==1 and fields[0]['name']=='element' and 'fields' in fields[0]:
			#Lists
			l = self.build_field_list(fields[0]['fields'])
			for i in range(1,4):
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

