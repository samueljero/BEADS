/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#include <cstdlib>
#include <list>
#include <stdarg.h>
#include <cstdio>
#include <cstring>
#include "sw_proxy.h"
#include "listener.h"
using namespace std;


#define SWPROXY_VERSION 0.1
#define COPYRIGHT_YEAR 2015

int debug = 0;
list<Listener*> listeners;

void version();
void usage();


int main(int argc, char** argv)
{
	/*parse commandline options*/
	if (argc == 0) {
		usage();
	}

	/*loop through commandline options*/
	for (int i = 1; i < argc; i++) {
		if (strcmp(argv[i], "-V") == 0) { /* -V */
			version();
		} else if (strcmp(argv[i], "-h") == 0) { /*-h*/
			usage();
		} else if (strcmp(argv[i], "-v") == 0) { /*-v*/
			debug++;
		} else if (argv[i][0] == '-' && argv[i][1] == 'c'){ /*-c*/
			i++;
			/* Parse Line */
			int lport = 0;
			int rport = 0;
			char *sip = NULL;
			sscanf(argv[i], "%i:%ms:%i",&lport, &sip, &rport);
			if (!lport || !rport || !sip){
				dbgprintf(0,"Error parsing controller description: %s\n", argv[i]);
				usage();
			}
			int ip;
			/* Parse IP */

			/* Create Listener */
			Listener* l = new Listener(lport,rport,ip);
			listeners.push_front(l);
		}else{
			usage();
		}
	}
}

void version()
{
	dbgprintf(0, "sw_proxy version %.1f\n",SWPROXY_VERSION);
	dbgprintf(0, "Copyright (C) %i Samuel Jero <sjero@purdue.edu>\n",COPYRIGHT_YEAR);
	//dbgprintf(0, "This program comes with ABSOLUTELY NO WARRANTY.\n");
	//dbgprintf(0, "This is free software, and you are welcome to\n");
	//dbgprintf(0, "redistribute it under certain conditions.\n");
	exit(0);
}

/*Usage information for program*/
void usage()
{
	dbgprintf(0,"Usage: sw_proxy [-v] [-V] [-h] [-c local_port:remote_ip:remote_port]\n");
	dbgprintf(0, "          -v   verbose. May be repeated for additional verbosity.\n");
	dbgprintf(0, "          -V   Version information\n");
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
