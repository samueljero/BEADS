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
	Message resp;

	while(running) {
		m = recvMsg();
		if (m.buff == NULL){
			running = false;
			close(sock);
			sock = 0;
			break;
		}
		if (m.len <= 2) {
			free(m.buff);
			continue;
		}
		resp.buff = NULL;
		resp.len = 0;

		/*Convert to string*/
		memmove(&m.buff[0], &m.buff[2], m.len - 2);
		m.buff[m.len-2] = 0;

		Attacker::get().addCommand(m, &resp);

		/* Send response, if any */
		if (resp.buff != NULL){
			sendMsg(resp);
			free(resp.buff);
		}

		free(m.buff);
	}
}

/*First byte indicates length*/
Message Control::recvMsg()
{
	char hdrbuff[4];
	char *buff;
	int blen;
	int len;
	uint16_t len16;
	Message m;

	/* Peak at header */
	len = 0;
	while (len < 3) {
		if ((len = recv(sock,hdrbuff,3,MSG_PEEK)) < 0) {
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
	memcpy(&len16, hdrbuff,2);
	blen = ntohs(len16);
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

bool Control::sendMsg(Message m)
{
	char *buff;
	int len;
	uint16_t len16;
	int ret;

	if (sock <= 0) {
		return false;
	}

	if (m.len > 65533) {
		return false;
	}

	buff = (char*)malloc(m.len + 2);
	if (!buff) {
		dbgprintf(0, "Error: Cannot allocate Memory!\n");
		return false;
	}

	len = m.len + 2;
	len16 = htons(len);
	memcpy(&buff[0], (char*)&len16, 2);
	memcpy(&buff[2], m.buff, m.len);
	ret = send(sock,buff,len,0);
	if (ret < 0) {
		dbgprintf(0, "Error: send() failed: %s\n", strerror(errno));
		free(buff);
		return false;
	}

	free(buff);
	return true;
}
