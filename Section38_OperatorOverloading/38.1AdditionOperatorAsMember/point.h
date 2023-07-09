#ifndef POINT_H
#define POINT_H
#include <iostream>

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

  Point operator+ (const Point& p) const {
    return Point(m_x + p.m_x, m_y + p.m_y);
  }

private:
  double length() const;  // Fn to evaluate distance from (0,0)
  double m_x{};
  double m_y{};
};

#endif // POINT_H