#include <iostream>
#include "compare.h"  // Preprocessor includes compare.h in main.cpp
#include "operations.h"

int main(){

  int maximum = max(134, 56);
  std::cout << "max: " << maximum << '\n';

  int minimum = min(146, 23);
  std::cout << "min: " << minimum << '\n';

  int incr = incr_mult(5, 6);
  std::cout << "incr: " << incr << '\n';

  return 0;
}

