#include "point.h"
#include <cmath>

Point::Point (double x, double y)
  : m_x(x), m_y(y)
{

}

// Point Constructor
Point::Point(double xy_coord) : Point(xy_coord, xy_coord){

}

// Default constructor
Point::Point() : Point(0, 0){

}; 

// Copy constructor
Point::Point(const Point& point) : Point(point.m_x, point.m_y){

}

// Destructor
Point::~Point(){

} 

// Calculate distance to origin
double Point::length() const {
  return sqrt(pow(m_x, 2) + pow(m_y, 2));
} 