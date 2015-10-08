/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#include "half_conn.h"
#include "attacker.h"
extern "C" {
#include <loci/loci.h>
#include <loci/of_object.h>
}



bool HalfConn::sendm(Message m)
{
	int len;
	if (sock <= 0) {
		return false;
	}
	
	if ((len = send(sock, m.buff, m.len, MSG_NOSIGNAL)) < 0) {
		dbgprintf(0, "Send Failed: %s\n", strerror(errno));
		_stop();
		return false;
	}

	return true;
}

bool HalfConn::sendm(of_object_t *ofo)
{
	of_message_t msg;
	Message m;

	msg = OF_OBJECT_TO_MESSAGE(ofo);
	m.buff = (char*)OF_MESSAGE_TO_BUFFER(msg);
	m.len = of_message_length_get(msg);

	return sendm(m);
}

HalfConn::HalfConn() {
	this->sock = 0;
	this->other = NULL;
	this->dpid = DPID_MAX;
	this->dir = STOC;
	this->cid = 0;
	this->print_messages = false;
	this->rcv_thread_running = false;
	this->rcv_thread_cleanup = false;
	this->q_thread_running = false;
	this->q_thread_cleanup = false;
	this->running = false;
	this->rport = 0;
	pthread_mutex_init(&this->q_mutex, NULL);
	pthread_mutex_init(&this->timeout_mutex, NULL);
}

HalfConn::HalfConn(int fsock, int cid, HalfConn *other)
{
	this->sock = fsock;
	this->other = other;
	this->dpid = DPID_MAX;
	this->dir = STOC;
	this->cid = cid;
	this->print_messages = false;
	this->rcv_thread_running = false;
	this->rcv_thread_cleanup = false;
	this->q_thread_running = false;
	this->q_thread_cleanup = false;
	this->running = false;
	this->rport = 0;
	pthread_mutex_init(&this->q_mutex, NULL);
	pthread_mutex_init(&this->timeout_mutex, NULL);
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
	this->rcv_thread_running = false;
	this->rcv_thread_cleanup = false;
	this->q_thread_running = false;
	this->q_thread_cleanup = false;
	this->running = false;
	memcpy(&this->addr, raddr, sizeof(struct sockaddr_in));
	pthread_mutex_init(&this->q_mutex, NULL);
	pthread_mutex_init(&this->timeout_mutex, NULL);
}

HalfConn::~HalfConn()
{
	stop();
	pthread_mutex_destroy(&this->q_mutex);
	pthread_mutex_destroy(&this->timeout_mutex);
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
	if (pthread_create(&rcv_thread, NULL, rcv_thread_run, this) < 0) {
		dbgprintf(0, "Error: Failed to start receive thread!: %s\n", strerror(errno));
		close(sock);
		sock = 0;
		running = false;
		return false;
	}
	rcv_thread_running = true;
	rcv_thread_cleanup =true;

	if (pthread_create(&q_thread, NULL, queue_thread_run, this) < 0) {
		dbgprintf(0, "Error: Failed to start queue thread!: %s\n", strerror(errno));
		close(sock);
		sock = 0;
		running = false;
		return false;
	}
	q_thread_running = true;
	q_thread_cleanup = true;

	return true;
}

bool HalfConn::stop()
{
	_stop();

	if (rcv_thread_cleanup) {
		rcv_thread_cleanup = false;
		pthread_join(rcv_thread, NULL);

	}

	if (q_thread_cleanup) {
		q_thread_cleanup = false;
		pthread_join(q_thread, NULL);
	}
	return true;
}

bool HalfConn::_stop()
{
	if (running) {
			running = false;
	}
	if (sock > 0) {
		close(sock);
		sock = 0;
	}

	/* Unlocking an unlocked mutex is undefined.
	 * Do this instead. */
	if (pthread_mutex_trylock(&timeout_mutex)) {
		pthread_mutex_unlock(&timeout_mutex);
	} else {
		pthread_mutex_unlock(&timeout_mutex);
	}

	return true;
}

