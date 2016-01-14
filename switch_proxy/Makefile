###############################################################################
# Author: Samuel Jero <sjero@purdue.edu>
###############################################################################
CPP=g++
CC=gcc
CPPFLAGS=-O2 -Wall -Werror -g -I loci/inc
CFLAGS=-O2 -Wall -Werror -g -I loci/inc

BINARIES=sw_proxy sndcmd
PROXY_HEADERS=sw_proxy.h listener.h connection.h half_conn.h control.h csv.h args.h
PROXY_SRC=sw_proxy.cc listener.cc connection.cc half_conn.cc control.cc args.cc csv.cc attacker.cc
LOCI_SRC=loci/src/*.c
SNDCMD_SRC=sndcmd.cc


.PHONY: clean

all: $(BINARIES)

clean:
	rm -f $(BINARIES) *.o *~
        
sw_proxy: $(PROXY_HEADERS) $(PROXY_SRC) libloci.so libof.so
	$(CPP) $(CPPFLAGS) $(PROXY_SRC) -o sw_proxy -lpthread -Wl,-rpath,`pwd` -L`pwd` -lloci -lof

libof.so: of_mod.o of_create.o openflow.h
	$(CPP) -fPIC -shared $(CFLAGS) of_mod.o of_create.o -o libof.so

of_mod.o: openflow.cc openflow.h
	$(CPP) -fPIC -c $(CPPFLAGS) openflow.cc -o of_mod.o

of_create.o: create.cc openflow.h
	$(CPP) -fPIC -c $(CPPFLAGS) create.cc -o of_create.o

sndcmd: $(SNDCMD_SRC)
	$(CPP) $(CPPFLAGS) $(SNDCMD_SRC) -lpthread -o sndcmd

libloci.so: $(LOCI_SRC)
	$(CC) -fPIC -shared $(CFLAGS) $(LOCI_SRC) -o libloci.so

