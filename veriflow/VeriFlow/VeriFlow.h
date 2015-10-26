/*
 * VeriFlow.h
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

#ifndef VERIFLOW_H_
#define VERIFLOW_H_

#define BACKLOG 10
#define MAX_BUFFER_SIZE 4096

#include <sys/types.h>
#include <unistd.h>
#include <string>
#include "net.h"
#include <cstdio>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include "Rule.h"
#include "EquivalenceClass.h"
#include "ForwardingGraph.h"
#include "Template.h"
#include "Network.h"
#include "thread.h"
#include "Trie.h"

using namespace std;

#define TEST_MODE 0
#define PROXY_MODE 1

class VeriFlow;

struct VeriFlowConnectionInfo
{
	int clientSocket;
	struct sockaddr_in clientAddress;
	int controllerSocket;
	Network* network;
	VeriFlow* veriflow;
	pthread_mutex_t* networkMutex;
	pthread_mutex_t* veriflowMutex;
};

struct ProxyConnectionInfo
{
	struct sockaddr_in clientAddress;
	int recvSocket;
	int sendSocket;
	Network* network;
	VeriFlow* veriflow;
	pthread_mutex_t* networkMutex;
	pthread_mutex_t* veriflowMutex;
	struct ProxyConnectionInfo *other;
};

struct NextHopInfo
{
	string nextHop;
	unordered_set< string > visited;
};

void parseTopologyFile(const string& fileName, Network& network);

void handleVeriFlowConnection(VeriFlowConnectionInfo& info);
void* proxyCommunicationThreadFunction(void* arg);

void signalHandler(int sig);

uint64_t getMacValueAsInt(const string& macAddress);
string getMacValueAsString(uint64_t macAddress);
string getMacValueAsString(const uint8_t* macAddress);

uint64_t getIpValueAsInt(const string& ipAddress);
string getIpValueAsString(uint64_t ipAddress);
string convertMaskToDottedFormat(unsigned int mask);

string convertIntToString(unsigned int value);

bool compareForwardingLink(const ForwardingLink& first, const ForwardingLink& second);

class VeriFlow
{
private:
	Trie* primaryTrie;
	size_t previousFailures;
	unordered_map< unsigned short, uint64_t > socketPortToDatapathIdMap;

public:
	VeriFlow();
	~VeriFlow();

	bool addRule(const Rule& rule);
	bool removeRule(const Rule& rule);

	bool getAffectedEquivalenceClasses(const Rule& rule, int command, vector< EquivalenceClass >& vFinalPacketClasses, vector< vector< Trie* > >& vFinalTries);
	void processCurrentHop(const EquivalenceClass& packetClass, ForwardingGraph* graph, const string& currentLocation, unordered_set< string >& visited, NextHopInfo& nextHopInfo, FILE* fp);

	bool verifyRule(const Rule& rule, int command, double& updateTime, double& packetClassSearchTime, double& graphBuildTime, double& queryTime, unsigned long& ecCount, FILE* fp);
	bool traverseForwardingGraph(const EquivalenceClass& packetClass, ForwardingGraph* graph, const string& currentLocation, unordered_set< string > visited, FILE* fp);

	int getTotalRuleCount() const;

	void setDatapathId(unsigned short socketPort, uint64_t datapathId);
	uint64_t getDatapathId(unsigned short socketPort);

	void print(FILE* fp) const;
};

#endif /* VERIFLOW_H_ */
