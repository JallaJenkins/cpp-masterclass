#include <iostream>
#include "point.h"

int main(){

  Point p1(10, 10);
  std::cout << "p1: " << p1++ << '\n';
  std::cout << "p1: " << p1 << '\n';

  Point p2(p1);

  return 0;
}
