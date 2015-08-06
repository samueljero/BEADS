/*
 * Network.cpp
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

#include <sys/types.h>
#include <unistd.h>
#include <cstdio>
#include <string>
#include <unordered_map>
#include "Network.h"
#include "ForwardingDevice.h"

using namespace std;

bool Network::addDevice(uint64_t id, const string& ipAddress, bool endDevice)
{
	if(this->isDevicePresent(ipAddress) == false)
	{
		ForwardingDevice device;
		device.id = id;
		device.ipAddress = ipAddress;
		device.endDevice = endDevice;
		this->deviceMap[ipAddress] = device;

		this->idToIpAddressMap[id] = ipAddress;

		return true;
	}
	else
	{
		return false;
	}
}

bool Network::addPort(const string& ipAddress, unsigned int port, const string& nextHopIpAddress)
{
	if(this->isDevicePresent(ipAddress) == false)
	{
		return false;
	}
	else
	{
		this->deviceMap[ipAddress].portToNextHopIpAddressMap[port] = nextHopIpAddress;
		return true;
	}
}

string Network::getNextHopIpAddress(const string& ipAddress, unsigned int port)
{
	if(this->isDevicePresent(ipAddress) == false)
	{
		return "NULL";
	}
	else
	{
		if(this->isPortPresent(ipAddress, port) ==  false)
		{
			return "NULL";
		}
		else
		{
			return this->deviceMap[ipAddress].portToNextHopIpAddressMap[port];
		}
	}
}

bool Network::isEndDevice(const string& ipAddress)
{
	if(this->isDevicePresent(ipAddress) == false)
	{
		return false;
	}
	else
	{
		return (this->deviceMap[ipAddress].endDevice == true);
	}
}

bool Network::isDevicePresent(const string& ipAddress) const
{
	if(this->deviceMap.find(ipAddress) == this->deviceMap.end())
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool Network::isPortPresent(const string& ipAddress, unsigned int port)
{
	if(this->isDevicePresent(ipAddress) == false)
	{
		return false;
	}
	else
	{
		if(this->deviceMap[ipAddress].portToNextHopIpAddressMap.find(port) == this->deviceMap[ipAddress].portToNextHopIpAddressMap.end())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

string Network::getDeviceIpAddress(uint64_t id)
{
	if(this->idToIpAddressMap.find(id) == this->idToIpAddressMap.end())
	{
		return "NULL";
	}
	else
	{
		return this->idToIpAddressMap[id];
	}
}

void Network::print() const
{
	unordered_map< string, ForwardingDevice >::const_iterator itr1;
	for(itr1 = this->deviceMap.begin(); itr1 != this->deviceMap.end(); itr1++)
	{
		const ForwardingDevice& device = itr1->second;
		fprintf(stdout, "id %lu ipAddress %s endDevice %d", device.id, device.ipAddress.c_str(), device.endDevice);

		unordered_map< unsigned int, string >::const_iterator itr2;
		for(itr2 = device.portToNextHopIpAddressMap.begin(); itr2 != device.portToNextHopIpAddressMap.end(); itr2++)
		{
			fprintf(stdout, " port %u nextHopIpAddress %s", itr2->first, itr2->second.c_str());
		}

		fprintf(stdout, "\n\n");
	}

	unordered_map< uint64_t, string >::const_iterator itr3;
	for(itr3 = this->idToIpAddressMap.begin(); itr3 != this->idToIpAddressMap.end(); itr3++)
	{
		fprintf(stdout, "id %lu ipAddress %s\n", itr3->first, itr3->second.c_str());
	}
}