/* stupid pthreads/C++ glue */
void* HalfConn::rcv_thread_run(void* arg)
{
	HalfConn *t = (HalfConn*)arg;
	t->rcv_run();
	t->rcv_thread_running = false;
	return NULL;
}

struct ofp_header{
	uint8_t version;
	uint8_t type;
	uint16_t length;
};

void HalfConn::rcv_run()
{
	Message m;
	pkt_info pk;

	while (running) {
		m = recvMsg();
		if (m.buff == NULL){
			running = false;
			if (other->isRunning()) {
				other->stop();
			}
			break;
		}

		/* Buffer to of_object */
		of_message_t msg = OF_BUFFER_TO_MESSAGE(m.buff);
		of_object_t *ofo = of_object_new_from_message(msg, m.len);
		if (dpid == DPID_MAX && ofo->object_id == OF_FEATURES_REPLY) {
			of_features_reply_datapath_id_get(ofo, &dpid);
			other->dpid = dpid;
		}

		pk.ofo = ofo;
		pk.dir = this->dir;
		pk.cid = cid;
		pk.dpid = dpid;
		pk.rcv = this;
		pk.snd = this->other;
		pk = Attacker::get().doAttack(pk);

		if (pk.ofo == NULL) {
			/* No message to send */
			continue;
		}

		/* Send message */
		if(!other->sendm(pk.ofo)) {
			_stop();
			of_object_delete(pk.ofo);
			break;
		}
		of_object_delete(pk.ofo);
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
				_stop();
			}
			m.buff = NULL;
			return m;
		}
		if (len == 0) {
			_stop();
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
		_stop();
		m.buff = NULL;
		return m;
	}
	
	/* Receive Message */
	while (blen > 0) {
		if ((len = recv(sock,buff,blen,0)) < 0) {
			if (running) {
				dbgprintf(0, "Error: recv() failed: %s\n", strerror(errno));
				_stop();
			}
			free(m.buff);
			m.buff = NULL;
			return m;
		}
		if (len == 0) {
			_stop();
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

/* stupid pthreads/C++ glue */
void* HalfConn::queue_thread_run(void *arg)
{
	HalfConn *t = (HalfConn*)arg;
	t->queue_run();
	t->q_thread_running = false;
	return NULL;
}

void HalfConn::queue_run()
{
	pkt_info pk;
	int val;

	/* Mutex used only to sleep on */
	pthread_mutex_lock(&timeout_mutex);

	while (running) {
		/* Look at next packet */
		pthread_mutex_lock(&q_mutex);
		if (q.empty()) {
			pthread_mutex_unlock(&q_mutex);
			pthread_mutex_lock(&timeout_mutex); /* Sleep until packets available */
			continue;
		}
		pk = q.top();
		pthread_mutex_unlock(&q_mutex);

		/* Sleep */
		val = pthread_mutex_timedlock(&timeout_mutex, &pk.del);
		if (val != ETIMEDOUT) {
			continue;
		}

		/* Send next packet */
		pthread_mutex_lock(&q_mutex);
		if (pk != q.top()) {
			/* Packet changed! */
			pthread_mutex_unlock(&q_mutex);
			continue;
		}
		q.pop();
		for(int i=0; i < pk.dups; i++) {
			sendm(pk.ofo);
		}
		of_object_delete(pk.ofo);
		pthread_mutex_unlock(&q_mutex);
	}
}


bool HalfConn::sendat(of_object_t *ofo, struct timespec *time, int num)
{
	pkt_info pk;

	pk.ofo = ofo;
	memcpy(&pk.del, time, sizeof(struct timespec));
	pk.cid = cid;
	pk.dpid = dpid;
	pk.rcv = other;
	pk.snd = this;
	pk.dups = num;

	pthread_mutex_lock(&q_mutex);
	q.push(pk);
	/* Unlocking an unlocked mutex is undefined.
	 * Do this instead. */
	if (pthread_mutex_trylock(&timeout_mutex)) {
		pthread_mutex_unlock(&timeout_mutex);
	} else {
		pthread_mutex_unlock(&timeout_mutex);
	}
	pthread_mutex_unlock(&q_mutex);

	return true;
}
