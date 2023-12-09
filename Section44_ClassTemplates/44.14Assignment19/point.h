#ifndef POINT_H
#define POINT_H

#include <iostream>

template <typename T = int , unsigned int size = 2>
class Point{
  friend std::ostream& operator<< <> (std::ostream& out, const Point<T, size> operand);
  T m_components[size];

public :
  unsigned int get_size() const{
      return size;
  }
  void set_value(unsigned int index, T value){
      m_components[index] = value;
  }

};


template<typename T, unsigned int size>
std::ostream& operator<< (std::ostream& out, const Point<T, size> operand) {
  out << "Point: [ dimension:" << size << ", components: ";
  
  for(size_t i{}; i < size; ++i) {
    out << operand.m_components[i] << ' ';
  }
  
  out << " ]\n";

  return out;
}


#endif  // POINT_H