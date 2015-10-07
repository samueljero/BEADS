# Samuel Jero <sjero@purdue.edu>
# Actual strategy test routines
import manage_vms as mv
import os
import sys
import subprocess
import time
from datetime import datetime
import socket
import struct


from . import system_home, lib_path, config_path, config
import spur


mininet_config_path = os.path.abspath(os.path.join(system_home, 'mininet_scripts'))


class SDNTester:
	def __init__(self, mininet, controllers, log):
		assert(isinstance(mininet, (list,tuple)) and isinstance(controllers, (list,tuple)) and len(mininet) == 1)
		self.mininet = mininet
		self.controllers = controllers
		self.log = log
		self.testnum = 1
		self.msg_types = []

	def baseline(self, test_script):
		num = self.testnum
		for i in range(0,1):
			self.testnum = 0
			res = self.doTest(test_script, ["*,*,*,*,*,CLEAR,*"])
			if res[0] == False:
				print "Warning!!! Baseline failed!!!"
		self.testnum = num

	def retrieve_feedback(self):
		return {'msg_types':self.msg_types}

	def doTest(self,test_script, strategy):
		result = [True, "Sucess!"]
		self.log.write("##############################Starting Test " + str(self.testnum) + "###################################\n")
		self.log.write(str(datetime.today()) + "\n")
		#Create Address/Port strings
		controlleraddrs = list()
		proxyaddrs = list()
		proxyports = list()
		for c in self.controllers:
			controlleraddrs.append(mv.vm2ip(c) + ":" + str(config.controller_port))
			proxyaddrs.append(config.proxy_addr + ":" + str(config.proxy_base_port + c))
			proxyports.append(str(config.proxy_base_port + c))

		#Start Proxy
		proxy = self._start_proxy(controlleraddrs, proxyports)
		if proxy is None:
			return (False, "System Failure")

		#VeriFlow
		veriflow = None
		if config.veriflow_enabled:
			vf_port = config.veriflow_base_port + self.controllers[0]
			veriflow = self._start_veriflow(test_script, proxyports, vf_port)
			proxyaddrs = list()
			proxyaddrs.append(config.proxy_addr + ":" + str(vf_port))
			if veriflow is None:
				proxy.terminate()
				return(False, "System Failure")

		#Send Proxy Strategy
		if self._send_proxy_strategy(strategy, proxyports) == False:
			if veriflow is not None:
				veriflow.terminate()
			proxy.terminate()
			return (False, "System Failure")

		#Start Controllers
		if self._start_controllers() == False:
			if veriflow is not None:
				veriflow.terminate()
			proxy.terminate()
			return (False,"System Failure")

		#Do Test
		test_std_err = None
		res, test_std_err = self._call_test(test_script, proxyaddrs)
		if res is None:
			self._stop_controllers()
			if veriflow is not None:
				veriflow.terminate()
			proxy.terminate()
			return (False, "System Failure")

		#Evaluate Results
		if  isinstance(res, (list,tuple)):
			for r in res:
				if r == False:
					result[0] = False
					result[1] = "Network Tests"
		else:
			result[0] = False
			result[1] = "System Failure"
		
		#Stop Controllers
		self._stop_controllers()

		#Check Message Types
		if self._get_msg_types(("localhost",config.proxy_com_port + self.mininet[0])) == False:
			self._stop_controllers()
			if veriflow is not None:
				veriflow.terminate()
			proxy.terminate()
			return (False, "System Failure")
		if self._check_for_error_msgs():
			result[1] = "Error Message"

		#Stop VeriFlow
		if self._stop_veriflow(veriflow) == False:
			proxy.terminate()
			return (False, "System Failure")

		#Stop Proxy
		if self._stop_proxy(proxy) == False:
			return (False, "System Failure")

		#Cleanup Any Mininet Remnants
		self._cleanup()

		#Log
		self.log.flush()
		self.log.write("*****************\n")
		self.log.write("********* Test Script output ********\n")
		if test_std_err:
			self.log.write(test_std_err)
		self.log.write("*****************\n")
		self.log.write("Test Result: " + str(result[0]) + " , Reason:" + str(result[1]) + "\n")
		self.log.write(str(datetime.today()) + "\n")
		self.log.write("##############################Ending Test " + str(self.testnum) + "###################################\n")
		self.log.flush()
		self.testnum+=1
		return result


	def startVms(self):
		for c in self.controllers:
			mv.startvm(c)
		for m in self.mininet:
			mv.startvm(m)
		for c in self.controllers:
			if(self._waitListening(mv.vm2ip(c),22,240,True)==False):
				print "Error: Controller %d not started!" % (c)
		for m in self.mininet:
			if(self._waitListening(mv.vm2ip(m),22,240,True)==False):
				print "Error: Mininet %d not started!" % (c)
			else:
				if config.mininet_replace_scripts:
					os.system("scp -i %s -o UserKnownHostsFile=/dev/null -o StrictHostKeyChecking=no -r %s/* %s@%s:~\n" % (config.vm_ssh_key,mininet_config_path, config.mininet_user, mv.vm2ip(m)))

	def stopVms(self):
		for c in self.controllers:
			mv.stopvm(c)
		for m in self.mininet:
			mv.stopvm(m)

	def _start_proxy(self, controlleraddrs, proxyports):
		proxy = None
		ts = time.time()
		cmd = config.proxy_path + " -p " + str(config.proxy_com_port + self.mininet[0])
		for c in range(0,len(controlleraddrs)):
			cmd = cmd + " -c " +  proxyports[c] + ":" + controlleraddrs[c]
		self.log.write("Proxy CMD: " + cmd + "\n")
		self.log.write("********* Proxy output ********\n")
		self.log.flush()
		try:
			proxy = subprocess.Popen(cmd, shell = True, stdout = self.log, stderr = subprocess.STDOUT)
		except Exception as e:
			print e
			self.log.write("Exception: " + str(e) + "\n")
			self.log.flush()
			return None
		if(self._waitListening("localhost",config.proxy_com_port + self.mininet[0],60)==False):
			self.log.write("Proxy failed to start after 60 seconds\n")
			self.log.flush()
			return None
		if config.enable_stat:
			self.log.write('[timer] Start proxy: %d sec.\n' % (time.time() - ts))
		return proxy

	def _start_veriflow(self, test_script, proxyports, vf_port):
		assert(len(self.controllers)==1)
		veriflow = None
		ts = time.time()
		topo_file = config.veriflow_topo_path + os.path.splitext(os.path.basename(test_script.format(controllers="").strip()))[0] + ".vft"
		cmd = config.veriflow_path + " " + str(vf_port) + " 127.0.0.1  " + proxyports[0] + " " + topo_file
		self.log.write("Veriflow CMD: " + cmd + "\n")
		self.log.flush()
		try:
			veriflow = subprocess.Popen(cmd, shell = True, stdout = self.log, stderr = subprocess.STDOUT)
		except Exception as e:
			print e
			self.log.write("Exception: " + str(e) + "\n")
			self.log.flush()
			return None
		if(self._waitListening("localhost",config.veriflow_base_port + self.controllers[0],60)==False):
			self.log.write("Veriflow failed to start after 60 seconds\n")
			self.log.flush()
			return None
		if config.enable_stat:
			self.log.write('[timer] Start VeriFlow: %d sec.\n' % (time.time() - ts))
		return veriflow

	def _start_controllers(self):
		ts = time.time()
		for c in self.controllers:
			shell = spur.SshShell(hostname=mv.vm2ip(c), username = config.controller_user, missing_host_key=spur.ssh.MissingHostKey.accept,private_key_file=config.vm_ssh_key)
			res = shell.run(["/bin/bash","-i" ,"-c", config.controller_start_cmd])
			self.log.write("Starting Controller (" + mv.vm2ip(c) + ")... " + res.output + "\n")
			self.log.flush()
		for c in self.controllers:
			if(self._waitListening(mv.vm2ip(c),config.controller_port,60)==False):
				self.log.write("Controller %s failed to start after %d seconds" % (mv.vm2ip(c),60))
				self.log.flush()
				return False
		if config.enable_stat:
			self.log.write('[timer] Start controllers: %d sec.\n' % (time.time() - ts))
		return True

	def _call_test(self, test_script, proxyaddrs):
		ts = time.time()
		res = None
		proc = None
		m = self.mininet[0]
		shell = spur.SshShell(hostname=mv.vm2ip(m), username = config.mininet_user, missing_host_key=spur.ssh.MissingHostKey.accept,private_key_file=config.vm_ssh_key)
		self.log.write("Starting Test: " + test_script.format(controllers=" ".join(proxyaddrs)) + "\n")
		self.log.flush()
		try:
			proc = shell.run(["/bin/bash","-i" ,"-c", test_script.format(controllers=" ".join(proxyaddrs))])
			res = eval(proc.output)
		except Exception as e:
			print e
			self.log.write("Exception: " + str(e) + "\n")
			self.log.flush()
			return (None, None)
		if config.enable_stat:
			self.log.write('[timer] Do all tests: %d sec.\n' % (time.time() - ts))
		return (res, proc.stderr_output)

	def _stop_controllers(self):
		ts = time.time()
		for c in self.controllers:
			shell = spur.SshShell(hostname=mv.vm2ip(c), username = config.controller_user, missing_host_key=spur.ssh.MissingHostKey.accept,private_key_file=config.vm_ssh_key)
			res = shell.run(["/bin/bash","-i" ,"-c", config.controller_stop_cmd])
		if config.enable_stat:
			self.log.write('[timer] Stop controllers: %d sec.\n' % (time.time() - ts))
		return True

	def _stop_proxy(self, proxy):
		ts = time.time()
		if proxy.poll() is not None:
			print "Proxy has crashed!!!\n"
			self.log.write("Proxy has crashed!!!\n")
			self.log.flush()
			return False
		proxy.terminate()
		if config.enable_stat:
			self.log.write('[timer] Stop proxy: %d sec.\n' % (time.time() - ts))
		return True

	def _stop_veriflow(self, veriflow):
		ts = time.time()
		if config.veriflow_enabled:
			if veriflow.poll() is not None:
				print "VeriFlow has crashed!!!\n"
				self.log.write("VeriFlow has crashed!!!\n")
				self.log.flush()
				return False
			veriflow.send_signal(2)
		if config.enable_stat:
			self.log.write('[timer] Stop VeriFlow: %d sec.\n' % (time.time() - ts))
		return True

	def _cleanup(self):
		ts = time.time()
		shell = spur.SshShell(hostname=mv.vm2ip(self.mininet[0]), username = config.mininet_user, missing_host_key=spur.ssh.MissingHostKey.accept,private_key_file=config.vm_ssh_key)
		res = shell.run(["/bin/bash","-i" ,"-c", config.mininet_cleanup_cmd])
		if config.enable_stat:
			self.log.write('[timer] Clean up mininet: %d sec.\n' % (time.time() - ts))
		return True

	def _send_proxy_strategy(self, strategy, proxyports):
		ts = time.time()
		for l in strategy:
			cmd = l.format(controllers=proxyports)
			self.log.write("Strategy CMD: " + cmd + "\n")
			self.log.flush()
			res = self._proxy_communicate(("localhost",config.proxy_com_port + self.mininet[0]), cmd)
			if (res == False):
				self.log.write("Failed to Send Command\n")
				self.log.flush()
				return False
		if config.enable_stat:
			self.log.write('[timer] Send strategy: %d sec.\n' % (time.time() - ts))
		return True

	def _waitListening(self,host='127.0.0.1', port=80, timeout=None, output=False):
		"""Wait until server is listening on port.
		returns True if server is listening"""
		cmd = ('echo A | telnet -e A %s %s' % ( host, port ))
		start = time.time()
		result = ""
		try:
			result = subprocess.check_output(cmd, shell=True, stderr=subprocess.STDOUT)
		except subprocess.CalledProcessError as e:
			pass
		while 'Connected' not in result:
			if 'No route' in result:
				return False
			if timeout and time.time() >= start + timeout:
				print 'could not connect to %s on port %d' % (host, port )
				return False
			if output:
				print 'waiting for ' + host + ' to listen on port ' + str(port)
			time.sleep(0.5)
			try:
				result = subprocess.check_output(cmd, shell=True, stderr=subprocess.STDOUT)
			except subprocess.CalledProcessError as e:
				pass
		if output:
			print host + " is listening on " + str(port)
			return True

	def _proxy_communicate(self,addr, msg, wait_for_response = False):
		rsp = ""

		#Connect
		try:
			sock = socket.create_connection(addr)
		except Exception as e:
			self.log.write("Failed to connect to to proxy(%s:%d): %s\n" % (addr[0], addr[1], e))
			self.log.flush()
			return False

		#Buid command
		snd = struct.pack("!H",len(msg) + 2)
		snd += msg

		#Send command
		sock.send(snd)

		if wait_for_response:
			#Wait for Length
			data = ""
			while (len(data) < 3):
				data = sock.recv(4,socket.MSG_PEEK)
				if len(data) == 0:
					sock.close()
					return False
				
			
			#compute length
			try:
				length = struct.unpack("!H",data[0:2])
				length = length[0]
			except Exception as e:
				sock.close()
				return False
			
			#Receive Message
			msg = ""
			mlen = length
			while(len(msg) < mlen):
				data = sock.recv(length)
				if len(data) == 0:
					sock.close()
					return False
				msg += data
				length -= len(data)

			#Process Message
			rsp = msg[2:]

		#Close Socket
		sock.close()
		if wait_for_response:
			return rsp
		return True

	def _get_msg_types(self, addr):
		resp = self._proxy_communicate(addr,"*,*,*,*,*,PKT_TYPES,*",wait_for_response = True)
		if type(resp) is bool and resp == False:
			print "Error: Failed to get message type feedback from proxy!"
			self.log.write("Error: Failed to get message type feedback from proxy!\n")
			self.log.flush()
			return False
		self.msg_types = resp.split(",")
		while '' in self.msg_types:
			self.msg_types.remove('')
		return True

	def _check_for_error_msgs(self):
		for t in self.msg_types:
			if "error_msg" in t:
				return True
		return False
