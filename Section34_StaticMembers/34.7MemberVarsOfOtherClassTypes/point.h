#ifndef POINT_H
#define POINT_H

#include "integer.h"
#include <iostream>

class Point
{
public:
  // Constructos
  Point(double x, double y);
  Point(double xy_cood);
  Point();
  Point(const Point& point);
  ~Point();

  double length() const;

  size_t get_point_count() const {
    return m_point_count;
  }

  // Members of other objects
  Integer i1{1};
  const Integer i2{2};
  static inline Integer i3{3};
  static inline const Integer i4{4};

  Integer* p_i5{nullptr};
  static Integer i6;
  static const Integer i7;

private:
  double m_x;
  double m_y;
  static size_t m_point_count;
};

#endif