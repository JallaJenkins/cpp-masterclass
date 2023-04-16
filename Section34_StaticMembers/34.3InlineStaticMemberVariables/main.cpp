#include <iostream>
#include "point.h"


int main(){

  Point p1(10.0, 20.0);

  std::cout << "Point count: " << p1.get_point_count() << '\n';

  Point points[] {Point(1, 1), Point(), Point(4)};

  // std::cout << "Point count: " << Point::m_point_count << '\n';
  std::cout << "Point count: " << p1.get_point_count() << '\n';

  // size_t result = p1.get_point_count();
  // std::cout << "result: " << result << '\n';

  return 0;
}
