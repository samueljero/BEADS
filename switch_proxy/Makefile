###############################################################################
# Author: Samuel Jero <sjero@purdue.edu>
###############################################################################
CPP=g++
CPPFLAGS=-O2 -Wall -Werror -g

BINARIES=sw_proxy
SRC=sw_proxy.cc

.PHONY: clean

all:
	make $(BINARIES)

clean:
	rm -f $(BINARIES) *.o *~
        
sw_proxy: $(SRC)
	$(CPP) $(CPPFLAGS) $(SRC) -o sw_proxy -lpthread

