#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <cassert>

class Point
{

public:
  Point() = default;
  Point(double x, double y):
    m_x(x), m_y(y){};
  ~Point() = default;

  void print_info(){
    std::cout << "Point [x: " << m_x << ", y: " << m_y << "]\n";
  }

  double& operator[](size_t index) {
    assert(index == 0 || index == 1);
    return (index == 0) ? m_x : m_y;
  }

private:
  double length() const;  // Fn to evaluate distance from (0,0)
  double m_x{};
  double m_y{};
};



#endif // POINT_H