#include "../include/math.h"

#include <iostream>

using namespace std;

// default vibility of these function are exported. unless
// it's specified to be hidden in g++ command line.

// if the visibility is hidden you won't be able to link the 
// libmaths.so with and create the executable "main" because
// add(...) is no defined/ visible.
__attribute__((visibility ("default")))int add(int a, int b) {
  return a + b;
}

// play with below attribute visibility ("hidden", "default")
// The below is equivalent to window __declspec(dllexport)
// Also learn about __declspec(dllimport)
__attribute__ ((visibility ("hidden"))) int sub(int a, int b) {
  return a - b;
}
