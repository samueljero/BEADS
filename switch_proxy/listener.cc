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
	this->sock = 0;
	memcpy(&this->addr, addr, sizeof(struct sockaddr_in));
	pthread_mutex_init(&mutex, NULL);
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

	int so_reuseaddr = 1;
	if (setsockopt(sock, SOL_SOCKET,SO_REUSEADDR, &so_reuseaddr, sizeof(so_reuseaddr))< 0){
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
		conn = new Connection(new_sock, lport, rport, &addr);
		if (!conn) {
			dbgprintf(0, "Error: Cannot allocate new connection!\n");
			break;
		}
		if (!conn->start()) {
			dbgprintf(0, "Error starting connection!\n");
		}

		cleanupConnections();

		pthread_mutex_lock(&mutex);
		connections.push_back(conn);
		pthread_mutex_unlock(&mutex);
	}
}

void Listener::cleanupConnections()
{
	pthread_mutex_lock(&mutex);
	for (list<Connection*>::iterator it = connections.begin(); it != connections.end(); it++) {
		if( !(*it)->isRunning()) {
			(*it)->stop();
			delete *it;
			connections.erase(it);
			it = connections.begin();
		}
	}
	pthread_mutex_unlock(&mutex);
}

Listener::~Listener()
{
	close(sock);
}

void Listener::join()
{
	pthread_join(listen_thread,NULL);
}

int Listener::numConnections()
{
	int ret = 0;
	pthread_mutex_lock(&mutex);
	for (list<Connection*>::iterator it = connections.begin(); it != connections.end(); it++) {
		if( (*it)->isRunning()) {
			ret++;

		}
	}
	pthread_mutex_unlock(&mutex);
	return ret;
}
Connection* Listener::getConnection(int i)
{
	Connection *ret = NULL;
	int j = 0;
	pthread_mutex_lock(&mutex);
	for (list<Connection*>::iterator it = connections.begin(); it != connections.end(); it++) {
		if( (*it)->isRunning()) {
			if (j == i) {
				ret = (*it);
				break;
			}
			j++;

		}
	}
	pthread_mutex_unlock(&mutex);
	return ret;
}
