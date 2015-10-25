G++ = g++ -std=gnu++11
GCC = gcc -std=gnu99
OPT_FLAGS = -O3 -msse -msse2

TARGETS = procmon

all: $(TARGETS)

procmon: procmon.cpp
	$(G++) $(OPT_FLAGS) -o $@ $^

clean:
	rm -rfv $(TARGETS)
