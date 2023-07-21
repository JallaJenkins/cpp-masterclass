#include <iostream>
#include "point.h"

int main(){

  Point p1(10, 20);

  std::cout << "p1.x: " << p1.operator[](0) << '\n';
  std::cout << "p1.y: " << p1[1] << '\n';
  std::cout << "p1.z: " << p1[2] << '\n';

  
  return 0;
}
