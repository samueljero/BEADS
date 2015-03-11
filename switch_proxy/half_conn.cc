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

struct ofp_header{
	uint8_t version;
	uint8_t type;
	uint16_t length;
};

void HalfConn::run()
{
	char *buff;
	int blen;
	int len;
	int mlen;
	Message m;
	struct ofp_header *hdr;

	while (true) {
		mlen = blen = 65535;
		m.len = 0;
		buff = m.buff = (char*)malloc(blen);
		if (!buff) {
			dbgprintf(0, "Error: Cannot allocate Memory!\n");
			close(sock);
			sock = 0;
			return;
		}
		
		/* Receive Message */
		while (mlen > m.len) {
			if ((len = recv(sock,buff,blen,0)) < 0) {
				dbgprintf(0, "Error: recv() failed: %s\n", strerror(errno));
				close(sock);
				sock = 0;
				return;
			}

			if (m.len < 4 && len >= 4) { /* find the length in the OpenFlow header */
				hdr = (struct ofp_header*)m.buff;
				mlen = ntohs(hdr->length);
			}
			buff += len;
			m.len += len;
			blen -= len;
		}

		/* Send message */
		other->sendm(m);
		free(m.buff);
	}
}
