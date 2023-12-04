#include <iostream>
#include "boxcontainer.h"

class Point{
    friend std::ostream& operator<<(std::ostream& out, const Point& operand);
    public : 
    Point(double x, double y) : m_x(x) , m_y(y){
        
    }
    //The default constructor must be there for bags of Points to be able
    //initializable with the new T[] statement in the BoxContainer<T> constructor.
    Point() : m_x(0.0), m_y(0.0){  
    }
    
private : 
    double m_x{};
    double m_y{};
};

std::ostream& operator<<(std::ostream& out, const Point& operand){
    out << "Point [ x : " << operand.m_x << ",y : " << operand.m_y << "]";
    return out;
}



int main(){

	

	std::cout << "END." << std::endl;
  

  return 0;
}
