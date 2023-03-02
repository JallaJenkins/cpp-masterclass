#include <iostream>
#include <cmath>

class Point{
	public : 

  Point(double x, double y){
    m_x = x;
    m_y = y;
  }

	//methods
	double distance_to( Point target){
		return std::sqrt(std::pow(target.m_x - m_x, 2) + std::pow(target.m_y - m_y, 2) * 1.0);
	}
	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};

int main(){

  Point p1(1.1,2.1);
  Point p2(3.2,5.2);
  std::cout << "distance from p1 to p2 : " << p1.distance_to(p2) << std::endl;

  return 0;
}
