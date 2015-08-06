/*
 * OpenFlowProtocolMessage.h
 *
 *  Created on: Mar 12, 2012
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

#ifndef OPENFLOWPROTOCOLMESSAGE_H_
#define OPENFLOWPROTOCOLMESSAGE_H_

#include <sys/types.h>
#include <unistd.h>
#include <cstdio>
#include "openflow.h"
#include "VeriFlow.h"

using namespace std;

class OpenFlowProtocolMessage
{
public:
	static void process(const char* data, ProxyConnectionInfo& info, FILE* fp);

	static void processHeader(const ofp_header* header, ProxyConnectionInfo& info, FILE* fp);

	/* Immutable messages. */
	static void processHello(const char* data, ProxyConnectionInfo& info, FILE* fp);
	static void processError(const char* data, ProxyConnectionInfo& info, FILE* fp);
	static void processEchoRequest(const char* data, ProxyConnectionInfo& info, FILE* fp);
	static void processEchoReply(const char* data, ProxyConnectionInfo& info, FILE* fp);
	static void processVendor(const char* data, ProxyConnectionInfo& info, FILE* fp);

	/* Switch configuration messages. */
	static void processFeaturesRequest(const char* data, ProxyConnectionInfo& info, FILE* fp);
	static void processFeaturesReply(const char* data, ProxyConnectionInfo& info, FILE* fp);
	static void processGetConfigRequest(const char* data, ProxyConnectionInfo& info, FILE* fp);
	static void processGetConfigReply(const char* data, ProxyConnectionInfo& info, FILE* fp);
	static void processSetConfig(const char* data, ProxyConnectionInfo& info, FILE* fp);

	/* Asynchronous messages. */
	static void processPacketIn(const char* data, ProxyConnectionInfo& info, FILE* fp);
	static void processFlowRemoved(const char* data, ProxyConnectionInfo& info, FILE* fp);
	static void processPortStatus(const char* data, ProxyConnectionInfo& info, FILE* fp);

	/* Controller command messages. */
	static void processPacketOut(const char* data, ProxyConnectionInfo& info, FILE* fp);
	static void processFlowMod(const char* data, ProxyConnectionInfo& info, FILE* fp);
	static void processPortMod(const char* data, ProxyConnectionInfo& info, FILE* fp);

	/* Statistics messages. */
	static void processStatsRequest(const char* data, ProxyConnectionInfo& info, FILE* fp);
	static void processStatsReply(const char* data, ProxyConnectionInfo& info, FILE* fp);

	/* Barrier messages. */
	static void processBarrierRequest(const char* data, ProxyConnectionInfo& info, FILE* fp);
	static void processBarrierReply(const char* data, ProxyConnectionInfo& info, FILE* fp);

	/* Queue Configuration messages. */
	static void processQueueGetConfigRequest(const char* data, ProxyConnectionInfo& info, FILE* fp);
	static void processQueueGetConfigReply(const char* data, ProxyConnectionInfo& info, FILE* fp);

	static void processMatch(const ofp_match* match, ProxyConnectionInfo& info, FILE* fp);
};

#endif /* OPENFLOWPROTOCOLMESSAGE_H_ */
