/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#include <cstdlib>
#include <stdarg.h>
#include <cstdio>
#include <cstring>
#include <unistd.h>
#include <signal.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <errno.h>
#include <netdb.h>
#include <ifaddrs.h>

#define SNDCMD_VERSION 0.1
#define COPYRIGHT_YEAR 2015

int debug = 0;

void version();
void usage();
void dbgprintf(int level, const char *fmt, ...);

char *default_host = (char*)"localhost";

int main(int argc, char** argv)
{
	int port = 3333;
	char *host = NULL;
	char *cmd = NULL;

	/*loop through commandline options*/
	for (int i = 1; i < argc; i++) {
		if (strcmp(argv[i], "-V") == 0) { /* -V */
			version();
		} else if (strcmp(argv[i], "-h") == 0) { /*-h*/
			usage();
		} else if (strcmp(argv[i], "-p") == 0) { /*-p*/
			i++;
			port = atoi(argv[i]);
			if ( port <= 0 || port > 65535) {
				dbgprintf(0, "Error parsing port: %s\n", argv[i]);
				usage();
			}
		} else if (argv[i][0] != '-'){ /* default arg */
			if (host) {
				cmd = argv[i];
			} else { 
				host = argv[i];
			}
		}else{
			usage();
		}
	}

	if (!host) {
		host = default_host;
	}

	/* Parse Host */
	struct sockaddr_in addr;
	struct addrinfo hints;
	struct addrinfo *results, *p;
	int found;
	int ret;
	memset(&hints, 0, sizeof(struct addrinfo));
	hints.ai_family = AF_INET;
	if ((ret = getaddrinfo(host, NULL, &hints, &results)) < 0) {
		dbgprintf(0, "Error parsing host: %s\n", gai_strerror(ret));
		usage();
	}
	found = 0;
	for (p = results; p!=NULL; p = p->ai_next) {
		memcpy(&addr, p->ai_addr, sizeof(struct sockaddr_in));
		found = 1;
		break;
	}
	if (found == 0) {
		dbgprintf(0, "Error parsing host: No IP addresses found\n");
		usage();
	}
	addr.sin_port = htons(port);

	/* Connect */
	int sock;
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock < 0) {
		dbgprintf(0, "Connection Failed: Could not create socket: %s\n", strerror(errno));
		return -1;
	}

	if (connect(sock, (struct sockaddr*)&addr, sizeof(struct sockaddr_in)) < 0) {
		dbgprintf(0, "Connection Failed: %s\n", strerror(errno));
		return -1;
	}

	/* Send Command */
	char buff[256];
	int len;
	if (cmd) {
		/* Command specified on commandline*/
		buff[0] = len = strlen(cmd) + 1;
		strncpy(&buff[1],cmd,255);
		send(sock,buff,len,0);
	} else {
		/* Read from stdin */
		while((len = read(STDIN_FILENO, &buff[1], 255)) > 0) {
			buff[0]=len;
			send(sock,buff,len,0);
		}
	}

	/* Close Socket */
	close(sock);

	return 0;
}


void version()
{
	dbgprintf(0, "sndcmd version %.1f\n",SNDCMD_VERSION);
	dbgprintf(0, "Copyright (C) %i Samuel Jero <sjero@purdue.edu>\n",COPYRIGHT_YEAR);
	//dbgprintf(0, "This program comes with ABSOLUTELY NO WARRANTY.\n");
	//dbgprintf(0, "This is free software, and you are welcome to\n");
	//dbgprintf(0, "redistribute it under certain conditions.\n");
	exit(0);
}

/*Usage information for program*/
void usage()
{
	dbgprintf(0,"Usage: sndcmd [-V] [-h] [-p control_port] [host] [cmd]\n");
	//dbgprintf(0, "          -v   verbose. May be repeated for additional verbosity.\n");
	dbgprintf(0, "          -V   Version information\n");
	dbgprintf(0, "          -p   Connect to proxy on this port");
	dbgprintf(0, "          -h   Help\n");
	exit(0);
}

/*Debug Printf*/
void dbgprintf(int level, const char *fmt, ...)
{
    va_list args;
    if (debug >= level) {
    	va_start(args, fmt);
    	vfprintf(stderr, fmt, args);
    	va_end(args);
    }
}
