/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#ifndef _HALF_CONN_H
#define _HALF_CONN_H
#include "sw_proxy.h"
#include <string>
using namespace std;

class HalfConn{
	public:
		HalfConn(){}
		HalfConn(int fsock, HalfConn *other);
		HalfConn(struct sockaddr_in *raddr, int rport, HalfConn *other);
		~HalfConn(){}
		bool sendm(Message m);
		bool start();
	private:
		static void* thread_run(void* arg);
		void run();
		Message recvMsg();

		HalfConn *other;
		int rport;
		int sock;
		struct sockaddr_in addr;
		pthread_t rcv_thread;
};

#endif
