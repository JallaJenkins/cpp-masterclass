#include "integer.h"
#include <iostream>

class Point{
public:
  Point() {

  }
  Point(double x, double y) : m_x{x}, m_y{y} {

  };

private:

  /*
  // No init
  double m_x;
  double m_y;
  */

  /*
  // Explicit assignment
  double m_x = 0.1;
  double m_y = 0.1;
  */

  /*
  // Empty braced inits
  double m_x{};
  double m_y{};
  */

  // Braced inits
  double m_x{0.1};
  double m_y{0.1};

  //
  Integer i{};

};

int main(){

  Point p1;

  return 0;
}
