#include <iostream>
#include <cmath>

struct Point {
	Point (double x, double y) : m_x(x), m_y(y) {}
	~Point(){
	}
	double m_x{};
	double m_y{};
};

class Line{
  Point m_point_1;
  Point m_point_2;

  public:
  Line(Point point1, Point point2)
    : m_point_1{point1}, m_point_2{point2} {

  }

  double operator()() {
    return std::sqrt(std::pow((m_point_1.m_x - m_point_2.m_x), 2) +
                      std::pow((m_point_1.m_y - m_point_2.m_y), 2));
  }

};


int main(){

  Line l(Point(1,1),Point(2,2));
  std::cout << "distance : " << l() << std::endl;

  return 0;
}
