#include "point.h"
#include <iostream>

int main(){

  // std::cout << "Point count: " << Point::get_point_count() << '\n';

  Point p1(6, 7);

  // std::cout << "Point count: " << Point::get_point_count() << '\n';
  
  // Point::print_info(p1);
  p1.print_info(p1);

  return 0;
}
