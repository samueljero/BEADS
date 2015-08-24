# SDN Testing Config File
# Python syntax
import os

#Global
system_home = os.path.split(os.path.dirname(os.path.realpath(__file__)))[0]
logs_loc = system_home + "/logs/inst{instance}.log"

#Proxy Section
proxy_path = system_home + "/switch_proxy/sw_proxy"
ctl_path = system_home + "/switch_proxy/sndcmd"
proxy_addr = "10.0.0.1"
proxy_base_port = 1025
proxy_com_port = 1100

#Mininet Section
mininet_user = "root"
mininet_cleanup_cmd = "mn -c"

#Controller Section
controller_start_cmd = "start"
controller_stop_cmd = "stop"
controller_user = "root"
controller_port = 6633
controller_start_delay = 30
controllers_per_instance = 1

#VeriFlow Section
veriflow_enabled = True
veriflow_path = system_home + "/veriflow/VeriFlow/VeriFlow"
veriflow_topo_path = system_home + "/mininet_scripts/"
veriflow_base_port = 2048

#VM Section
vm_path = system_home + "/vms/"
master_name = "/ubuntu-1404-master.qcow2"
vm_name_bases = ["mininet", "onos", "onos", "onos"]
vm_user = "root"
vm_ip_base = "10.0.1.{0}"
vm_ram = "2048"
vm_cores = "2"
vm_telnet_base = 10100
vm_vnc_base = 1
