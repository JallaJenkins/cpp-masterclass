#ifndef POINT_H
#define POINT_H

#include <iostream>  // gives access to size_t

class Point{
  public:
    // Constructors
    Point (double x, double y);
    Point(double xy_coord); // Point constructor
    Point(); // Default constructor
    Point(const Point& point);  // Copy constructor
    ~Point(); // Destructor

    // Methods
    double length() const; // Calculate distance to origin
    
    size_t get_point_count() const{
      // ++m_point_count;
      return m_point_count;
    }

    void print_info() const {
      std::cout << "Point: &m_x: " << &m_x << ", &m_y: " << &m_y << '\n';
    }


  private:
    inline static size_t m_point_count{};
    double m_x;
    double m_y;

};
#endif