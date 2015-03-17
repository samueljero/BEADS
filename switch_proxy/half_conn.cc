/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#include "half_conn.h"
extern "C" {
#include <loci/loci.h>
#include <loci/of_object.h>
#include <loci/loci_obj_dump.h>
}
#include <stdarg.h>

pthread_mutex_t ofo_print_serialization_mutex = PTHREAD_MUTEX_INITIALIZER;

bool HalfConn::sendm(Message m)
{
	int len;
	if (sock <= 0) {
		return false;
	}
	
	if ((len = send(sock, m.buff, m.len, MSG_NOSIGNAL)) < 0) {
		dbgprintf(0, "Send Failed: %s\n", strerror(errno));
		stop();
		return false;
	}

	return true;
}

HalfConn::HalfConn(int fsock, int cid, HalfConn *other)
{
	this->sock = fsock;
	this->other = other;
	this->dpid = DPID_MAX;
	this->dir = STOC;
	this->cid = cid;
	this->print_messages = false;
	pthread_mutex_init(&mutex, NULL);
}

HalfConn::HalfConn(int cid, struct sockaddr_in *raddr, int rport, HalfConn *other)
{
	this->other = other;
	this->rport = rport;
	this->sock = 0;
	this->dpid = DPID_MAX;
	this->dir = CTOS;
	this->cid = cid;
	this->print_messages = false;
	memcpy(&this->addr, raddr, sizeof(struct sockaddr_in));
	pthread_mutex_init(&mutex, NULL);
}

bool HalfConn::start()
{
	if (other == NULL) {
		return false;
	}

	if (sock == 0) {
		sock = socket(AF_INET, SOCK_STREAM, 0);
		if (sock < 0) {
			dbgprintf(0, "Connection Failed: Could not create socket: %s\n", strerror(errno));
			sock = 0;
			return false;
		}

		if (connect(sock, (struct sockaddr*)&addr, sizeof(struct sockaddr_in)) < 0) {
			dbgprintf(0, "Connection Failed: %s\n", strerror(errno));
			close(sock);
			sock = 0;
			return false;
		}
	}
	
	running = true;
	if (pthread_create(&rcv_thread, NULL, thread_run, this) < 0) {
		dbgprintf(0, "Error: Failed to start receive thread!: %s\n", strerror(errno));
		close(sock);
		sock = 0;
		running = false;
		return false;
	}

	if (pthread_detach(rcv_thread) < 0) {
		dbgprintf(0, "Error: Failed to detach receive thread!: %s\n", strerror(errno));
	}
	
	return true;
}

bool HalfConn::stop()
{
	if (running && sock > 0) {
		running = false;
		close(sock);
		sock = 0;
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

int writer(void *cookie, const char *fmt, ...)
{
    va_list args;
	va_start(args, fmt);
	int ret = vfprintf(stderr, fmt, args);
	va_end(args);
	return ret;
}

void HalfConn::run()
{
	Message m;

	while (running) {
		m = recvMsg();
		if (m.buff == NULL){
			running = false;
			if (other->isRunning()) {
				other->stop();
			}
			break;
		}

		pthread_mutex_lock(&mutex);

		of_message_t msg = OF_BUFFER_TO_MESSAGE(m.buff);
		of_object_t *ofo = of_object_new_from_message(msg, m.len);
		if (dpid == DPID_MAX && ofo->object_id == OF_FEATURES_REPLY) {
			of_features_reply_datapath_id_get(ofo, &dpid);
		}
		if (sw_proxy_debug > 2 || print_messages) {
			pthread_mutex_lock(&ofo_print_serialization_mutex);
			if (dir == STOC) {
				dbgprintf(0,"##################\nGot Message (s %llu -> c %i)\n", dpid, other->getCID());
			}else {
				dbgprintf(0,"##################\nGot Message (c %i -> s %llu)\n", cid, other->getDPID());
			}
			of_object_dump((loci_writer_f)&writer,NULL,ofo);
			dbgprintf(0,"##################\n");
			pthread_mutex_unlock(&ofo_print_serialization_mutex);
		}

		pthread_mutex_unlock(&mutex);

		/* Send message */
		if(!other->sendm(m)) {
			stop();
			of_object_delete(ofo);
			break;
		}
		of_object_delete(ofo);
	}
}


Message HalfConn::recvMsg()
{
	char hdrbuff[32];
	char *buff;
	int blen;
	int len;
	Message m;
	struct ofp_header *hdr;

	/* Peak at header */
	len = 0;
	while (len < 4) {
		if ((len = recv(sock,hdrbuff,32,MSG_PEEK)) < 0) {
			if (running) {
				dbgprintf(0, "Error: recv() failed: %s\n", strerror(errno));
				stop();
			}
			m.buff = NULL;
			return m;
		}
		if (len == 0) {
			stop();
			m.buff = NULL;
			return m;
		}
	}

	/* Determine message length */
	hdr = (struct ofp_header*)hdrbuff;
	blen = ntohs(hdr->length);
	m.len = 0;

	buff = m.buff = (char*)malloc(blen);
	if (!buff) {
		dbgprintf(0, "Error: Cannot allocate Memory!\n");
		stop();
		m.buff = NULL;
		return m;
	}
	
	/* Receive Message */
	while (blen > 0) {
		if ((len = recv(sock,buff,blen,0)) < 0) {
			if (running) {
				dbgprintf(0, "Error: recv() failed: %s\n", strerror(errno));
				stop();
			}
			free(m.buff);
			m.buff = NULL;
			return m;
		}
		if (len == 0) {
			stop();
			free(m.buff);
			m.buff = NULL;
			return m;
		}

		buff += len;
		m.len += len;
		blen -= len;
	}

	return m;
}

bool HalfConn::cmd(Message m)
{
	pthread_mutex_lock(&mutex);
	if (strcmp(m.buff, "print,on")==0) {
		print_messages = true;
	} else if (strcmp(m.buff, "print,off")==0) {
		print_messages = false;
	} else {
		dbgprintf(0, "Warning: unknown command: %s\n", m.buff);
	}
	pthread_mutex_unlock(&mutex);
	return true;
}
