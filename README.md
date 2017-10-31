# visibility
Shared object visibility or DLL Export in window parlance.

* Compile the files using ```make all```.
* Check out the export table ```nm  libmaths.so | grep " T " | c++filt```.
* 