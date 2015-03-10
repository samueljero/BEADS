/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#include "connection.h"

Connection::Connection(int fsock, int rport, struct sockaddr_in *raddr)
{
	bh = HalfConn(fsock, &th);
	th = HalfConn(raddr, rport, &bh);
}

bool Connection::start()
{
	return bh.start() && th.start();
}
