#include "point.h"
#include <iostream>
#include <cmath>

size_t Point::m_point_count {};

Integer Point::i6{6};
const Integer Point::i7{7};

Point::Point(double x, double y)
  : p_i5(new Integer(5)),
    m_x(x), m_y(y)
{
  std::cout << "Constructing Point [ m_x : ]" << m_x << ", m_y : " << m_y 
            << "]\n";
  ++ m_point_count; 
}

Point::Point(double xy_coord) : Point(xy_coord, xy_coord) {
  std::cout << "Point single param constructor called\n";
}

Point::Point() : Point(0, 0){
  std::cout << "Point default constructor called\n";
}

Point::Point(const Point& point) : m_x(point.m_x)
{
  std::cout << "Copy constructor called\n";
  ++m_point_count;
}

Point::~Point()
{
  std::cout << "Destroying point object\n";
  --m_point_count;
  std::cout << "Current point count: " << m_point_count << '\n';
}

double Point::length() const {
  return sqrt(pow(m_x - 0.0, 2) + pow(m_y - 0.0, 2));
}
