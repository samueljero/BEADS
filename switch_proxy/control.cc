/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#include <list>
#include <string>
#include "control.h"
#include "listener.h"
using namespace std;

Control::Control(int sock, list<Listener*> *listeners, pthread_mutex_t *listener_mutex)
{
	this->sock = sock;
	this->listeners = listeners;
	this->listener_mutex = listener_mutex;
	this->running = false;
}

bool Control::start()
{
	if (sock <= 0) {
		return false;
	}

	running = true;
	if (pthread_create(&ctl_thread, NULL, thread_run, this) < 0) {
		dbgprintf(0, "Error: Failed to start receive thread!: %s\n", strerror(errno));
		running = false;
		close(sock);
		sock = 0;
		return false;
	}

	if (pthread_detach(ctl_thread) < 0) {
		dbgprintf(0, "Error: Failed to detach receive thread!: %s\n", strerror(errno));
		return false;
	}

	return true;
}

/* stupid pthreads/C++ glue */
void* Control::thread_run(void* arg)
{
	Control *t = (Control*)arg;
	t->run();
	return NULL;
}

void Control::run()
{
	Message m;

	while(running) {
		m = recvMsg();
		if (m.buff == NULL){
			running = false;
			close(sock);
			sock = 0;
			break;
		}
		if (m.len == 1) {
			free(m.buff);
			continue;
		}

		/*Convert to string*/
		memmove(&m.buff[0], &m.buff[1], m.len - 1);
		m.buff[m.len-1] = 0;

		processCmd(m);
		free(m.buff);
	}
}

void Control::processCmd(Message m)
{
		Message nm;
		int controller = 0;
		uint64_t dpid = 0;
		int len = 0;

		dbgprintf(2, "Received Command: %s\n", m.buff);

		if (sscanf(m.buff,"%i,%lu,%n", &controller, &dpid, &len) < 0) {
			dbgprintf(0, "Warning: Invalid command: %s\n", m.buff);
			return;
		}

		if (controller ==0 || dpid == 0 || len == 0) {
			dbgprintf(0, "Warning: Invalid command: %s\n", m.buff);
			return;
		}

		nm.buff = &m.buff[len];
		nm.len = m.len - len;
		dbgprintf(2, "controller: %i, dpid: %lu, cmd:%s\n", controller, dpid, nm.buff);

		pthread_mutex_lock(listener_mutex);
		for	(list<Listener*>::iterator l = listeners->begin(); l != listeners->end(); l++) {
			if ((*l)->getLport() == controller) {
				(*l)->cmd(dpid, nm);
				break;
			}
		}
		pthread_mutex_unlock(listener_mutex);
}

/*First byte indicates length*/
Message Control::recvMsg()
{
	unsigned char hdrbuff[2];
	char *buff;
	int blen;
	int len;
	Message m;

	/* Peak at header */
	len = 0;
	while (len < 2) {
		if ((len = recv(sock,hdrbuff,2,MSG_PEEK)) < 0) {
			dbgprintf(0, "Error: recv() failed: %s\n", strerror(errno));
			m.buff = NULL;
			return m;
		}
		if (len == 0) {
			m.buff = NULL;
			return m;
		}
	}

	/* Determine message length */
	blen = hdrbuff[0];
	m.len = 0;

	buff = m.buff = (char*)malloc(blen);
	if (!buff) {
		dbgprintf(0, "Error: Cannot allocate Memory!\n");
		m.buff = NULL;
		return m;
	}
	
	/* Receive Message */
	while (blen > 0) {
		if ((len = recv(sock,buff,blen,0)) < 0) {
			dbgprintf(0, "Error: recv() failed: %s\n", strerror(errno));
			free(m.buff);
			m.buff = NULL;
			return m;
		}
		if (len == 0) {
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
