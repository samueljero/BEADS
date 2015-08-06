/*
 * ForwardingLink.cpp
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

#include <cstdio>
#include <string>
#include "ForwardingLink.h"
#include "Rule.h"

using namespace std;

ForwardingLink::ForwardingLink()
{
	this->isGateway = false;
}

ForwardingLink::ForwardingLink(const Rule& r, bool g)
{
	this->rule = r;
	this->isGateway = g;
}

bool ForwardingLink::equals(const ForwardingLink& other) const
{
	if((this->rule.equals(other.rule) == true)
			&& (this->isGateway == other.isGateway)
	)
	{
		return true;
	}
	else
	{
		return false;
	}
}

string ForwardingLink::toString() const
{
	char buffer[1024];
	sprintf(buffer, "[ForwardingLink] Rule: %s, IsGateway: %d",
			this->rule.toString().c_str(), this->isGateway);

	string retVal = buffer;
	return retVal;
}
