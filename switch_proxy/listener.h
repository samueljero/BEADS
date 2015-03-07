/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#ifndef _LISTENER_H
#define _LISTENER_H
#include "sw_proxy.h"
#include <string>
using namespace std;

class Listener{
	public:
		Listener(int lport, int rport, struct sockaddr_in *addr){}
		~Listener(){}
	private:
		int ctl_num;
		int port;
		struct sockaddr_in addr;
};

#endif
