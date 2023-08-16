#include <cmath>
#include "point.h"


double Point::length() const{
    return sqrt(pow(m_x - 0, 2) +  pow(m_y - 0, 2) * 1.0); 
}

Point::Point(const Point& p) {
    std::cout << "Copy constructor called for point " << p << '\n';
    if(this != &p){
        // delete p_data;  // Causes an error that I don't understand
		p_data = new int(*(p.p_data));
        m_x = p.m_x;
        m_y = p.m_y;
    }
}
