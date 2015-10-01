###############################################################################
# Author: Samuel Jero <sjero@purdue.edu>
###############################################################################

all: VeriFlow Proxy Message

VeriFlow:
	cd veriflow/VeriFlow; make

Proxy:
	cd switch_proxy/; make

Message:
	@echo "System is in two parts:"
	@echo "A Coordiator to coordinate all testing: coordinator/coordinator.py"
	@echo "Multiple executors to do testing: run.py"
