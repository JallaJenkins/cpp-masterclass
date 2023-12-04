#include <iostream>
#include "boxcontainer.h"

template <typename T, T threshold>
class Point{
public:
  Point(T x, T y);
  ~Point() = default;
private:
  T m_x;
  T m_y;
};

template <typename T, T threshold>
Point<T, threshold>::Point(T x, T y) 
  : m_x(x), m_y(y) 
{

}


int main(){

  // BoxContainer<int, 5> int_box1; // One class instance
  // BoxContainer<int, 10> int_box2; // Another class instance! Resource intensive


  // int_box.add(11);
  // int_box.add(62);
  // int_box.add(30);
  // int_box.add(3);
  // int_box.add(7);

  // int_box.add(9);
  // int_box.add(8);

  // std::cout << "int_box: " << int_box << '\n';

  Point<int, 44> point1(10, 20); // Works
  Point<double, 33.1> point2(11.22, 22.33); // gives compiler error in older compilers

  return 0;
}
