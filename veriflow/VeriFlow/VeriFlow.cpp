/*
 * VeriFlow.cpp
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

#include <sys/types.h>
#include <unistd.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>
#include <signal.h>
#include <stdint.h>
#include "net.h"
#include "thread.h"
#include "StringTokenizer.h"
#include "VeriFlow.h"
#include "openflow.h"
#include "OpenFlowProtocolMessage.h"
#include "DynamicArray.h"
#include "Network.h"
#include <list>
#include <vector>
#include <sys/time.h>
#include <unordered_map>
#include <unordered_set>
#include "EquivalenceClass.h"
#include "Rule.h"
#include "ForwardingGraph.h"
#include "ForwardingLink.h"
#include "Template.h"
#include "Trie.h"
#include "Test.h"

using namespace std;

static int tcpServerSocket;

static string controllerIpAddress = "127.0.0.1"; // localhost
static unsigned short controllerPort = 6633; // default NOX port

static FILE* logFile = NULL;

static pthread_mutex_t networkMutex, veriflowMutex;

static VeriFlow veriflow;

int mode = TEST_MODE;

vector<string> endhosts;

int main(int argc, char** argv)
{
	if(argc == 1)
	{
		mode = TEST_MODE;
		Test::test();
		return EXIT_SUCCESS;
	}
	else if(argc < 5)
	{
		fprintf(stderr, "USAGE: %s <veriflow_port> <controller_address> <controller_port> <topology_file>\n", argv[0]);
		exit(1);
	}

	mode = PROXY_MODE;

	Network network;

	string topologyFileName = argv[4];
	parseTopologyFile(topologyFileName, network);

	network.print();
	// return EXIT_SUCCESS;

	controllerIpAddress = argv[2];
	controllerPort = (unsigned short)atoi(argv[3]);

	tcpServerSocket = createSocket(SOCK_STREAM);
	logFile = fopen("log.txt", "w");

	struct sigaction act;
	act.sa_handler = signalHandler;
	sigemptyset(&act.sa_mask);
	act.sa_flags = 0;
	sigaction(SIGINT, &act, NULL);

	int optval = 1;

	setsockopt(tcpServerSocket, SOL_SOCKET, SO_REUSEADDR, &optval, sizeof(optval));

	bindSocket(tcpServerSocket, NULL, (unsigned short)atoi(argv[1]));
	listenSocket(tcpServerSocket, BACKLOG);

	createMutex(&networkMutex);
	createMutex(&veriflowMutex);

	unsigned int i = 0;

	while(1)
	{
		struct sockaddr_in clientAddress;
		socklen_t clientAddressLength = sizeof(clientAddress);
		int clientSocket;

		++i;

		fprintf(stdout, "[VeriFlow] [%u] Waiting for new connection...\n", i);
		clientSocket = accept(tcpServerSocket, (struct sockaddr*)&clientAddress, &clientAddressLength);
		fprintf(stdout, "[VeriFlow] [%u] Accepted new connection from %s at port %u\n",
				i, getIPAddress(clientAddress), ntohs(clientAddress.sin_port));

		VeriFlowConnectionInfo info;
		info.clientSocket = clientSocket;
		info.clientAddress = clientAddress;
		info.network = &network;
		info.veriflow = &veriflow;
		info.networkMutex = &networkMutex;
		info.veriflowMutex = &veriflowMutex;

		handleVeriFlowConnection(info);
	}

	return EXIT_SUCCESS;
}

void parseTopologyFile(const string& fileName, Network& network)
{
	char buffer[1024];
	ifstream fin(fileName.c_str());
	while(fin.eof() == false)
	{
		fin.getline(buffer, 1023);
		if(strlen(buffer) == 0)
		{
			continue;
		}

		if(strstr(buffer, "#") == buffer)
		{
			continue;
		}

		// # Format: id ipAddress endDevice port1 nextHopIpAddress1 port2 nextHopIpAddress2 ...

		StringTokenizer st(buffer, " ");
		if(st.countTokens() < 3)
		{
			continue;
		}

		unsigned int id = atoi(st.nextToken().c_str());
		string ipAddress = st.nextToken();
		bool endDevice = atoi(st.nextToken().c_str());

		if (endDevice){
				endhosts.push_back(ipAddress);
		}

		network.addDevice(id, ipAddress, endDevice);

		while(st.hasMoreTokens() == true)
		{
			string port = st.nextToken();
			if(port.compare("#") == 0)
			{
				break;
			}

			string nextHopIpAddress = st.nextToken();

			network.addPort(ipAddress, atoi(port.c_str()), nextHopIpAddress);
		}
	}

	fin.close();
}

void handleVeriFlowConnection(VeriFlowConnectionInfo& info)
{
	// Connect to the controller.
	int controllerSocket = createSocket(SOCK_STREAM);
	struct sockaddr_in controllerAddress = createSocketAddress(controllerIpAddress.c_str(), controllerPort);

	int res = connect(controllerSocket, (struct sockaddr*)&controllerAddress, sizeof(controllerAddress));
	if(res == -1)
	{
		fprintf(stderr, "[handleVeriFlowConnection] Cannot connect to controller at %s.\n", controllerIpAddress.c_str());
		close(controllerSocket);
		close(info.clientSocket);

		return;
	}

	info.controllerSocket = controllerSocket;

	ProxyConnectionInfo *info1 = new ProxyConnectionInfo;
	info1->clientAddress = info.clientAddress;
	info1->recvSocket = info.controllerSocket;
	info1->sendSocket = info.clientSocket;
	info1->network = info.network;
	info1->veriflow = info.veriflow;
	info1->networkMutex = info.networkMutex;
	info1->veriflowMutex = info.veriflowMutex;

	ProxyConnectionInfo *info2 = new ProxyConnectionInfo;
	info2->clientAddress = info.clientAddress;
	info2->recvSocket = info.clientSocket;
	info2->sendSocket = info.controllerSocket;
	info2->network = info.network;
	info2->veriflow = info.veriflow;
	info2->networkMutex = info.networkMutex;
	info2->veriflowMutex = info.veriflowMutex;

	pthread_t controllerToNetworkCommunicationThread;
	createThread(&controllerToNetworkCommunicationThread, proxyCommunicationThreadFunction, (void*)info1, PTHREAD_CREATE_DETACHED, NORMAL_PRIORITY);

	pthread_t networkToControllerCommunicationThread;
	createThread(&networkToControllerCommunicationThread, proxyCommunicationThreadFunction, (void*)info2, PTHREAD_CREATE_DETACHED, NORMAL_PRIORITY);
}

void* proxyCommunicationThreadFunction(void* arg)
{
	setThreadAsyncCancel();

	ProxyConnectionInfo info = *((ProxyConnectionInfo*)arg);
	delete (ProxyConnectionInfo*)arg;

	DynamicArray<char> messageBuffer;
	char data[MAX_BUFFER_SIZE];
	int bytesReceived = 0;

	while((bytesReceived = recv(info.recvSocket, data, sizeof(data), 0)) > 0)
	{
/*		int bytesSent = 0, res = 0;

		while(bytesSent < bytesReceived)
		{
			res = send(info.sendSocket, (data + bytesSent), (bytesReceived - bytesSent), 0);
			if(res == -1)
			{
				fprintf(stderr, "[proxyCommunicationThreadFunction] TCP send failure. Stopping operation.\n");

				close(info.sendSocket);
				close(info.recvSocket);

				pthread_exit(NULL);
			}
			else
			{
				bytesSent += res;
			}
		}

		continue;
*/
		messageBuffer.append(data, bytesReceived);

		while(messageBuffer.size() >= sizeof(ofp_header))
		{
			// Received full header.
			const ofp_header* header = (const ofp_header*)messageBuffer.getData(sizeof(ofp_header));

			if(messageBuffer.size() >= ntohs(header->length))
			{
				// Received a complete message.
				int bytesToSend = ntohs(header->length);
				char* messageData = messageBuffer.getData(bytesToSend);

				delete [] (char*)header;

				// pthread_mutex_lock(info.mutex);
				// fprintf(logFile, "[%s]\n", getIPAddress(info.clientAddress));
				OpenFlowProtocolMessage::process(messageData, info, logFile);
				// fprintf(logFile, "\n");
				// fflush(logFile);
				// pthread_mutex_unlock(info.mutex);

				int bytesSent = 0, res = 0;

				while(bytesSent < bytesToSend)
				{
					res = send(info.sendSocket, (messageData + bytesSent), (bytesToSend - bytesSent), 0);
					if(res == -1)
					{
						fprintf(stderr, "[proxyCommunicationThreadFunction] TCP send failure. Stopping operation.\n");

						close(info.sendSocket);

						pthread_exit(NULL);
					}
					else
					{
						bytesSent += res;
					}
				}

				delete [] messageData;

				messageBuffer.clearRange(0, bytesToSend - 1);
			}
			else
			{
				break;
			}
		}
	}

	if (bytesReceived == 0 ) {
			close(info.recvSocket);
	}

	fprintf(stdout, "[proxyCommunicationThreadFunction] Connection closed.\n");

	pthread_exit(NULL);
}

