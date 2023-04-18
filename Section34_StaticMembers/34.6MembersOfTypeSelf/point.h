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

    void initialize_pointer(double x, double y) {
      p_m_point4 = new Point(x, y);
    }

    void print_info() const {
      std::cout << "Point: m_x: " << m_x << ", m_y: " << m_y << '\n';
    }

  public:
    // Point m_point1;  // Incomplete type compiler error
    // const Point m_point2;  // Incomplete type compiler error
    // inline static const Point m_point3 {};

    Point * p_m_point4;  // Works

    static const Point m_point4;
    static Point m_point5;


  private:
    double m_x;
    double m_y;
    inline static size_t m_point_count{};

};
#endif