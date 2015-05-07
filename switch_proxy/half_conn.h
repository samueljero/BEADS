/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#ifndef _HALF_CONN_H
#define _HALF_CONN_H
#include "sw_proxy.h"
#include <string>
#include <queue>
extern "C" {
#include <loci/loci.h>
}
using namespace std;

enum direction {
	STOC,
	CTOS,
};

class HalfConn;

class pkt_info {
	public:
		of_object_t* ofo;
		int	cid;
		uint64_t dpid;
		enum direction dir;
		HalfConn *rcv;
		HalfConn *snd;
		struct timespec del;
		int dups;

		bool operator!=(const pkt_info &other) const {
			return ofo != other.ofo || cid != other.cid ||
					dpid != other.dpid || dir != other.dir ||
					rcv != other.rcv || snd != other.snd ||
					del.tv_sec != other.del.tv_sec ||
					del.tv_nsec != other.del.tv_nsec;
		}

		bool operator<(const pkt_info &other) const {
			/* Intentionally backwards!!!! */
			if (this->del.tv_sec > other.del.tv_sec) {
				return true;
			} else if (this->del.tv_sec == other.del.tv_sec) {
				if (this->del.tv_nsec > other.del.tv_nsec) {
					return true;
				}
			}
			return false;
		}
};

class HalfConn{
	public:
		HalfConn();
		HalfConn(int fsock, int cid, HalfConn *other);
		HalfConn(int cid, struct sockaddr_in *raddr, int rport, HalfConn *other);
		~HalfConn();
		bool sendm(Message m);
		bool sendm(of_object_t* ofo);
		bool sendat(of_object_t *ofo, timespec *time, int num);
		bool start();
		bool stop();
		bool isRunning() {return running || rcv_thread_running || q_thread_running;}
		uint64_t getDPID() {return dpid;}
		int getCID() {return cid;}
		enum direction getDIR() {return dir;}
		HalfConn*	getOther() {return other;}

	private:
		static void* rcv_thread_run(void* arg);
		static void* queue_thread_run(void *arg);
		void rcv_run();
		void queue_run();
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
		priority_queue<pkt_info> q;
		pthread_mutex_t q_mutex;
		pthread_mutex_t timeout_mutex;
		pthread_t q_thread;
		bool q_thread_running;
};

#endif
