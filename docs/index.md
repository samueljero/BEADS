---
layout: post
title: BEADS: A framework for automated vulnerability discovery in SDNs
---


BEADS is a new framework for testing SDN controllers designed with several goals in mind:

1. __Automatic vulnerability and bug discovery.__ No more manually writing tests for your vulnerability detection system! This is done by leveraging knowledge of the OpenFlow protocol and ARP to automatically generate interesting and semantically-aware test cases.

2. __Broad applicability.__ No assumptions are made about the SDN controller, making it easy to plug in a new controller and start testing. This means there are no restrictions on source language, operating system, or routing algorithms and no plugins to write.

3. __A whole-SDN system approach.__ BEADS's testing environment considers the SDN controller, switches, and hosts enabling it to go well beyond mere OpenFlow compliance checking and find bugs in the interesting algorithms inside SDN controllers.

4. __Advanced vulnerability detection.__ Search for many classes of bugs and vulnerabilities at once, including bugs causing error messages, topology changes, reachability issues, and degraded controller or switch performance.

5. __No false positives.__ All reported bugs were actually observed in an emulated network connected to the real controller being tested.

BEADS focuses on finding bugs that cause incorrect network behavior in SDN controllers and that can be exploited by attackers to practically impact the network. With this in mind, the SDN controller under test is run in a virtualized environment, allowing whatever configuration is required. The controller is then connected to an emulated network of real SDN switches and emulated hosts. The OpenFlow messages between controller and switch are then subjected to manipulations in order to simulate malicious attackers. These tests are automatically generated based on the message grammar and known protocol semantics. Finally, a suite of tools are used to identify unusual network behavior, including error messages, changes in topology or reachability, and increased load on switches or the controller. Tests that trigger these indicators are returned to the user as causing bugs or vulnerabilities in the SDN controller under test.

BEADS is a research project from Purdue University and Northeastern University and contains work that was recently published at RAID 2017. The source code is freely available under a BSD license on [github](https://github.com/samueljero/BEADS). For further questions, contact Samuel Jero at <sjero@sjero.net>.
