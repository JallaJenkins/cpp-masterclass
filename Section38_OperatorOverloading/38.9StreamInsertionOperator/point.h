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

  friend std::ostream& operator<<(std::ostream& os, Point& p);

  void print_info(){
    std::cout << "Point [x: " << m_x << ", y: " << m_y << "]\n";
  }

/* // This requires using << in reverse b/c the point object is first operand; awkward.
  std::ostream& operator<<(std::ostream& os) {
    os << "Point [x: " << m_x << ", y: " << m_y << ']';
    return os;
  }
  */

private:
  double length() const;  // Fn to evaluate distance from (0,0)
  double m_x{};
  double m_y{};
};

// This is the preferred method; we can specify that the point object is the second operand
inline std::ostream& operator<<(std::ostream& os, Point& p){
  os << "Point [x: " << p.m_x << ", y: " << p.m_y << ']';
  return os;
}

#endif // POINT_H