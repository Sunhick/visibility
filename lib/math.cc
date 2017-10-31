#include "../include/math.h"

#include <iostream>

using namespace std;

// default vibility of these function are exported. unless
// it's specified to be hidden in g++ command line.

// if the visibility is hidden you won't be able to link the 
// libmaths.so with and create the executable "main" because
// add(...) is no defined/ visible.
#ifdef HIDDEN
__attribute__((visibility ("hidden")))
#else
__attribute__((visibility ("default")))
#endif
int add(int a, int b) {
  cout << "(libmath): add function log" << endl;
  return a + b;
}

// play with below attribute visibility ("hidden", "default")
// The below is equivalent to window __declspec(dllexport)
// Also learn about __declspec(dllimport)
#ifdef HIDDEN
__attribute__((visibility ("hidden")))
#else
__attribute__((visibility ("default")))
#endif
int sub(int a, int b) {
  cout << "(libmath): sub function log" << endl;
  return a - b;
}
