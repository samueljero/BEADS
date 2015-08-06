/*
 * This file is protected by the VeriFlow Research License Agreement
 * available at http://www.cs.illinois.edu/~khurshi1/projects/veriflow/veriflow-research-license-agreement.txt.
 * A copy of this agreement is also included in this package.
 *
 * Copyright (c) 2012-2013 by
 * The Board of Trustees of the University of Illinois.
 * All rights reserved.
 */

#ifndef NET_H_
#define NET_H_

#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

struct sockaddr_in createSocketAddress(const char* ipAddress, unsigned short port);

int createSocket(int socketType);
int bindSocket(int sockfd, const char* ipAddress, unsigned short port);
int listenSocket(int sockfd, int backlog);

char* getIPAddress(const sockaddr_in& addr_in);
char* getIPAddress(unsigned long int ipAddress);

#endif /* NET_H_ */
