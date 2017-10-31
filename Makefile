# Author : Sunil
CC=g++
CC_FLAGS=
LD_FLAGS=

all: main.o
	$(CC) main.o -o main $(LD_FLAGS)

main.o: src/main.cc
	$(CC) -c $< $(CC_FLAGS)

# phony targets
.PHONY: clean

clean:
	-rm *~ *.o
