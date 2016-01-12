#Samuel Jero <sjero@purdue.edu>
#SDN Testing Strategy Generation
import os
import sys
import time
from datetime import datetime
import openflow
import manipulations
import re
from types import NoneType

system_home = os.path.split(os.path.dirname(os.path.realpath(__file__)))[0]
config_path = os.path.abspath(os.path.join(system_home, 'config'))
sys.path.insert(0,config_path)
import config

class StrategyGenerator:
	#Constructor
	def __init__(self, lg, res_lg):
		self.lg = lg
		self.results = res_lg
		self.ck_file = None
		self.do_ckpt = False

		self.single_strat = []
		self.strat_lst = []
		self.strat_ptr = 0
		self.failed_lst = []
		self.failed_ptr = 0
		self.strat_comb = {}
		self.comb_reduce = 100


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
			self.lg.write("[%s] Returning Strategy: %d/%d\n" % (str(datetime.today()),self.strat_ptr, len(self.strat_lst)))
			print "[%s] Testing Strategy: %d/%d" % (str(datetime.today()),self.strat_ptr, len(self.strat_lst))
			self.checkpoint()
		return strat

	def return_strategy(self, strat):
		self.strat_lst.insert(self.strat_ptr + 1, strat)

	def strategy_result(self, strat, res):
		if res[0] == False:	
			if strat not in self.failed_lst and res[1] != "System Failure":
				#Most failed strategies will be retried once, to avoid false positives
				self.failed_lst.append(strat)
			else:
				#Final failure, record in result file
				lst = ["FAILED", str(datetime.today()), strat[0], str(strat[1]), res[1]]
				self.results.write("%s\n" %(str(lst)))
				self.results.flush()
				self.lg.write("[%s] Strategy HARD FAILED: %s\n" % (str(datetime.today()),str(strat)))
				print "[%s] Strategy HARD FAILED: %s" % (str(datetime.today()),str(strat))
		else:
			#Test Succeeded
			#self.build_combination_strategies(strat)
			pass

	def strategy_feedback(self, strat, feedback, result = None):
		changed = False
		if type(feedback)!=dict:
			return
		if 'msg_types' in feedback:
			msg_types = feedback['msg_types']

			#Prioritize Strategies with these messges types
			if len(strat) == 0 or result is True: #Benign feedback or test passed
				for st in self.single_strat:
					for t in msg_types:
						if t in str(st[1]):
							if st[2] < 100:
								st[2] = 100
								if len(strat) > 0:
									#New message under this strategy
									tmp = st
									tmp[1] = tmp[1] + strat[1]
									self.strat_lst.append(tmp)
								else:
									#Baseline messages
									self.strat_lst.append(st)
								changed = True
							break

		if changed:
			#Sort Strategies by priority
			remaining = self.strat_lst[self.strat_ptr:]
			remaining.sort(reverse=True, key = lambda s: s[2])
			self.strat_lst = self.strat_lst[0: self.strat_ptr] + remaining
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
							self.single_strat.append([config.coord_test_case, [strat], 0])

			#Message Modification Strategies
			flds = self.build_field_list(fields)
			for c in config.coord_test_controllers:
				for switch in config.coord_test_switches:
					for f in flds:
						for a in manipulations.field_actions:
							for m in manipulations.field_lies:
								for v in manipulations.field_lie_values[f['type']]:
									strat = "{controllers[" +str(c) + "]}" + ",{sw},*,{pkt_type},{fld},{action}".format(sw=switch, pkt_type=mtype,fld=f['field'],action=a[1].format(m,v))
									self.single_strat.append([config.coord_test_case, [strat], 0])
		self.lg.write("[%s] Single Strategies: %d\n" % (str(datetime.today()),len(self.single_strat)))
		print "[%s] Single Strategies: %d" % (str(datetime.today()),len(self.single_strat))

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

	def build_combination_strategies(self, strat):
		if type(strat)!=list:
			return

		#Break into components
		s1_script = strat[0]
		s1_mod = strat[1]
		s1_pri = strat[2]

		#Handling only single modification -> double modification at the moment
		if (len(s1_mod)!=1):
			return

		pkt_type = self._pkt_type_from_strat(s1_mod[0])
		if pkt_type in self.strat_comb:
			#Already exists
			self.strat_comb[pkt_type].append(s1_mod[0])

			if len(self.strat_comb[pkt_type])%self.comb_reduce == 0:
				for k in self.strat_comb.keys():
						for s in range(0, len(self.strat_comb[k])):
							if s%self.comb_reduce == 0 and self.strat_comb[k][s] != s1_mod[0]:
								self.strat_lst.append([config.coord_test_case, [self.strat_comb[k][s], s1_mod[0]], 50])
								tmp = [config.coord_test_case, [self.strat_comb[k][s], s1_mod[0]], 50]
		else:
			#Doesn't exist, insert
			tmp = []
			tmp.append(s1_mod[0])
			self.strat_comb[pkt_type] = tmp

	@staticmethod
	def pretty_print_strat(strat):
		if type(strat) != str:
			return ""
		flist = strat.split(",")
		if len(flist) < 7:
			return ""
		
		#Controller
		ctlr = ""
		mo = re.search("\{controllers\[([0-9]+)\]\}", flist[0])
		if type(mo) is not NoneType:
			ctlr = mo.group(1)

		#Switch
		sw = ""
		sw = flist[1]

		#Version
		ver = ""
		ver = flist[2]
		
		#Message type
		msgtype = ""
		msgtype = flist[3]

		#Field
		field = ""
		field = StrategyGenerator._pretty_print_field(msgtype, flist[4])

		#Action
		act = ""
		act = flist[5]

		#Args
		args = ""
		args = flist[6]

		return "{0}, {1}, {2}, {3}, {4}, {5}, {6}".format(ctlr,sw,ver,msgtype,field,act,args)
	
	@staticmethod
	def _pkt_type_from_strat(strat):
		if type(strat)!=str:
			return ""
		flist = strat.split(",")
		if len(flist) < 4:
			return ""
		return flist[3]

	@staticmethod
	def _pretty_print_field(msg_type, field):
		if type(field)!=str or type(msg_type)!=str:
			return ""
		if field == "*":
			return field
		flist = field.split(".")
		fdata = []
		for i in openflow.openflow:
			if i[0]==msg_type:
				fdata = i[1]
				break
		if len(fdata)==0:
			return ""
		full=""
		for i in flist:
			v = int(i) - 1
			if len(fdata)==1 and 'type' in fdata[0] and (fdata[0]['type']=='list' or fdata[0]['type']=='TLV'):
				full+=i
				full+="."
				fdata = fdata[0]['fields']
			elif len(fdata) <= v:
				full+= "..."
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

	def enable_checkpointing(self, f):
		self.ck_file = f
		self.do_ckpt = True
		self.checkpoint()

	def checkpoint(self):
		if self.do_ckpt and self.ck_file is not None:
			self.lg.write("[%s] Making Checkpoint\n" % (str(datetime.today())))
			print "[%s] Making Checkpoint" % (str(datetime.today()))

			#Create backup
			bkup = {}
			bkup['version'] = 2
			bkup['strat_lst'] = self.strat_lst
			bkup['strat_ptr'] = self.strat_ptr
			bkup['failed_lst'] = self.failed_lst
			bkup['failed_ptr'] = self.failed_ptr
			bkup['single_strat'] = self.single_strat
			bkup['strat_comb'] = self.strat_comb
			bkup['comb_reduce'] = self.comb_reduce

			#Write backup
			try:
				self.ck_file.seek(0)
				self.ck_file.truncate()
				self.ck_file.writelines(repr(bkup))
				self.ck_file.flush()
			except Exception as e:
				print "[%s] Checkpoint Failed: %s" % (str(datetime.today()),str(e))
				return
			self.lg.write("[%s] Checkpoint Finished\n" % (str(datetime.today())))
			print "[%s] Checkpoint Finished" % (str(datetime.today()))

	def restore(self, f):
		#Read backup
		try:
			inp = f.readline()
			bkup = eval(inp)
		except Exception as e:
			print "[%s] Failed to read checkpoint: %s" % (str(datetime.today()),str(e))
			f.close()
			return False

		#Restore Backup
		if bkup['version'] != 2:
			print "Warning: Checkpoint is incompatable!!!"
			f.close()
			return False
		self.strat_lst = bkup['strat_lst']
		self.strat_ptr = bkup['strat_ptr']
		self.failed_lst = bkup['failed_lst']
		self.failed_ptr = bkup['failed_ptr']
		self.single_strat = bkup['single_strat']
		self.strat_comb = bkup['strat_comb']
		self.comb_reduce = bkup['comb_reduce']

		f.close()
		self.lg.write("[%s] Restore Finished\n" % (str(datetime.today())))
		print "[%s] Restore Finished" % (str(datetime.today()))
		return True

	def load_from_file(self, f):
		strat = None
		for line in f:
			if line.find("#") >= 0:
				continue
			strat = eval(line)
			self.strat_lst.append([config.coord_test_case, strat, 10])

