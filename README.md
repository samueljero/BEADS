BEADS
==========================================

A framework to automatically generate test scenarios and find attacks in SDN systems, with real, unmodified controller implementations and real software switches.

Details described in:

Samuel Jero, Xiangyu Bu, Cristina Nita-Rotaru, Hamed Okhravi, Richard Skowyra, and Sonia Fahmy. BEADS: A Framework for Attack Discovery in OpenFlow-based SDN Systems, 20th International Symposium on Research in Attacks, Intrusions, and Defenses (RAID), 2017.

###Preqs
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

###Usage
* Configure Network:

		./scripts/network_setup.py start 1 <max>

* Configure VMs:

		wget http://cs.purdue.edu/~sjero/beads_vms.tar.gz
		tar xf beads_vms.tar.gz
		./scripts/manage_vms.py start 1 2
		for each vm:
			ssh-copy-id root@10.0.1.<id>
			shutdown -h now

	For reference, the VM users are `root` and the password is `Gat11ng` in our default VMs

* Build Attack OpenFlow Proxy and Veriflow

		make

* Setup System Configuration

		cp config/config.poxy.py config/config.py

* In one terminal, run the coordinator

		./coordinator/coordinator.py

* In annother terminal, run an executor:

		./run.py -c localhost -i 0


Samuel Jero <sjero@purdue.edu>