void signalHandler(int sig)
{
	close(tcpServerSocket);

	pthread_mutex_lock(&veriflowMutex);
	//veriflow.print(logFile);
	fclose(logFile);
	pthread_mutex_unlock(&veriflowMutex);

	exit(1);
}

uint64_t getMacValueAsInt(const string& macAddress)
{
	uint64_t macValue = 0;
	StringTokenizer st(macAddress, ":");
	while(st.hasMoreTokens() == true)
	{
		unsigned long value = strtoul(st.nextToken().c_str(), NULL, 16);
		macValue <<= 8;
		macValue += value;
	}

	return macValue;
}

string getMacValueAsString(uint64_t macAddress)
{
	unsigned int values[6];

	for(int i = 5; i >= 0; i--)
	{
		values[5 - i] = (unsigned int)((macAddress >> (8 * i)) & ((unsigned int)0xFF));
	}

	char buffer[1024];
	sprintf(buffer, "%02x:%02x:%02x:%02x:%02x:%02x", values[0], values[1], values[2], values[3], values[4], values[5]);

	string macValue = buffer;
	return macValue;
}

string getMacValueAsString(const uint8_t* macAddress)
{
	string macValue;
	char buffer[8];

	for(int i = 0; i < OFP_ETH_ALEN; i++)
	{
		uint8_t upperNibble = macAddress[i] >> 4;
		uint8_t lowerNibble = macAddress[i] & (uint8_t)0xF;

		sprintf(buffer, "%x%x", upperNibble, lowerNibble);
		macValue += buffer;
		if(i != (OFP_ETH_ALEN - 1))
		{
			macValue += ":";
		}
	}

	return macValue;
}

