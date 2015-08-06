/*
 * Test.cpp
 *
 *  Created on: Jul 15, 2012
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
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sys/time.h>
#include <dirent.h>
#include "Test.h"
#include "Trie.h"
#include "VeriFlow.h"
#include "Rule.h"
#include "EquivalenceClass.h"
#include "openflow.h"
#include "StringTokenizer.h"

using namespace std;

void Test::testVerification()
{
	double updateTime, packetClassSearchTime, graphBuildTime, queryTime, verificationTime;
	unsigned long ecCount;

	struct timeval start, end;
	double usecTime, seconds, useconds;

	Rule rule1, rule2, rule3, rule4, rule5, rule6, rule7;

	rule1.type = FORWARDING;
	rule1.fieldValue[DL_SRC] = "0:0:0:0:0:0";
	rule1.fieldMask[DL_SRC] = "0:0:0:0:0:0";
	rule1.fieldValue[DL_DST] = "0:0:0:0:0:0";
	rule1.fieldMask[DL_DST] = "0:0:0:0:0:0";
	rule1.fieldValue[NW_SRC] = "0.0.0.0";
	rule1.fieldMask[NW_SRC] = "0.0.0.0";
	rule1.fieldValue[NW_DST] = "20.1.0.0";
	rule1.fieldMask[NW_DST] = "255.255.0.0";

	// rule1.wildcards = 0;
	rule1.wildcards = (OFPFW_ALL & ~OFPFW_TP_SRC); // OFPFW_TP_SRC;
	rule1.fieldValue[TP_SRC] = "80";
	rule1.fieldMask[TP_SRC] = "65535";
	// rule1.fieldValue[TP_DST] = "8080";
	// rule1.fieldMask[TP_DST] = "65535";

	rule1.location = "102.0.0.1";
	rule1.nextHop = "103.0.0.1";
	rule1.priority = 3;

	rule2.type = FORWARDING;
	rule2.fieldValue[DL_SRC] = "0:0:0:0:0:0";
	rule2.fieldMask[DL_SRC] = "0:0:0:0:0:0";
	rule2.fieldValue[DL_DST] = "0:0:0:0:0:0";
	rule2.fieldMask[DL_DST] = "0:0:0:0:0:0";
	rule2.fieldValue[NW_SRC] = "0.0.0.0";
	rule2.fieldMask[NW_SRC] = "0.0.0.0";
	rule2.fieldValue[NW_DST] = "20.1.0.0";
	rule2.fieldMask[NW_DST] = "255.255.0.0";

	// rule2.wildcards = 0;
	rule2.wildcards = (OFPFW_ALL & ~OFPFW_TP_DST); // OFPFW_TP_DST;
	rule2.fieldValue[TP_DST] = "5555";
	rule2.fieldMask[TP_DST] = "65535";

	rule2.location = "102.0.0.1";
	rule2.nextHop = "103.0.0.1";
	rule2.priority = 2;

	rule3.type = FORWARDING;
	rule3.fieldValue[DL_SRC] = "0:0:0:0:0:0";
	rule3.fieldMask[DL_SRC] = "0:0:0:0:0:0";
	rule3.fieldValue[DL_DST] = "0:0:0:0:0:0";
	rule3.fieldMask[DL_DST] = "0:0:0:0:0:0";
	rule3.fieldValue[NW_SRC] = "0.0.0.0";
	rule3.fieldMask[NW_SRC] = "0.0.0.0";
	rule3.fieldValue[NW_DST] = "20.1.0.0";
	rule3.fieldMask[NW_DST] = "255.255.0.0";

	// rule3.wildcards = 0;
	rule3.wildcards = OFPFW_ALL; // OFPFW_TP_SRC;
	// rule3.fieldValue[TP_SRC] = "80";
	// rule3.fieldMask[TP_SRC] = "65535";
	// rule3.fieldValue[TP_DST] = "8080";
	// rule3.fieldMask[TP_DST] = "65535";

	rule3.location = "102.0.0.1";
	rule3.nextHop = "104.0.0.1";
	rule3.priority = 1;

	rule4.type = FORWARDING;
	rule4.fieldValue[DL_SRC] = "0:0:0:0:0:0";
	rule4.fieldMask[DL_SRC] = "0:0:0:0:0:0";
	rule4.fieldValue[DL_DST] = "0:0:0:0:0:0";
	rule4.fieldMask[DL_DST] = "0:0:0:0:0:0";
	rule4.fieldValue[NW_SRC] = "0.0.0.0";
	rule4.fieldMask[NW_SRC] = "0.0.0.0";
	rule4.fieldValue[NW_DST] = "20.1.0.0";
	rule4.fieldMask[NW_DST] = "255.255.0.0";

	// rule4.wildcards = 0;
	rule4.wildcards = OFPFW_ALL; // OFPFW_TP_SRC;
	// rule4.fieldValue[TP_SRC] = "80";
	// rule4.fieldMask[TP_SRC] = "65535";
	// rule4.fieldValue[TP_DST] = "8080";
	// rule4.fieldMask[TP_DST] = "65535";

	rule4.location = "103.0.0.1";
	rule4.nextHop = "103.0.0.1";
	rule4.priority = 1;

	rule5.type = FORWARDING;
	rule5.fieldValue[DL_SRC] = "0:0:0:0:0:0";
	rule5.fieldMask[DL_SRC] = "0:0:0:0:0:0";
	rule5.fieldValue[DL_DST] = "0:0:0:0:0:0";
	rule5.fieldMask[DL_DST] = "0:0:0:0:0:0";
	rule5.fieldValue[NW_SRC] = "0.0.0.0";
	rule5.fieldMask[NW_SRC] = "0.0.0.0";
	rule5.fieldValue[NW_DST] = "20.1.0.0";
	rule5.fieldMask[NW_DST] = "255.255.0.0";

	// rule5.wildcards = 0;
	rule5.wildcards = OFPFW_ALL; // OFPFW_TP_SRC;
	// rule5.fieldValue[TP_SRC] = "80";
	// rule5.fieldMask[TP_SRC] = "65535";
	// rule5.fieldValue[TP_DST] = "8080";
	// rule5.fieldMask[TP_DST] = "65535";

	rule5.location = "104.0.0.1";
	rule5.nextHop = "104.0.0.1";
	rule5.priority = 1;

	rule6.type = FORWARDING;
	rule6.fieldValue[DL_SRC] = "0:0:0:0:0:0";
	rule6.fieldMask[DL_SRC] = "0:0:0:0:0:0";
	rule6.fieldValue[DL_DST] = "0:0:0:0:0:0";
	rule6.fieldMask[DL_DST] = "0:0:0:0:0:0";
	rule6.fieldValue[NW_SRC] = "0.0.0.0";
	rule6.fieldMask[NW_SRC] = "0.0.0.0";
	rule6.fieldValue[NW_DST] = "20.1.0.0";
	rule6.fieldMask[NW_DST] = "255.255.0.0";

	// rule6.wildcards = 0;
	rule6.wildcards = (OFPFW_ALL & ~OFPFW_TP_SRC); // OFPFW_TP_SRC;
	rule6.fieldValue[TP_SRC] = "80";
	rule6.fieldMask[TP_SRC] = "65535";

	rule6.location = "104.0.0.1";
	rule6.nextHop = "104.0.0.1";
	rule6.priority = 2;

	rule7.type = FORWARDING;
	rule7.fieldValue[DL_SRC] = "0:0:0:0:0:0";
	rule7.fieldMask[DL_SRC] = "0:0:0:0:0:0";
	rule7.fieldValue[DL_DST] = "0:0:0:0:0:0";
	rule7.fieldMask[DL_DST] = "0:0:0:0:0:0";
	rule7.fieldValue[NW_SRC] = "0.0.0.0";
	rule7.fieldMask[NW_SRC] = "0.0.0.0";
	rule7.fieldValue[NW_DST] = "20.1.0.0";
	rule7.fieldMask[NW_DST] = "255.255.0.0";

	// rule7.wildcards = 0;
	rule7.wildcards = OFPFW_ALL; // OFPFW_TP_SRC;
	// rule7.fieldValue[TP_SRC] = "80";
	// rule7.fieldMask[TP_SRC] = "65535";
	// rule7.fieldValue[TP_DST] = "8080";
	// rule7.fieldMask[TP_DST] = "65535";

	rule7.location = "101.0.0.1";
	rule7.nextHop = "102.0.0.1";
	rule7.priority = 1;

	VeriFlow veriflow;
	veriflow.addRule(rule1);
	veriflow.addRule(rule2);
	veriflow.addRule(rule3);
	veriflow.addRule(rule4);
	veriflow.addRule(rule5);
	veriflow.addRule(rule6);
	// veriflow.removeRule(rule5);
	// veriflow.removeRule(rule1);

	gettimeofday(&start, NULL);
	veriflow.verifyRule(rule7, OFPFC_ADD, updateTime, packetClassSearchTime, graphBuildTime, queryTime, ecCount, stdout);
	gettimeofday(&end, NULL);

	seconds  = end.tv_sec  - start.tv_sec;
	useconds = end.tv_usec - start.tv_usec;
	usecTime = (seconds * 1000000) + useconds;
	verificationTime = usecTime;

	fprintf(stdout, "\nRuleSet 1 VerificationTime(usec) %f EquivalenceClassCount %lu UpdateTime(usec) %f PacketSearchTime(usec) %f GraphBuildTime(usec) %f QueryTime(usec) %f\n",
		verificationTime, ecCount, updateTime, packetClassSearchTime, graphBuildTime, queryTime);
}

void Test::test()
{
	Test::testVerification();
}
