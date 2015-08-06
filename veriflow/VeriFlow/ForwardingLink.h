/*
 * ForwardingLink.h
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

#ifndef FORWARDINGLINK_H_
#define FORWARDINGLINK_H_

#include <string>
#include "Rule.h"

using namespace std;

class ForwardingLink
{
public:
	Rule rule;
	bool isGateway;

	ForwardingLink();
	ForwardingLink(const Rule& r, bool g);
	bool equals(const ForwardingLink& other) const;
	string toString() const;
};

#endif /* FORWARDINGLINK_H_ */
