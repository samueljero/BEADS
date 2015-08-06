/*
 * ForwardingDevice.h
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

#ifndef FORWARDINGDEVICE_H_
#define FORWARDINGDEVICE_H_

#include <sys/types.h>
#include <unistd.h>
#include <stdint.h>
#include <string>
#include <unordered_map>

using namespace std;

struct ForwardingDevice
{
public:
	uint64_t id;
	string ipAddress;
	bool endDevice;
	unordered_map< unsigned int, string > portToNextHopIpAddressMap;
};

#endif /* FORWARDINGDEVICE_H_ */
