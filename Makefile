###############################################################################
# Author: Samuel Jero <sjero@purdue.edu>
###############################################################################

all: logs VeriFlow Proxy Message

logs:
	mkdir -p logs

VeriFlow:
	cd veriflow/VeriFlow; make

Proxy:
	cd switch_proxy/; make

Message:
	@echo "System is in two parts:"
	@echo "A Coordiator to coordinate all testing: coordinator/coordinator.py"
	@echo "Multiple executors to do testing: run.py"

clean:
	cd veriflow/VeriFlow; make clean; cd ../..
	cd switch_proxy/; make clean; cd ..
	cd monitors; make clean; cd ..