uint64_t getIpValueAsInt(const string& ipAddress)
{
	uint64_t ipValue = 0;
	StringTokenizer st(ipAddress, ".");
	while(st.hasMoreTokens() == true)
	{
		unsigned int quadValue = atoi(st.nextToken().c_str());
		ipValue <<= 8;
		ipValue += quadValue;
	}

	return ipValue;
}

string getIpValueAsString(uint64_t ipAddress)
{
	unsigned int quadValues[4];

	for(int i = 3; i >= 0; i--)
	{
		quadValues[3 - i] = (unsigned int)((ipAddress >> (8 * i)) & ((unsigned int)0xFF));
	}

	char buffer[1024];
	sprintf(buffer, "%u.%u.%u.%u", quadValues[0], quadValues[1], quadValues[2], quadValues[3]);

	string ipValue = buffer;
	return ipValue;
}

string convertMaskToDottedFormat(unsigned int mask)
{
	uint64_t maskValue = 0xFFFFFFFF;
	maskValue >>= mask;
	maskValue <<= mask;

	return ::getIpValueAsString(maskValue);
}

string convertIntToString(unsigned int value)
{
	char buffer[128];
	snprintf(buffer, 127, "%u", value);

	string retVal = buffer;
	return retVal;
}

bool compareForwardingLink(const ForwardingLink& first, const ForwardingLink& second)
{
	if(first.rule.priority >= second.rule.priority)
	{
		return true;
	}
	else
	{
		return false;
	}
}

VeriFlow::VeriFlow()
{
	this->primaryTrie = new Trie(IN_PORT);
	if(this->primaryTrie == NULL)
	{
		fprintf(stderr, "[VeriFlow::VeriFlow] Memory allocation error (this->primaryTrie == NULL). Terminating process.\n");
		exit(1);
	}
}

VeriFlow::~VeriFlow()
{
	if(this->primaryTrie != NULL)
	{
		delete this->primaryTrie;
		this->primaryTrie = NULL;
	}
}

bool VeriFlow::addRule(const Rule& rule)
{
	Trie* currentTrie = this->primaryTrie;
	vector< Trie* > vTries;
	for(int i = 0; i < ALL_FIELD_INDEX_END_MARKER; i++)
	{
		vTries.push_back(currentTrie);
		TrieNode* leaf = currentTrie->addRule(rule);
		if(i == (ALL_FIELD_INDEX_END_MARKER - 1))
		{
			// This was the last level trie. Need to check the rule list.
			if(leaf->ruleSet == NULL)
			{
				leaf->ruleSet = new unordered_set< Rule, KHash< Rule >, KEqual< Rule > >;
				if(leaf->ruleSet == NULL)
				{
					fprintf(stderr, "[VeriFlow::addRule] Memory allocation error (leaf->ruleSet == NULL). Terminating process.\n");
					exit(1);
				}
			}
			else
			{
				unordered_set< Rule, KHash< Rule >, KEqual< Rule > >::const_iterator itr;
				itr = leaf->ruleSet->find(rule);
				if(itr != leaf->ruleSet->end()) // Rule already exists.
				{
					return false;
				}
			}

			leaf->ruleSet->insert(rule);
		}
		else
		{
			// This was an intermediate trie.
			if(leaf->nextLevelTrie == NULL)
			{
				leaf->nextLevelTrie = new Trie((FieldIndex)(i + 1));
				if(leaf->nextLevelTrie == NULL)
				{
					fprintf(stderr, "[VeriFlow::addRule] Memory allocation error (leaf->nextLevelTrie == NULL). Terminating process.\n");
					exit(1);
				}
			}

			currentTrie = leaf->nextLevelTrie;
		}
	}

	for(unsigned int i = 0; i < vTries.size(); i++)
	{
		(vTries[i]->totalRuleCount)++;
	}

	return true;
}

bool VeriFlow::removeRule(const Rule& rule)
{
	Trie* currentTrie = this->primaryTrie;
	vector< Trie* > vTries;
	vector< TrieNode* > vLeaves;
	for(int i = 0; i < ALL_FIELD_INDEX_END_MARKER; i++)
	{
		TrieNode* leaf = currentTrie->findNode(rule.fieldValue[i], rule.fieldMask[i]);
		if(leaf == NULL)
		{
			return false;
		}

		if(i == (ALL_FIELD_INDEX_END_MARKER - 1))
		{
			// This was the last level trie. Need to check the rule list.
			if(leaf->ruleSet == NULL)
			{
				fprintf(stderr, "[VeriFlow::removeRule] Error: leaf->ruleSet cannot be NULL. Terminating process.\n");
				exit(1);
			}

			unordered_set< Rule, KHash< Rule >, KEqual< Rule > >::const_iterator itr;
			itr = leaf->ruleSet->find(rule);
			if(itr != leaf->ruleSet->end()) // Rule found.
			{
				leaf->ruleSet->erase(itr);
				if(leaf->ruleSet->empty() == true)
				{
					currentTrie->removeRule(leaf);

					for(unsigned int k = 0; k < vLeaves.size(); k++)
					{
						unsigned int index = (vLeaves.size() - k - 1);
						if(vLeaves[index]->nextLevelTrie->totalRuleCount == 0)
						{
							vTries[index]->removeRule(vLeaves[index]);
						}
					}
				}

				return true;
			}

			return false;
		}
		else
		{
			// This was an intermediate trie.

			vTries.push_back(currentTrie);
			vLeaves.push_back(leaf);

			if(leaf->nextLevelTrie == NULL)
			{
				fprintf(stderr, "[VeriFlow::removeRule] Error: leaf->nextLevelTrie cannot be NULL. Terminating process.\n");
				exit(1);
			}

			currentTrie = leaf->nextLevelTrie;
		}
	}

	return false;
}

