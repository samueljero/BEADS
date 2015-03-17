/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#ifndef _HALF_CONN_H
#define _HALF_CONN_H
#include "sw_proxy.h"
#include <string>
using namespace std;

enum direction {
	STOC,
	CTOS,
};

class HalfConn{
	public:
		HalfConn(){}
		HalfConn(int fsock, int cid, HalfConn *other);
		HalfConn(int cid, struct sockaddr_in *raddr, int rport, HalfConn *other);
		~HalfConn(){}
		bool sendm(Message m);
		bool start();
		bool stop();
		bool cmd(Message m);
		bool isRunning() {return running;}
		uint64_t getDPID() {return dpid;}
		int getCID() {return cid;}
		enum direction getDIR() {return dir;}

	private:
		static void* thread_run(void* arg);
		void run();
		Message recvMsg();

		HalfConn *other;
		int rport;
		int sock;
		int cid;
		bool running;
		bool joined;
		bool print_messages;
		enum direction dir;
		uint64_t dpid;
		struct sockaddr_in addr;
		pthread_t rcv_thread;
		pthread_mutex_t mutex;
};

#endif
