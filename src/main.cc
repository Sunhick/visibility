#include "../include/math.h"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  cout << "Welcome! Demo of controlling the visibility of shared object" << endl;

  int result = add(10, 10);
  cout << "sum(10, 10) = " << result << endl;

  result = sub(10, 10);
  cout << "diff(10, 10) = " << result << endl;
  return 0;
}
