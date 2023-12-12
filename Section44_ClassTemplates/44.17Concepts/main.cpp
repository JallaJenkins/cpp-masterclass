#include "boxcontainer.h"

#include <iostream>
#include <concepts>


template<typename T>
requires std::is_arithmetic_v<T>
class Point{

public:
  Point() = default;
  Point(T x, T y)
    : m_x(x), m_y(y)
  {
  }

  friend std::ostream& operator<< (std::ostream& out, const Point<T> operand) {
    out << "Point [x: " << operand.m_x
        << ", y: " << operand.m_y << ']';
    return out;
  }

private:
  T m_x;
  T m_y;
};

int main(){

  Point<int> point_int(10, 20);
  std::cout << "point_int: " << point_int << '\n';

  Point<double> point_double(11.1, 12.2);
  std::cout << "point_double: " << point_double << '\n';

  // Point<std::string> point_string("Hello", "World"); // compiler error!
  // std::cout << "point_string: " << point_string << '\n';

  BoxContainer<Point<int>> point_box;
  point_box.add(point_int);
  point_box.add(Point<int>(40, 50));

  std::cout << "point_box: " << point_box << '\n';

  // return 0;
}
