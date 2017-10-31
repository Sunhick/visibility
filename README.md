# visibility
Shared object visibility or DLL Export in window parlance.

* Compile the files using ```make all```.
* Check out the export table ```nm  libmaths.so | grep " T " | c++filt```.
* http://anadoxin.org/blog/control-over-symbol-exports-in-gcc.html
* https://www.ibm.com/developerworks/aix/library/au-aix-symbol-visibility/index.html
* https://www.technovelty.org/code/why-symbol-visibility-is-good.html