bool VeriFlow::getAffectedEquivalenceClasses(const Rule& rule, int command, vector< EquivalenceClass >& vFinalPacketClasses, vector< vector< Trie* > >& vFinalTries)
{
	if(command == OFPFC_ADD)
	{
		// We may choose not to verify a rule if that rule is already present in the data plane.
		bool res = this->addRule(rule);
		if(res == false)
		{
			return false;
		}
	}
	else if(command == OFPFC_DELETE_STRICT)
	{
		bool res = this->removeRule(rule);
		if(res == false)
		{
			return false;
		}
		else
		{
			Rule dummyRule = rule;
			dummyRule.type = DUMMY;
			this->addRule(dummyRule); // This dummy rule will be deleted inside VeriFlow::verifyRule() function.
		}
	}

	vector< EquivalenceClass > vInPortPacketClasses;
	this->primaryTrie->getEquivalenceClasses(rule, vInPortPacketClasses);

	if(vInPortPacketClasses.size() == 0)
	{
		fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error in rule: %s\n", rule.toString().c_str());
		fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error: (vInPortPacketClasses.size() == 0). Terminating process.\n");
		exit(1);
	}

	vector< Trie* > vInPortTries;
	vInPortTries.push_back(this->primaryTrie);
	for(unsigned int i = 0; i < vInPortPacketClasses.size(); i++) // Level 1
	{
		// fprintf(stdout, "rule.fieldValue[DL_SRC]: %s\n", rule.fieldValue[DL_SRC].c_str());
		// fprintf(stdout, "rule.fieldMask[DL_SRC]: %s\n", rule.fieldMask[DL_SRC].c_str());
		// fprintf(stdout, "vInPortPacketClasses[%u]: %s\n", i, vInPortPacketClasses[i].toString().c_str());

		vector< EquivalenceClass > vDlSrcPacketClasses;
		vector< Trie* > vDlSrcTries;
		if(rule.type == FORWARDING)
		{
			Trie::getNextLevelEquivalenceClasses(IN_PORT, vInPortPacketClasses[i].lowerBound[IN_PORT], rule, vInPortTries, vDlSrcPacketClasses, vDlSrcTries);

			if(vDlSrcPacketClasses.size() == 0)
			{
				fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error in rule: %s\n", rule.toString().c_str());
				fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error: (vDlSrcPacketClasses.size() == 0). Terminating process.\n");
				exit(1);
			}

			for(unsigned int j = 0; j < vDlSrcPacketClasses.size(); j++) // Level 2
			{
				vector< EquivalenceClass > vDlDstPacketClasses;
				vector< Trie* > vDlDstTries;
				if(rule.type == FORWARDING)
				{
					Trie::getNextLevelEquivalenceClasses(DL_SRC, vDlSrcPacketClasses[j].lowerBound[DL_SRC], rule, vDlSrcTries, vDlDstPacketClasses, vDlDstTries);

					if(vDlDstPacketClasses.size() == 0)
					{
						fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error in rule: %s\n", rule.toString().c_str());
						fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error: (vDlDstPacketClasses.size() == 0). Terminating process.\n");
						exit(1);
					}

					for(unsigned int k = 0; k < vDlDstPacketClasses.size(); k++) // Level 3
					{
						vector< EquivalenceClass > vDlTypePacketClasses;
						vector< Trie* > vDlTypeTries;
						if(rule.type == FORWARDING)
						{
							Trie::getNextLevelEquivalenceClasses(DL_DST, vDlDstPacketClasses[k].lowerBound[DL_DST], rule, vDlDstTries, vDlTypePacketClasses, vDlTypeTries);

							if(vDlTypePacketClasses.size() == 0)
							{
								fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error in rule: %s\n", rule.toString().c_str());
								fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error: (vDlTypePacketClasses.size() == 0). Terminating process.\n");
								exit(1);
							}

							for(unsigned int l = 0; l < vDlTypePacketClasses.size(); l++) // Level 4
							{
								vector< EquivalenceClass > vDlVlanPacketClasses;
								vector< Trie* > vDlVlanTries;
								if(rule.type == FORWARDING)
								{
									Trie::getNextLevelEquivalenceClasses(DL_TYPE, vDlTypePacketClasses[l].lowerBound[DL_TYPE], rule, vDlTypeTries, vDlVlanPacketClasses, vDlVlanTries);

									if(vDlVlanPacketClasses.size() == 0)
									{
										fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error in rule: %s\n", rule.toString().c_str());
										fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error: (vDlVlanPacketClasses.size() == 0). Terminating process.\n");
										exit(1);
									}

									for(unsigned int m = 0; m < vDlVlanPacketClasses.size(); m++) // Level 5
									{
										vector< EquivalenceClass > vDlVlanPcpPacketClasses;
										vector< Trie* > vDlVlanPcpTries;
										if(rule.type == FORWARDING)
										{
											Trie::getNextLevelEquivalenceClasses(DL_VLAN, vDlVlanPacketClasses[m].lowerBound[DL_VLAN], rule, vDlVlanTries, vDlVlanPcpPacketClasses, vDlVlanPcpTries);

											if(vDlVlanPcpPacketClasses.size() == 0)
											{
												fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error in rule: %s\n", rule.toString().c_str());
												fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error: (vDlVlanPcpPacketClasses.size() == 0). Terminating process.\n");
												exit(1);
											}

											for(unsigned int n = 0; n < vDlVlanPcpPacketClasses.size(); n++) // Level 6
											{
												vector< EquivalenceClass > vMplsLabelPacketClasses;
												vector< Trie* > vMplsLabelTries;
												if(rule.type == FORWARDING)
												{
													Trie::getNextLevelEquivalenceClasses(DL_VLAN_PCP, vDlVlanPcpPacketClasses[n].lowerBound[DL_VLAN_PCP], rule, vDlVlanPcpTries, vMplsLabelPacketClasses, vMplsLabelTries);

													if(vMplsLabelPacketClasses.size() == 0)
													{
														fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error in rule: %s\n", rule.toString().c_str());
														fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error: (vMplsLabelPacketClasses.size() == 0). Terminating process.\n");
														exit(1);
													}

													for(unsigned int o = 0; o < vMplsLabelPacketClasses.size(); o++) // Level 7
													{
														vector< EquivalenceClass > vMplsTcPacketClasses;
														vector< Trie* > vMplsTcTries;
														if(rule.type == FORWARDING)
														{
															Trie::getNextLevelEquivalenceClasses(MPLS_LABEL, vMplsLabelPacketClasses[o].lowerBound[MPLS_LABEL], rule, vMplsLabelTries, vMplsTcPacketClasses, vMplsTcTries);

															if(vMplsTcPacketClasses.size() == 0)
															{
																fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error in rule: %s\n", rule.toString().c_str());
																fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error: (vMplsTcPacketClasses.size() == 0). Terminating process.\n");
																exit(1);
															}

															for(unsigned int p = 0; p < vMplsTcPacketClasses.size(); p++) // Level 8
															{
																vector< EquivalenceClass > vNwSrcPacketClasses;
																vector< Trie* > vNwSrcTries;
																if(rule.type == FORWARDING)
																{
																	Trie::getNextLevelEquivalenceClasses(MPLS_TC, vMplsTcPacketClasses[p].lowerBound[MPLS_TC], rule, vMplsTcTries, vNwSrcPacketClasses, vNwSrcTries);

																	if(vNwSrcPacketClasses.size() == 0)
																	{
																		fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error in rule: %s\n", rule.toString().c_str());
																		fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error: (vNwSrcPacketClasses.size() == 0). Terminating process.\n");
																		exit(1);
																	}

																	for(unsigned int q = 0; q < vNwSrcPacketClasses.size(); q++) // Level 9
																	{
																		vector< EquivalenceClass > vNwDstPacketClasses;
																		vector< Trie* > vNwDstTries;
																		if(rule.type == FORWARDING)
																		{
																			Trie::getNextLevelEquivalenceClasses(NW_SRC, vNwSrcPacketClasses[q].lowerBound[NW_SRC], rule, vNwSrcTries, vNwDstPacketClasses, vNwDstTries);

																			if(vNwDstPacketClasses.size() == 0)
																			{
																				fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error in rule: %s\n", rule.toString().c_str());
																				fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error: (vNwDstPacketClasses.size() == 0). Terminating process.\n");
																				exit(1);
																			}

																			for(unsigned int r = 0; r < vNwDstPacketClasses.size(); r++) // Level 10
																			{
																				vector< EquivalenceClass > vNwProtoPacketClasses;
																				vector< Trie* > vNwProtoTries;
																				if(rule.type == FORWARDING)
																				{
																					Trie::getNextLevelEquivalenceClasses(NW_DST, vNwDstPacketClasses[r].lowerBound[NW_DST], rule, vNwDstTries, vNwProtoPacketClasses, vNwProtoTries);

																					if(vNwProtoPacketClasses.size() == 0)
																					{
																						fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error in rule: %s\n", rule.toString().c_str());
																						fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error: (vNwProtoPacketClasses.size() == 0). Terminating process.\n");
																						exit(1);
																					}

																					for(unsigned int s = 0; s < vNwProtoPacketClasses.size(); s++) // Level 11
																					{
																						vector< EquivalenceClass > vNwTosPacketClasses;
																						vector< Trie* > vNwTosTries;
																						if(rule.type == FORWARDING)
																						{
																							Trie::getNextLevelEquivalenceClasses(NW_PROTO, vNwProtoPacketClasses[s].lowerBound[NW_PROTO], rule, vNwProtoTries, vNwTosPacketClasses, vNwTosTries);

																							if(vNwTosPacketClasses.size() == 0)
																							{
																								fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error in rule: %s\n", rule.toString().c_str());
																								fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error: (vNwTosPacketClasses.size() == 0). Terminating process.\n");
																								exit(1);
																							}

																							for(unsigned int t = 0; t < vNwTosPacketClasses.size(); t++) // Level 12
																							{
																								vector< EquivalenceClass > vTpSrcPacketClasses;
																								vector< Trie* > vTpSrcTries;
																								if(rule.type == FORWARDING)
																								{
																									Trie::getNextLevelEquivalenceClasses(NW_TOS, vNwTosPacketClasses[t].lowerBound[NW_TOS], rule, vNwTosTries, vTpSrcPacketClasses, vTpSrcTries);

																									if(vTpSrcPacketClasses.size() == 0)
																									{
																										fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error in rule: %s\n", rule.toString().c_str());
																										fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error: (vTpSrcPacketClasses.size() == 0). Terminating process.\n");
																										exit(1);
																									}

																									for(unsigned int u = 0; u < vTpSrcPacketClasses.size(); u++) // Level 13
																									{
																										vector< EquivalenceClass > vTpDstPacketClasses;
																										vector< Trie* > vTpDstTries;
																										if(rule.type == FORWARDING)
																										{
																											Trie::getNextLevelEquivalenceClasses(TP_SRC, vTpSrcPacketClasses[u].lowerBound[TP_SRC], rule, vTpSrcTries, vTpDstPacketClasses, vTpDstTries);

																											if(vTpDstPacketClasses.size() == 0)
																											{
																												fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error in rule: %s\n", rule.toString().c_str());
																												fprintf(stderr, "[VeriFlow::getAffectedEquivalenceClasses] Error: (vTpDstPacketClasses.size() == 0). Terminating process.\n");
																												exit(1);
																											}

																											// This is the last level. Now, prepare the final equivalence classes/packets.
																											for(unsigned int v = 0; v < vTpDstPacketClasses.size(); v++) // Level 14
																											{
																												uint64_t lb[ALL_FIELD_INDEX_END_MARKER], ub[ALL_FIELD_INDEX_END_MARKER];
																												memset(lb, 0, sizeof(lb));
																												memset(ub, 0, sizeof(ub));

																												lb[IN_PORT] = vInPortPacketClasses[i].lowerBound[IN_PORT];
																												ub[IN_PORT] = vInPortPacketClasses[i].upperBound[IN_PORT];

																												lb[DL_SRC] = vDlSrcPacketClasses[j].lowerBound[DL_SRC];
																												ub[DL_SRC] = vDlSrcPacketClasses[j].upperBound[DL_SRC];

																												lb[DL_DST] = vDlDstPacketClasses[k].lowerBound[DL_DST];
																												ub[DL_DST] = vDlDstPacketClasses[k].upperBound[DL_DST];

																												lb[DL_TYPE] = vDlTypePacketClasses[l].lowerBound[DL_TYPE];
																												ub[DL_TYPE] = vDlTypePacketClasses[l].upperBound[DL_TYPE];

																												lb[DL_VLAN] = vDlVlanPacketClasses[m].lowerBound[DL_VLAN];
																												ub[DL_VLAN] = vDlVlanPacketClasses[m].upperBound[DL_VLAN];

																												lb[DL_VLAN_PCP] = vDlVlanPcpPacketClasses[n].lowerBound[DL_VLAN_PCP];
																												ub[DL_VLAN_PCP] = vDlVlanPcpPacketClasses[n].upperBound[DL_VLAN_PCP];

																												lb[MPLS_LABEL] = vMplsLabelPacketClasses[o].lowerBound[MPLS_LABEL];
																												ub[MPLS_LABEL] = vMplsLabelPacketClasses[o].upperBound[MPLS_LABEL];

																												lb[MPLS_TC] = vMplsTcPacketClasses[p].lowerBound[MPLS_TC];
																												ub[MPLS_TC] = vMplsTcPacketClasses[p].upperBound[MPLS_TC];

																												lb[NW_SRC] = vNwSrcPacketClasses[q].lowerBound[NW_SRC];
																												ub[NW_SRC] = vNwSrcPacketClasses[q].upperBound[NW_SRC];

																												lb[NW_DST] = vNwDstPacketClasses[r].lowerBound[NW_DST];
																												ub[NW_DST] = vNwDstPacketClasses[r].upperBound[NW_DST];

																												lb[NW_PROTO] = vNwProtoPacketClasses[s].lowerBound[NW_PROTO];
																												ub[NW_PROTO] = vNwProtoPacketClasses[s].upperBound[NW_PROTO];

																												lb[NW_TOS] = vNwTosPacketClasses[t].lowerBound[NW_TOS];
																												ub[NW_TOS] = vNwTosPacketClasses[t].upperBound[NW_TOS];

																												lb[TP_SRC] = vTpSrcPacketClasses[u].lowerBound[TP_SRC];
																												ub[TP_SRC] = vTpSrcPacketClasses[u].upperBound[TP_SRC];

																												lb[TP_DST] = vTpDstPacketClasses[v].lowerBound[TP_DST];
																												ub[TP_DST] = vTpDstPacketClasses[v].upperBound[TP_DST];

																												EquivalenceClass packetClass(lb, ub);
																												// fprintf(stdout, "[VeriFlow::getAffectedEquivalenceClasses] Packet: %s\n", packet.toString().c_str());
																												// fflush(stdout);

																												vFinalPacketClasses.push_back(packetClass);
																												vFinalTries.push_back(vTpDstTries);
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return true;
}

void VeriFlow::processCurrentHop(const EquivalenceClass& packetClass, ForwardingGraph* graph, const string& currentLocation, unordered_set< string >& visited, NextHopInfo& nextHopInfo, FILE* fp)
{
	if(graph == NULL)
	{
		// fprintf(fp, "[VeriFlow::processCurrentHop] (graph == NULL) for the following packet class.\n");
		// fprintf(fp, "[VeriFlow::processCurrentHop] PacketClass: %s\n", packetClass.toString().c_str());
		return;
	}

	if(visited.find(currentLocation) != visited.end())
	{
		// Found a loop.
		// fprintf(fp, "[VeriFlow::processCurrentHop] Found a loop for the following packet class.\n");
		// fprintf(fp, "[VeriFlow::processCurrentHop] PacketClass: %s\n", packetClass.toString().c_str());

		return;
	}

	if(graph->links.find(currentLocation) == graph->links.end())
	{
		// Found a black hole.
		// fprintf(fp, "[VeriFlow::processCurrentHop] Found a black hole for the following packet class as current location (%s) not found.\n", currentLocation.c_str());
		// fprintf(fp, "[VeriFlow::processCurrentHop] PacketClass: %s\n", packetClass.toString().c_str());

		return;
	}

	if(graph->links[currentLocation].empty() == true)
	{
		// Found a black hole.
		// fprintf(fp, "[VeriFlow::processCurrentHop] Found a black hole for the following packet class as there is no outgoing link at current location (%s).\n", currentLocation.c_str());
		// fprintf(fp, "[VeriFlow::processCurrentHop] PacketClass: %s\n", packetClass.toString().c_str());

		return;
	}

	graph->links[currentLocation].sort(compareForwardingLink);

	const list< ForwardingLink >& linkList = graph->links[currentLocation];
	list< ForwardingLink >::const_iterator itr = linkList.begin();

	nextHopInfo.nextHop = itr->rule.nextHop;
	nextHopInfo.visited = visited;
	nextHopInfo.visited.insert(currentLocation);
}

bool VeriFlow::verifyRule(const Rule& rule, int command, double& updateTime, double& packetClassSearchTime, double& graphBuildTime, double& queryTime, unsigned long& ecCount, FILE* fp)
{
	updateTime = packetClassSearchTime = graphBuildTime = queryTime = 0;
	ecCount = 0;

	struct timeval start, end;
	double usecTime, seconds, useconds;

	gettimeofday(&start, NULL);
	// May add code in a future version to maintain a cache of forwarding graphs. This cache needs to be updated for every new rule.
	gettimeofday(&end, NULL);

	seconds  = end.tv_sec  - start.tv_sec;
	useconds = end.tv_usec - start.tv_usec;
	usecTime = (seconds * 1000000) + useconds;
	updateTime = usecTime;

	gettimeofday(&start, NULL);
	vector< EquivalenceClass > vFinalPacketClasses;
	vector< vector< Trie* > > vFinalTries;

	bool res = this->getAffectedEquivalenceClasses(rule, command, vFinalPacketClasses, vFinalTries);
	if(res == false)
	{
		return false;
	}
	gettimeofday(&end, NULL);

	seconds  = end.tv_sec  - start.tv_sec;
	useconds = end.tv_usec - start.tv_usec;
	usecTime = (seconds * 1000000) + useconds;
	packetClassSearchTime = usecTime;

	ecCount = vFinalPacketClasses.size();
	if(ecCount == 0)
	{
		fprintf(stderr, "[VeriFlow::verifyRule] Error in rule: %s\n", rule.toString().c_str());
		fprintf(stderr, "[VeriFlow::verifyRule] Error: (ecCount = vFinalPacketClasses.size() = 0). Terminating process.\n");
		exit(1);
	}
	else
	{
		// fprintf(stdout, "\n");
		// fprintf(stdout, "[VeriFlow::verifyRule] ecCount: %lu\n", ecCount);
	}

	// fprintf(stdout, "[VeriFlow::verifyRule] Generating forwarding graphs...\n");
	gettimeofday(&start, NULL);
	vector< ForwardingGraph* > vGraph;
	for(unsigned int i = 0; i < vFinalPacketClasses.size(); i++)
	{
		EquivalenceClass packetClass = vFinalPacketClasses[i];
		// fprintf(stdout, "[VeriFlow::verifyRule] [%u] ecCount: %lu, %s\n", i, ecCount, packetClass.toString().c_str());

		ForwardingGraph* graph = Trie::getForwardingGraph(TP_DST, vFinalTries[i], packetClass, fp);
		vGraph.push_back(graph);
	}
	gettimeofday(&end, NULL);
	// fprintf(stdout, "[VeriFlow::verifyRule] Generated forwarding graphs.\n");

	seconds  = end.tv_sec  - start.tv_sec;
	useconds = end.tv_usec - start.tv_usec;
	usecTime = (seconds * 1000000) + useconds;
	graphBuildTime = usecTime;

	// fprintf(stdout, "[VeriFlow::verifyRule] Running query...\n");
	gettimeofday(&start, NULL);
	// Add query code here
	for(unsigned int i = 0; i < vGraph.size(); i++)
	{
		unordered_set< string > visited;
		this->traverseForwardingGraph(vFinalPacketClasses[i], vGraph[i], rule.location, visited, fp);
	}
	// fprintf(stdout, "[VeriFlow::verifyRule] Query complete.\n");

	if(command == OFPFC_ADD)
	{
		// Do nothing.
	}
	else if(command == OFPFC_DELETE_STRICT)
	{
		Rule dummyRule = rule;
		dummyRule.type = DUMMY;

		this->removeRule(dummyRule);
	}
	gettimeofday(&end, NULL);

	seconds  = end.tv_sec  - start.tv_sec;
	useconds = end.tv_usec - start.tv_usec;
	usecTime = (seconds * 1000000) + useconds;
	queryTime = usecTime;

	for(unsigned int i = 0; i < vGraph.size(); i++)
	{
		delete vGraph[i];
	}

	return true;
}

void VeriFlow::traverseForwardingGraph(const EquivalenceClass& packetClass, ForwardingGraph* graph, const string& currentLocation, unordered_set< string > visited, FILE* fp)
{
	if(graph == NULL)
	{
		/* fprintf(fp, "\n");
		fprintf(fp, "[VeriFlow::traverseForwardingGraph] (graph == NULL) for the following packet class at node %s.\n", currentLocation.c_str());
		fprintf(fp, "[VeriFlow::traverseForwardingGraph] PacketClass: %s\n", packetClass.toString().c_str()); */

		return;
	}

	if(currentLocation.compare("") == 0)
	{
		return;
	}

	if(visited.find(currentLocation) != visited.end())
	{
		// Found a loop.
		fprintf(fp, "\n");
		fprintf(fp, "[VeriFlow::traverseForwardingGraph] Found a LOOP for the following packet class at node %s.\n", currentLocation.c_str());
		fprintf(fp, "[VeriFlow::traverseForwardingGraph] PacketClass: %s\n", packetClass.toString().c_str());

		return;
	}

	visited.insert(currentLocation);

	if(graph->links.find(currentLocation) == graph->links.end())
	{
		// Found a black hole.
		fprintf(fp, "\n");
		fprintf(fp, "[VeriFlow::traverseForwardingGraph] Found a BLACK HOLE for the following packet class as current location (%s) not found in the graph.\n", currentLocation.c_str());
		fprintf(fp, "[VeriFlow::traverseForwardingGraph] PacketClass: %s\n", packetClass.toString().c_str());

		return;
	}

	if(graph->links[currentLocation].empty() == true)
	{
		// Found a black hole.
		fprintf(fp, "\n");
		fprintf(fp, "[VeriFlow::traverseForwardingGraph] Found a BLACK HOLE for the following packet class as there is no outgoing link at current location (%s).\n", currentLocation.c_str());
		fprintf(fp, "[VeriFlow::traverseForwardingGraph] PacketClass: %s\n", packetClass.toString().c_str());

		return;
	}

	graph->links[currentLocation].sort(compareForwardingLink);

	const list< ForwardingLink >& linkList = graph->links[currentLocation];
	list< ForwardingLink >::const_iterator itr = linkList.begin();

	if(itr->isGateway == true)
	{
		// Destination reachable.
		// fprintf(fp, "[VeriFlow::traverseForwardingGraph] Destination reachable.\n");
		fprintf(fp, "\n");
		fprintf(fp, "[VeriFlow::traverseForwardingGraph] The following packet class reached destination at node %s.\n", currentLocation.c_str());
		fprintf(fp, "[VeriFlow::traverseForwardingGraph] PacketClass: %s\n", packetClass.toString().c_str());
	}
	else
	{
		// Move to the next location.
		// fprintf(fp, "[VeriFlow::traverseForwardingGraph] Moving to node %s.\n", itr->rule.nextHop.c_str());

		if(itr->rule.nextHop.compare("") == 0)
		{
			// This rule is a packet filter. It drops packets.
			/* fprintf(fp, "\n");
			fprintf(fp, "[VeriFlow::traverseForwardingGraph] The following packet class is dropped by a packet filter at node %s.\n", currentLocation.c_str());
			fprintf(fp, "[VeriFlow::traverseForwardingGraph] PacketClass: %s\n", packetClass.toString().c_str()); */
		}

		this->traverseForwardingGraph(packetClass, graph, itr->rule.nextHop, visited, fp);
	}
}

int VeriFlow::getTotalRuleCount() const
{
	return this->primaryTrie->getTotalRuleCount();
}

void VeriFlow::print(FILE* fp) const
{
	this->primaryTrie->print(fp);
}

void VeriFlow::setDatapathId(unsigned short socketPort, uint64_t datapathId)
{
	this->socketPortToDatapathIdMap[socketPort] = datapathId;
}

uint64_t VeriFlow::getDatapathId(unsigned short socketPort)
{
	if(this->socketPortToDatapathIdMap.find(socketPort) == this->socketPortToDatapathIdMap.end())
	{
		return 0;
	}
	else
	{
		return this->socketPortToDatapathIdMap[socketPort];
	}
}
