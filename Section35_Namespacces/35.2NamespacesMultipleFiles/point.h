#ifndef POINT_H
#define POINT_H

#include <iostream>

namespace Geom{

  class Point
  {
  public:
    // Constructos
    Point(double x, double y);
    Point();
    ~Point();

    void print_info() const {
      std::cout << "Point [m_x : " << m_x << ", m_y : " << m_y << "]\n";
    }

  private:
    double m_x;
    double m_y;
  };

}

#endif