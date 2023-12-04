#ifndef POINT_H
#define POINT_H

#include <iostream>

template <typename T, int dimensions>
class Point {
  T * m_coords = new T[dimensions]{};

public:
  Point() = default;
  Point(Point& source);
  ~Point();

  void set_value(int dimension, T value);
  T get_value(int dimension);
  void print_info();

};

template <typename T, int dimensions>
Point<T, dimensions>::Point(Point<T, dimensions>& source) {
  for(size_t i{}; i < dimensions; ++i){
    m_coords[i] = source.m_coords[i];
  }
}

template <typename T, int dimensions>
Point<T, dimensions>::~Point() {
  delete[] m_coords;
}

template <typename T, int dimensions>
void Point<T, dimensions>::set_value(int dimension, T value) {
  if ((dimension > (dimensions - 1)) || (dimension < 0)) return;
  m_coords[dimension] = value;
}

template <typename T, int dimensions>
T Point<T, dimensions>::get_value(int dimension){
  // if ((dimension > (dimensions - 1)) || (dimension < 0)) return ;
  return m_coords[dimension];
}

template <typename T, int dimensions>
void Point<T, dimensions>::print_info(){
  std::cout << "point : [ ";
  for(size_t i{}; i < dimensions; ++i){
    std::cout << m_coords[i] << ' ';
  }
  std::cout << ']';
}

#endif // POINT_H