#include <iostream>
#include "point.h"
#include "car.h"

int main(){

  Point p1(10, 10, 10);
  Car c1("Red", 200.0);

  p1 = c1;
  
  std::cout << "p1: " << p1 << '\n';
  
  return 0;
}
