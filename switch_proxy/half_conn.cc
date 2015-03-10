/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#include "half_conn.h"

bool HalfConn::sendm(Message m)
{
	if (sock <= 0) {
		return false;
	}
	
	if (send(sock, m.buff, m.len, 0) < 0) {
		dbgprintf(0, "Send Failed: %s\n", strerror(errno));
		return false;
	}

	return true;
}

HalfConn::HalfConn(int fsock, HalfConn *other)
{
	this->sock = fsock;
	this->other = other;
}

HalfConn::HalfConn(struct sockaddr_in *raddr, int rport, HalfConn *other)
{
	this->other = other;
	this->rport = rport;
	memcpy(&this->addr, raddr, sizeof(struct sockaddr_in));
	
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock < 0) {
		dbgprintf(0, "Connection Failed: Could not create socket: %s\n", strerror(errno));
		sock = 0;
		return;
	}

	if (connect(sock, (struct sockaddr*)&addr, sizeof(struct sockaddr_in)) < 0) {
		dbgprintf(0, "Connection Failed: %s\n", strerror(errno));
		close(sock);
		sock = 0;
		return;
	}
}

bool HalfConn::start()
{
	if (sock <= 0 && other == NULL) {
		return false;
	}

	if (pthread_create(&rcv_thread, NULL, thread_run, this) < 0) {
		dbgprintf(0, "Error: Failed to start receive thread!: %s\n", strerror(errno));
		close(sock);
		sock = 0;
		return false;
	}
	
	return true;
}

/* stupid pthreads/C++ glue */
void* HalfConn::thread_run(void* arg)
{
	HalfConn *t = (HalfConn*)arg;
	t->run();
	return NULL;
}

void HalfConn::run()
{
	char *buff;
	int blen;
	int len;
	Message m;

	while(true) {
		if ((len = recv(sock,buff,blen,len,0) < 0) {

		}

	}
}
