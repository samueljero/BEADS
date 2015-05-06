/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#ifndef _HALF_CONN_H
#define _HALF_CONN_H
#include "sw_proxy.h"
#include <string>
extern "C" {
#include <loci/loci.h>
}
using namespace std;

enum direction {
	STOC,
	CTOS,
};

class HalfConn{
	public:
		HalfConn();
		HalfConn(int fsock, int cid, HalfConn *other);
		HalfConn(int cid, struct sockaddr_in *raddr, int rport, HalfConn *other);
		~HalfConn(){}
		bool sendm(Message m);
		bool sendm(of_object_t* ofo);
		bool start();
		bool stop();
		bool isRunning() {return running || rcv_thread_running;}
		uint64_t getDPID() {return dpid;}
		int getCID() {return cid;}
		enum direction getDIR() {return dir;}
		HalfConn*	getOther() {return other;}

	private:
		static void* rcv_thread_run(void* arg);
		void rcv_run();
		bool _stop();
		Message recvMsg();

		HalfConn *other;
		int rport;
		int sock;
		int cid;
		bool running;
		bool rcv_thread_running;
		bool print_messages;
		enum direction dir;
		uint64_t dpid;
		struct sockaddr_in addr;
		pthread_t rcv_thread;
};

class pkt_info {
	public:
		of_object_t* ofo;
		int	cid;
		uint64_t dpid;
		enum direction dir;
		HalfConn *rcv;
		HalfConn *snd;
};

#endif
