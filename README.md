BEADS
==========================================

BEADS is a new framework for testing SDN controllers designed with several goals in mind:

1. Automatic vulnerability and bug discovery. No more manually writing tests for your vulnerability detection system! This is done by leveraging knowledge of the OpenFlow protocol and ARP to automatically generate interesting and semantically-aware test cases.

2. Broad applicability. No assumptions are made about the SDN controller, making it easy to plug in a new controller and start testing. This means there are no restrictions on source language, operating system, or routing algorithms and no plugins to write.

3. A whole-SDN system approach. BEADS's testing environment considers the SDN controller, switches, and hosts enabling it to go well beyond mere OpenFlow compliance checking and find bugs in the interesting algorithms inside SDN controllers.

4. Advanced vulnerability detection. Search for many classes of bugs and vulnerabilities at once, including bugs causing error messages, topology changes, reachability issues, and degraded controller or switch performance.

5. No false positives. All reported bugs were actually observed in an emulated network connected to the real controller being tested.

## Prerequisites
In order to build and run BEADS, the following are required:
* Python 2.7
* Qemu (Tested with 1.7.0 / 2.3.0)
* Limited sudo access. In particular, the ability to run the following commands:

		/usr/bin/tunctl -u [a-z]* -t tap*
		/usr/bin/tunctl -d tap*
		/bin/ifconfig tap* hw ether 00:00:00:*:*:*
		/bin/ifconfig tap* up
		/bin/ifconfig tap* 0.0.0.0 up
		/bin/ifconfig tap* 10.0.*.* netmask 255.255.*.* up
		/bin/ifconfig tap* down
		/bin/ifconfig br* up
		/bin/ifconfig br* 10.0.*.* netmask 255.255.*.* up
		/bin/ifconfig br* down
		/sbin/brctl addbr br*
		/sbin/brctl delbr br*
		/sbin/brctl addif br* tap*
		/sbin/brctl delif br* tap*
		/usr/local/sbin/restart-dhcpd
		/bin/ifconfig tap*

## Installation
* Clone the code:

		git clone https://github.com/samueljero/BEADS.git

* Configure Network:

		./scripts/network_setup.py start 1 <max>

* Download the VMs:

		wget http://www.cs.purdue.edu/~sjero/beads_vms.tar.gz
		(or http://sjero.net/ds2/beads_vms.tar.gz)
		tar xf beads_vms.tar.gz

* Setup the VMs:

		./scripts/manage_vms.py start 1 2
		for each vm:
			ssh-copy-id root@10.0.1.<id>
			shutdown -h now

	The VM users are `root` and the password is `Gat11ng` in our default VMs

* Build Attack OpenFlow Proxy and Veriflow:

		make

* Configure System:

	We provide default configurations for POX, ONOS, Ryu, and Floodlight. Simply copy the one you need to `config/config.py`. Our example VMs include POX, so we use:

		cp config/config.pox.py config/config.py

## Usage

* Open two terminals

* In the first, run the coordinator to generate test strategies and output results

		./coordinator/coordinator.py

* In the other terminal, start a manager to actually perform testing.

		./run.py -c localhost -i 0

	You can start multiple managers (using different instance numbers, -i parameter) to parallize the testing. These managers will start the controller VMs, emulated network, and OpenFlow manipulation proxy and perform the testing. They are directed by the coordinator and report their findings back to it.

## Viewing the Results
We have included a script to make examining the results of the testing easier. This script is `coordinator/viewer.py`. To use it specify the output directory from testing as the first argument.

		./coordinator/viewer.py results

This will return output like the following for each identified bug and enables quick access to the testing logs for the relevant tests:

		Num: 1
		Strategy: 0, 1, *, of_barrier_reply, version, LIE, act==&val=0
		Time: 2015-12-03 16:50:30.800952
		Result: FAILED
		Reason: Network State
		View Log? [Y/n] n
		View Raw? [Y/n] n

Strategy refers to the testing strategy and reads as follows:

		controller-id, switch-dpid, OpenFlow-version, OpenFlow-message-type, OpenFlow-field, ACTION, action-parameters

## Paper

This system was published in:

Samuel Jero, Xiangyu Bu, Cristina Nita-Rotaru, Hamed Okhravi, Richard Skowyra, and Sonia Fahmy. BEADS: A Framework for Attack Discovery in OpenFlow-based SDN Systems, 20th International Symposium on Research in Attacks, Intrusions, and Defenses (RAID), 2017.


Samuel Jero  
<sjero@sjero.net>
