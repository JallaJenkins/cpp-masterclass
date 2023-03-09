#include <iostream>

class Point{
	public : 
	//methods
	Point() = default;
	Point(double x, double y){
		m_x = x; 
		m_y = y;
	}

  Point* set_x(double x){
    m_x = x;
    return this;
  }

  Point* set_y(double y){
    m_y = y;
    return this;
  }
	
	double x(){
		return m_x;
	}
	double y(){
		return m_y;
	}

	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};

void print_point( Point& p);


void print_point( Point& p){
	std::cout << "Point[x : " << p.x() << ", y : " << p.y() << "]" ;
}

int main(){
  Point p1;
  Point* p_ptr {&p1};
  p_ptr->set_x(21.2)->set_y(4.2);
  print_point(p1);
  
  return 0;
}
