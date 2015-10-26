#!/bin/env python
# Samuel Jero <sjero@purdue.edu>
# Script for starting/stopping/suspending/resuming VMs
import os
import sys
import socket
import platform
import subprocess
import re


system_home = os.path.split(os.path.dirname(os.path.realpath(__file__)))[0]
config_path = os.path.abspath(os.path.join(system_home, 'config'))
sys.path.insert(0,config_path)
import config
#from . import system_home, config_path, config


def startvm(num):
	img=config.vm_path + config.vm_name_bases[(num-1)%len(config.vm_name_bases)] + str(num) + ".qcow2"
	nic1="-net nic,model=virtio,macaddr=00:00:00:01:00:{:02X},vlan=0 -net tap,ifname=tap-h{:d},downscript=no,script=no,vlan=0".format(num,num)
	nic2="-net user,vlan=1 -net nic,vlan=1"
	vnc="-vnc 127.0.0.1:{0}".format(str(config.vm_vnc_base + num))
	telnet= config.vm_telnet_base + num
	os.system("qemu-system-x86_64 -hda {0} -m {1} -smp {2} -enable-kvm -k \"en-us\" {3} {4} {5} -monitor telnet:127.0.0.1:{6},server,nowait &".format(img,config.vm_ram,config.vm_cores,nic1, nic2, vnc,str(telnet)))

def stopvm(num):
	os.system("ssh -i {0} -o UserKnownHostsFile=/dev/null -o StrictHostKeyChecking=no {1}@{2} \"shutdown -h now\" &".format(config.vm_ssh_key,config.vm_user, config.vm_ip_base.format(num)))

def suspendvm(num, namebase):
	filename = namebase + str(num) + ".sav"
	s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	s.connect(("127.0.0.1", config.vm_telnet_base + num))
	s.send("migrate \"exec:cat > {0}\"\n".format(filename))
	while (len(s.recv(1024))>0):
		pass
	s.close()
	s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	s.connect(("127.0.0.1", config.vm_telnet_base + num))
	s.send("q\n")
	s.close()

def resumevm(num, namebase):
	img = config.vm_path + config.vm_name_bases[(num-1)%len(config.vm_name_bases)] + str(num) + ".qcow2"
	filename = namebase + str(num) + ".sav"
	nic1="-net nic,model=virtio,macaddr=00:00:00:01:00:{:02X},vlan=0 -net tap,ifname=tap-h{:d},downscript=no,script=no,vlan=0".format(num,num)
	nic2="-net user,vlan=1 -net nic,vlan=1"
	vnc="-vnc 127.0.0.1:{0}".format(str(config.vm_vnc_base + num))
	telnet= config.vm_telnet_base + num
	os.system("qemu-system-x86_64 -hda {0} -m {1} -smp {2} -enable-kvm -k \"en-us\" {3} {4} {5} -monitor telnet:127.0.0.1:{6},server,nowait -daemonize -incoming \"exec:cat {7}\"".format(img,config.vm_ram,config.vm_cores,nic1, nic2, vnc,str(telnet),filename))
	if Ping(config.vm_ip_base.format(num), 4) == False:
		print "Warning: VM {0} is not up!".format(str(num))

def clonevm(num, master):
	img=config.vm_path + config.vm_name_bases[(num-1)%len(config.vm_name_bases)] + str(num) + ".qcow2"
	os.system("qemu-img create -b {0}  -F qcow2 -f qcow2 {1}".format(master, img))

def killvm(num):
	s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	s.connect(("127.0.0.1", config.vm_telnet_base + num))
	s.send("q\n")
	s.close()

def vm2ip(num):
	return config.vm_ip_base.format(str(num))

def initvm(num):
	os.system("cat {0} | ssh -o UserKnownHostsFile=/dev/null -o StrictHostKeyChecking=no {1}@{2} \"cat >> ~/.ssh/authorized_keys\"".format(config.vm_ssh_key,config.vm_user, config.vm_ip_base.format(num)))
	os.system("scp -i {0} -o UserKnownHostsFile=/dev/null -o StrictHostKeyChecking=no CustomizeVM.pl {1}@{2}:/usr/local/bin/CustomizeVM.pl".format(config.vm_ssh_key,config.vm_user, config.vm_ip_base.format(num)))
	os.system("ssh -i {0} -o UserKnownHostsFile=/dev/null -o StrictHostKeyChecking=no {1}@{2} \"/usr/local/bin/CustomizeVM.pl\"".format(config.vm_ssh_key,config.vm_user, config.vm_ip_base.format(num)))

def Ping(hostname,timeout):
	if platform.system() == "Windows":
		command="ping "+hostname+" -n 1 -w "+str(timeout*1000)
	else:
		command="ping -i "+str(timeout)+" -c 1 " + hostname
		proccess = subprocess.Popen(command, stdout=subprocess.PIPE)
		matches=re.match('.*time=([0-9]+)ms.*', proccess.stdout.read(),re.DOTALL)
		if matches:
			return True
		else: 
			return False


#Main
if __name__ == "__main__":
	if len(sys.argv) != 4:
		print "Usage: manage_vms.py start|stop|suspend|resume|kill|clone|init start end"
		sys.exit()
	
	cmd = sys.argv[1]
	start = int(sys.argv[2])
	end = int(sys.argv[3]) + 1

	if start <= 0:
		print "start must be greater than 0"
		sys.exit()

	if cmd == "start":
		for i in range(start, end):
			startvm(i)
	elif cmd == "stop":
		for i in range(start, end):
			stopvm(i);
	elif cmd == "suspend":
		for i in range(start, end):
			suspendvm(i, vm_path + "host")
	elif cmd == "resume":
		for i in range(start, end):
			resumevm(i, vm_path + "host")
	elif cmd == "kill":
		for i in range(start, end):
			killvm(i)
	elif cmd == "clone":
		for i in range(start, end):
			clonevm(i, vm_path + master_name)
	elif cmd == "init":
		for i in range(start, end):
			initvm(i)
	else:
		print "Usage: manage_vms.py start|stop|suspend|resume|kill|clone|init start end group_sz"

