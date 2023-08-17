#include <iostream>
#include "point.h"
#include "number.h"

void do_something_with_point(const Point& p){
    std::cout << "point : " << p << std::endl;
}

int main(){

  Point p1(10, 10);
  Number n1(22);
  
  // p1 = n1;  
  // (1) Point Copy assignment from Number operator is chosen first
  // (2) Point constructor from Number called, then new Point is passed through vanilla Point copy assignment operator
  // (3) Type conversion from Number to Point called, then new Point is passed through vanilla Point copy assignment operator 

  do_something_with_point(n1);
  // (1) Point Constructor from Number called first
  // (2) Type conversion from Number to Point

  return 0;
}
