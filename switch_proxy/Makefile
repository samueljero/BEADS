###############################################################################
# Author: Samuel Jero <sjero@purdue.edu>
###############################################################################
CPP=g++
CC=gcc
CPPFLAGS=-O2 -Wall -Werror -g -I loci/inc
CFLAGS=-O2 -Wall -Werror -g -I loci/inc

BINARIES=sw_proxy
PROXY_SRC=sw_proxy.cc listener.cc connection.cc half_conn.cc
LOCI_SRC=loci/src/*.c


.PHONY: clean

all:
	make $(BINARIES)

clean:
	rm -f $(BINARIES) *.o *~
        
sw_proxy: $(PROXY_SRC) libloci.so
	$(CPP) $(CPPFLAGS) $(PROXY_SRC) -o sw_proxy -lpthread -Wl,-rpath,. -L. -lloci

libloci.so: $(LOCI_SRC)
	$(CC) -fPIC -shared $(CFLAGS) $(LOCI_SRC) -o libloci.so

