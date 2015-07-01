#!/bin/env python
# Samuel Jero <sjero@purdue.edu>
# Script for starting/stopping/suspending/resuming VMs
import os
import sys
import socket
import platform
import subprocess
import re


vm_ram = "2048"
vm_cores = "2"
vm_telnet_base = 10100
vm_vnc_base = 1
vm_ip_base = "10.0.1.{0}"
vm_user = "root"
system_home = os.path.split(os.path.dirname(os.path.realpath(__file__)))[0]
vm_path = system_home + "/vms/"
vm_name_bases = ["mininet", "onos", "onos", "onos"]
master_name = "/ubuntu-1404-master.qcow2"

def startvm(num):
	global vm_ram,vm_cores,vm_telnet_base,vm_vnc_base, vm_path, vm_name_bases
	img=vm_path + vm_name_bases[(num-1)%len(vm_name_bases)] + str(num) + ".qcow2"
	nic1="-net nic,model=virtio,macaddr=00:00:00:01:00:{:02X},vlan=0 -net tap,ifname=tap-h{:d},downscript=no,script=no,vlan=0".format(num,num)
	nic2="-net user,vlan=1 -net nic,vlan=1"
	vnc="-vnc :{0}".format(str(vm_vnc_base + num))
	telnet= vm_telnet_base + num
	os.system("qemu-system-x86_64 -hda {0} -m {1} -smp {2} -enable-kvm -k \"en-us\" {3} {4} {5} -monitor telnet:127.0.0.1:{6},server,nowait &".format(img,vm_ram,vm_cores,nic1, nic2, vnc,str(telnet)))

def stopvm(num):
	global vm_ip_base, vm_user
	os.system("ssh {0}@{1} \"shutdown -h now\" &".format(vm_user, vm_ip_base.format(num)))

def suspendvm(num, namebase):
	global vm_telnet_base
	filename = namebase + str(num) + ".sav"
	s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	s.connect(("127.0.0.1", vm_telnet_base + num))
	s.send("migrate \"exec:cat > {0}\"\n".format(filename))
	while (len(s.recv(1024))>0):
		pass
	s.close()
	s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	s.connect(("127.0.0.1", vm_telnet_base + num))
	s.send("q\n")
	s.close()

def resumevm(num, namebase):
	global vm_ram,vm_cores,vm_telnet_base,vm_vnc_base, vm_ip_base, vm_path, vm_name_bases
	img = vm_path + vm_name_bases[(num-1)%len(vm_name_bases)] + str(num) + ".qcow2"
	filename = namebase + str(num) + ".sav"
	nic1="-net nic,model=virtio,macaddr=00:00:00:01:00:{:02X},vlan=0 -net tap,ifname=tap-h{:d},downscript=no,script=no,vlan=0".format(num,num)
	nic2="-net user,vlan=1 -net nic,vlan=1"
	vnc="-vnc {0}".format(str(vm_vnc_base + num))
	telnet= vm_telnet_base + num
	os.system("qemu-system-x86_64 -hda {0} -m {1} -smp {2} -enable-kvm -k \"en-us\" {3} {4} {5} -monitor telnet:127.0.0.1:{6},server,nowait -daemonize -incoming \"exec:cat {7}\"".format(img,vm_ram,vm_cores,nic1, nic2, vnc,str(telnet),filename))
	if Ping(vm_ip_base.format(num), 4) == False:
		print "Warning: VM {0} is not up!".format(str(num))

def clonevm(num, master):
	global vm_path, vm_name_bases
	img=vm_path + vm_name_bases[(num-1)%len(vm_name_bases)] + str(num) + ".qcow2"
	os.system("qemu-img create -b {0}  -F qcow2 -f qcow2 {1}".format(master, img))

def killvm(num):
	global vm_telnet_base
	s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	s.connect(("127.0.0.1", vm_telnet_base + num))
	s.send("q\n")
	s.close()

def initvm(num):
	global vm_ip_base, vm_user
	os.system("cat ~/.ssh/id_rsa.pub | ssh {0}@{1} \"cat >> ~/.ssh/authorized_keys\"".format(vm_user, vm_ip_base.format(num)))
	os.system("scp -o StrictHostKeyChecking=no CustomizeVM.pl {0}@{1}:/usr/local/bin/CustomizeVM.pl".format(vm_user, vm_ip_base.format(num)))
	os.system("ssh {0}@{1} \"/usr/local/bin/CustomizeVM.pl\"".format(vm_user, vm_ip_base.format(num),))

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

