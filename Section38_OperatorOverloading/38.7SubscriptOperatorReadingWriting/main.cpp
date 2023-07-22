#include <iostream>
#include "point.h"

int main(){

  Point p1(10, 20);

  // std::cout << "p1.x: " << p1[0] << '\n';
  // std::cout << "p1.y: " << p1[1] << '\n';

  p1.print_info();

  // Changing the data
  p1[0] = 35.6;
  p1[1] = 23.9;

  // std::cout << "p1.x: " << p1[0] << '\n';
  // std::cout << "p1.y: " << p1[1] << '\n';

  p1.print_info();
  
  return 0;
}
