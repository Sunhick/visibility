# Author : Sunil
CC=g++

# play with toggling HIDDEN flag.
# to understand the visibility=hidden, default behaviour
CC_FLAGS=-fPIC # -DHIDDEN

LD_FLAGS=

# (OSX) : dylib vs shared object
# use -shared option to create so file &
# -dynamiclib to create *.dylib
SHARED_LIB=-dynamiclib -Wl

all: out-dirs main

out-dirs:
	mkdir -p obj

main: obj/main.o libmaths.dylib
	$(CC) $(LD_FLAGS) $< -o $@ -L. -lmaths

obj/main.o: src/main.cc
	$(CC) $(CC_FLAGS) -c $< -o $@

obj/math.o: lib/math.cc
	$(CC) -c $< $(CC_FLAGS) -o $@

# version-script is not supported on OSX.
# try it out with ubuntu or linux systems.
libmaths.dylib: obj/math.o
	$(CC) $(SHARED_LIB) $< -o $@ # --version-script=libmaths.so.map


# phony targets
.PHONY: clean exports

clean:
	-rm *~ *.o
	-rm -rf obj

# grep " T " shows export table
# catch: grep " t " shows all symbols in the symbol table(includes export table.)
# but we are interested in symbols that are exported. So stick with " T " in the 
# grep command
exports:libmaths.so
	-nm libmaths.so | grep " T " | c++filt

