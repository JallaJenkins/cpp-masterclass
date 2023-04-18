#include "point.h"
#include <cmath>

const Point Point::m_point4 {Point{4, 5}};
Point Point::m_point5 {Point{3, 8}};


Point::Point (double x, double y) :p_m_point4{nullptr}, m_x(x), m_y(y) {
  std::cout << "Point constructor called\n";
  ++m_point_count;
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
  --m_point_count;
} 

// Calculate distance to origin
double Point::length() const {
  return sqrt(pow(m_x, 2) + pow(m_y, 2));
} 