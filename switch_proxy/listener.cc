/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#include <list>
#include "listener.h"
using namespace std;

Listener::Listener(int lport, int rport, struct sockaddr_in *addr)
{
	this->lport = lport;
	this->rport = rport;
	memcpy(&this->addr, addr, sizeof(struct sockaddr_in));
}

bool Listener::start()
{
	struct sockaddr_in sin;

	if (sock) {
		/*Already running*/
		return false;
	}

	/* Setup Socket */
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock < 0) {
		dbgprintf(0, "Error: Can't create listen_socket: %s\n",strerror(errno));
		return false;
	}

	memset(&sin, 0, sizeof(sin));
	sin.sin_family = AF_INET;
	sin.sin_addr.s_addr = INADDR_ANY;
	sin.sin_port = htons(lport);
	if (bind(sock, (struct sockaddr *)&sin, sizeof(sin)) < 0 ) {
		dbgprintf(0, "Error: Can't bind listen_socket to port %i: %s\n",lport, strerror(errno));
		return false;
	}

	if (listen(sock, 5) < 0) {
		dbgprintf(0, "Error: Can't listen on listen_socket: %s\n",strerror(errno));
		return false;
	}

	if (pthread_create(&listen_thread, NULL, listen_thread_run, this) < 0) {
		dbgprintf(0, "Error: Failed to start listen thread!: %s\n", strerror(errno));
		close(sock);
		sock = 0;
		return false;
	}

	return true;
}

/* stupid pthreads/C++ glue */
void* Listener::listen_thread_run(void* arg)
{
	Listener *t = (Listener*)arg;
	t->run();
	return NULL;
}

void Listener::run(){
	int new_sock;
	Connection *conn;

	while(true){
		new_sock = accept(sock, NULL, NULL);
		if (new_sock < 0) {
			dbgprintf(0, "Error: Accept() failed!: %s\n", strerror(errno));
			break;
		}

		dbgprintf(1, "New Connection on port: %i\n", lport);
		conn = new Connection(new_sock, rport, &addr);
		connections.push_front(conn);
		if (!conn->start()) {
			dbgprintf(0, "Error starting connection!\n");
		}
	}
}

Listener::~Listener()
{
	close(sock);
	pthread_kill(listen_thread,SIGINT);
}

void Listener::join()
{
	pthread_join(listen_thread,NULL);
}
