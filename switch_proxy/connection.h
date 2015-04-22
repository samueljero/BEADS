/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#ifndef _CONNECTION_H
#define _CONNECTION_H
#include "sw_proxy.h"
#include "half_conn.h"
#include <string>
#include <queue>
using namespace std;

class Queue{
	public:
		Queue(HalfConn *hc){this->hc=hc;}
		void add(Message m){
			hc->sendm(m);
		}
	private:
		HalfConn* hc;
};


class Connection{
	public:
		Connection(int fsock, int lport, int rport, struct sockaddr_in *raddr);
		~Connection(){}
		HalfConn* getBH(){return &bh;}
		HalfConn* getTH(){return &th;}
		bool start();
		void stop();
	private:
		HalfConn bh;
		HalfConn th;
};


#endif
