/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#include <list>
#include <stdarg.h>
#include "sw_proxy.h"
#include "listener.h"
#include "control.h"
using namespace std;


#define SWPROXY_VERSION 0.1
#define COPYRIGHT_YEAR 2015

int sw_proxy_debug = 1;

list<Listener*> listeners;
pthread_mutex_t listeners_mutex  = PTHREAD_MUTEX_INITIALIZER;
list<Control*> controls;

void version();
void usage();
void control_loop(int port);
void cleanupControls();


int main(int argc, char** argv)
{
	int ctlport = 3333;
	pthread_mutex_init(&listeners_mutex, NULL);

	/*parse commandline options*/
	if (argc == 1) {
		usage();
	}

	/*loop through commandline options*/
	for (int i = 1; i < argc; i++) {
		if (strcmp(argv[i], "-V") == 0) { /* -V */
			version();
		} else if (strcmp(argv[i], "-h") == 0) { /*-h*/
			usage();
		} else if (strcmp(argv[i], "-v") == 0) { /*-v*/
			sw_proxy_debug++;
		} else if (strcmp(argv[i], "-p") == 0) { /*-p*/
			i++;
			ctlport = atoi(argv[i]);
			if ( ctlport <= 0 || ctlport > 65535) {
				dbgprintf(0, "Error parsing control port: %s\n", argv[i]);
				usage();
			}
		} else if (argv[i][0] == '-' && argv[i][1] == 'c'){ /*-c*/
			i++;
			/* Parse Line */
			int lport = 0;
			int rport = 0;
			char *sip = NULL;
			sscanf(argv[i], "%i:%m[^:]:%i",&lport, &sip, &rport);
			if (!lport || !rport || !sip){
				dbgprintf(0,"Error parsing controller description: %s\n", argv[i]);
				usage();
			}

			/* Parse IP */
			struct sockaddr_in addr;
			struct addrinfo hints;
			struct addrinfo *results, *p;
			int found;
			int ret;
			memset(&hints, 0, sizeof(struct addrinfo));
			hints.ai_family = AF_INET;
			if ((ret = getaddrinfo(sip, NULL, &hints, &results)) < 0) {
				dbgprintf(0, "Error parsing controller description: %s\n", gai_strerror(ret));
				usage();
			}
			found = 0;
			for (p = results; p!=NULL; p = p->ai_next) {
				memcpy(&addr, p->ai_addr, sizeof(struct sockaddr_in));
				found = 1;
				break;
			}
			if (found == 0) {
				dbgprintf(0, "Error parsing controller description: No IP addresses found\n");
				usage();
			}
			addr.sin_port = htons(rport);

			/* Create Listener */
			Listener* l = new Listener(lport,rport,&addr);
			pthread_mutex_lock(&listeners_mutex);
			listeners.push_front(l);
			pthread_mutex_unlock(&listeners_mutex);
			if (!l->start()) {
				dbgprintf(0, "Error starting Listeners!\n");
				exit(1);
			}
		}else{
			usage();
		}
	}

	control_loop(ctlport);
}

void control_loop(int port)
{
	struct sockaddr_in sin;
	int sock;
	int new_sock;
	Control *ctl;

	/* Setup Socket */
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock < 0) {
		dbgprintf(0, "Error: Can't create control_socket: %s\n",strerror(errno));
		return;
	}

	memset(&sin, 0, sizeof(sin));
	sin.sin_family = AF_INET;
	sin.sin_addr.s_addr = INADDR_ANY;
	sin.sin_port = htons(port);
	if (bind(sock, (struct sockaddr *)&sin, sizeof(sin)) < 0 ) {
		dbgprintf(0, "Error: Can't bind control_socket to port %i: %s\n",port, strerror(errno));
		return;
	}

	if (listen(sock, 5) < 0) {
		dbgprintf(0, "Error: Can't listen on control_socket: %s\n",strerror(errno));
		return;
	}

	while(true){
		new_sock = accept(sock, NULL, NULL);
		if (new_sock < 0) {
			dbgprintf(0, "Error: Accept() failed!: %s\n", strerror(errno));
			break;
		}

		dbgprintf(1, "New Control Connection\n");
		
		ctl = new Control(new_sock);
		ctl->start();
		controls.push_front(ctl);

		cleanupControls();
	}
}

void cleanupControls()
{
	for (list<Control*>::iterator it = controls.begin(); it != controls.end(); it++) {
		if( !(*it)->isRunning()) {
			delete *it;
			controls.erase(it);
			it = controls.begin();
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
	dbgprintf(0,"Usage: sw_proxy [-v] [-V] [-h] [-c local_port:remote_ip:remote_port] [-p control_port]\n");
	dbgprintf(0, "          -v   verbose. May be repeated for additional verbosity.\n");
	dbgprintf(0, "          -V   Version information\n");
	dbgprintf(0, "          -h   Help\n");
	exit(0);
}

/*Debug Printf*/
void dbgprintf(int level, const char *fmt, ...)
{
    va_list args;
    if (sw_proxy_debug >= level) {
    	va_start(args, fmt);
    	vfprintf(stderr, fmt, args);
    	va_end(args);
    }
}
