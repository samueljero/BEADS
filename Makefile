###############################################################################
# Author: Samuel Jero <sjero@purdue.edu>
###############################################################################

all: logs VeriFlow Proxy Message Monitors

logs:
	mkdir -p logs

VeriFlow:
	cd veriflow/VeriFlow; make

Proxy:
	cd switch_proxy/; make

Monitors:
	cd monitors; make

Message:
	@echo "System is in two parts:"
	@echo "A Coordiator to coordinate all testing: coordinator/coordinator.py"
	@echo "Multiple executors to do testing: run.py"
