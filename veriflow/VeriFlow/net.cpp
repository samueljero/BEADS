/*
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
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include "net.h"

using namespace std;

/* Populates and returns a "sockaddr_in". */
struct sockaddr_in createSocketAddress(const char* ipAddress, unsigned short port)
{
	struct sockaddr_in addr_in;
	memset(&addr_in, 0, sizeof(sockaddr_in));

	addr_in.sin_family = AF_INET;

	if(ipAddress == NULL)
	{
		addr_in.sin_addr.s_addr = htonl(INADDR_ANY);
	}
	else
	{
		addr_in.sin_addr.s_addr = inet_addr(ipAddress);
	}

	addr_in.sin_port = htons(port);

	return addr_in;
}

/* Creates a socket. */
int createSocket(int socketType)
{
	int sockfd = socket(AF_INET, socketType, 0);

	if(sockfd == -1)
	{
		perror("[createSocket] Socket creation failure. Terminating process.\n");
		exit(1);
	}

	return sockfd;
}

/* Binds a socket to a particular IP address and port. */
int bindSocket(int sockfd, const char* ipAddress, unsigned short port)
{
	int res;
	struct sockaddr_in addr_in = createSocketAddress(ipAddress, port);

	res = bind(sockfd, (struct sockaddr *)&addr_in, sizeof(addr_in));

	if(res == -1)
	{
		perror("[bindSocket] Socket bind failure. Terminating process.\n");
		exit(1);
	}

	return res;
}

/* Places a socket into listening mode. */
int listenSocket(int sockfd, int backlog)
{
	int res;

	res = listen(sockfd, backlog);
	if(res == -1)
	{
		perror("[listenSocket] Socket listen failure. Terminating process.\n");
		exit(1);
	}

	return res;
}

char* getIPAddress(const sockaddr_in& addr_in)
{
	return inet_ntoa(addr_in.sin_addr);
}

char* getIPAddress(unsigned long int ipAddress)
{
	struct in_addr addr;
	addr.s_addr = ipAddress;

	return inet_ntoa(addr);
}
