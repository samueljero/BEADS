###############################################################################
# Author: Samuel Jero <sjero@purdue.edu>
###############################################################################
CPP=g++
CC=gcc
CPPFLAGS=-O2 -Wall -Werror -g -I loci/inc
CFLAGS=-O2 -Wall -Werror -g -I loci/inc

BINARIES=sw_proxy sndcmd
PROXY_SRC=sw_proxy.cc listener.cc connection.cc half_conn.cc control.cc
LOCI_SRC=loci/src/*.c
SNDCMD_SRC=sndcmd.cc


.PHONY: clean

all:
	make $(BINARIES)

clean:
	rm -f $(BINARIES) *.o *~
        
sw_proxy: $(PROXY_SRC) libloci.so
	$(CPP) $(CPPFLAGS) $(PROXY_SRC) -o sw_proxy -lpthread -Wl,-rpath,. -L. -lloci

sndcmd: $(SNDCMD_SRC)
	$(CPP) $(CPPFLAGS) $(SNDCMD_SRC) -o sndcmd

libloci.so: $(LOCI_SRC)
	$(CC) -fPIC -shared $(CFLAGS) $(LOCI_SRC) -o libloci.so

