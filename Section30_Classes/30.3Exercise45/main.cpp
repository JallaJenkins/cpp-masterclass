#include <iostream>
#include <cmath>

class Point{
  public:
    double m_x{1};
    double m_y{1};

    double distance_to(Point p){
      double a = m_x - p.m_x;
      double b = m_y - p.m_y;
      return std::hypot(a, b);
    }
};

int main(){

  Point p1;
  Point p2;
  p2.m_x = 2;
  p2.m_y = 2;
  std::cout << "distance from p1 to p2 : " << p1.distance_to(p2) << std::endl;

  return 0;
}
