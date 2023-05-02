#ifndef POINT_H
#define POINT_H

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

  static size_t get_point_count(){
    // return m_point_count;
  }

  static void print_info(const Point& p){
    std::cout << "Point [ m_x : " << p.m_x << ", m_y : " << p.m_y << "]\n";
  }

private:
  double m_x;
  double m_y;
  inline static size_t m_point_count{};
};

#endif