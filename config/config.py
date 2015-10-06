# SDN Testing Config File
# Python syntax
import os

#Global
system_home = os.path.split(os.path.dirname(os.path.realpath(__file__)))[0]
logs_loc = system_home + "/logs/inst{instance}.log"
enable_stat = True

#Topology
topo_switches = 3
topo_hosts = 4
topo_ports_per_sw = 3
topo_controllers = 1

#Coordinator Section
coordinator_port = 3333
coord_log = system_home + "/logs/coordinator.log"
coord_test_controllers = range(0,topo_controllers)
#coord_test_switches = range(1,topo_switches+1)
coord_test_switches = [1,2]
coord_test_list_iters = topo_ports_per_sw
coord_test_case = "/root/test1.py {controllers}"

#Proxy Section
proxy_path = system_home + "/switch_proxy/sw_proxy"
ctl_path = system_home + "/switch_proxy/sndcmd"
proxy_addr = "10.0.0.1"
proxy_base_port = 1025
proxy_com_port = 1100

#Mininet Section
mininet_user = "root"
mininet_cleanup_cmd = "mn -c"
mininet_replace_scripts = True

#Controller Section
controller_start_cmd = "start"
controller_stop_cmd = "stop"
controller_user = "root"
controller_port = 6633
controllers_per_instance = topo_controllers

#VeriFlow Section
veriflow_enabled = True
veriflow_path = system_home + "/veriflow/VeriFlow/VeriFlow"
veriflow_topo_path = system_home + "/mininet_scripts/"
veriflow_base_port = 2048

#VM Section
vm_path = system_home + "/vms/"
master_name = "/ubuntu-1404-master.qcow2"
#vm_name_bases = ["mininet", "onos", "onos", "onos"]
vm_name_bases = ["mininet", "onos"]
vm_user = "root"
vm_ip_base = "10.0.1.{0}"
vm_ram = "2048"
vm_cores = "2"
vm_telnet_base = 10100
vm_vnc_base = 1
vm_ssh_key = system_home + "/config/ssh.key"
