/*
 * Network.h
 *
 *  Created on: Mar 15, 2012
 *      Author: khurshid
 *
 * This file is protected by the VeriFlow Research License Agreement
 * available at http://www.cs.illinois.edu/~khurshi1/projects/veriflow/veriflow-research-license-agreement.txt.
 * A copy of this agreement is also included in this package.
 *
 * Copyright (c) 2012-2013 by
 * The Board of Trustees of the University of Illinois.
 * All rights reserved.
 */

#ifndef NETWORK_H_
#define NETWORK_H_

#include <sys/types.h>
#include <unistd.h>
#include <string>
#include <unordered_map>
#include "ForwardingDevice.h"

using namespace std;

class Network
{
private:
	unordered_map< string, ForwardingDevice > deviceMap;
	unordered_map< uint64_t, string > idToIpAddressMap;

public:
	bool addDevice(uint64_t id, const string& ipAddress, bool endDevice);
	bool addPort(const string& ipAddress, unsigned int port, const string& nextHopIpAddress);
	string getNextHopIpAddress(const string& ipAddress, unsigned int port);
	bool isEndDevice(const string& ipAddress);
	bool isDevicePresent(const string& ipAddress) const;
	bool isPortPresent(const string& ipAddress, unsigned int port);
	string getDeviceIpAddress(uint64_t id);
	void print() const;
};

#endif /* NETWORK_H_ */
