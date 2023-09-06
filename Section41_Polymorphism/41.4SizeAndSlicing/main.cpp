#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"


int main(){
  
  // Comparing object sizes
  std::cout << "sizeof(Shape): " << sizeof(Shape) << '\n';  // dynamic: 40 static: 32
  std::cout << "sizeof(Oval): " << sizeof(Oval) << '\n';  // dynamic: 56 static: 48
  std::cout << "sizeof(Circle): " << sizeof(Circle) << '\n'; // dynamic: 56 static: 48

  // Slicing
  Circle circle1(3.3, "Circle1");
  Shape shape = circle1;  // Sliced assignment
  shape.draw();
  circle1.draw();

  return 0;
}
