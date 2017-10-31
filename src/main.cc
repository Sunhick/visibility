#include "../include/math.h"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  cout << "Welcome! Demo of controlling the visibility of shared object" << endl;

  int k = add(10, 10);
  cout << "sum(10, 10) = " << k << endl;

  k = sub(10, 10);
  cout << "diff(10, 10) = " << k << endl;
  return 0;
}
