/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#include <list>
#include <string>
#include "control.h"
#include "listener.h"
#include "attacker.h"
using namespace std;

Control::Control(int sock)
{
	this->sock = sock;
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

		Attacker::get().addCommand(m);

		free(m.buff);
	}
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
