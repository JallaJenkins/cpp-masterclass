#include <iostream>
#include "circle.h"
#include "rectangle.h"

int main(){

  // Shape* shape_pre = new Shape;  // Compiler error - shape is an abstract class

  const Shape* shape_rect = new Rectangle(10, 10, "rect1");
  double surface = shape_rect->surface();
  std::cout << "Dynamic type of shape_rect: " << typeid(*shape_rect).name() << '\n';
  std::cout << "The surface of shape rect1 is: " << surface << '\n';

  std::cout << "-----------------------------\n";

  const Shape* shape_circle = new Circle(10, "circle1");
  surface = shape_circle->surface() ;
  std::cout << "Dynamic type of circle1: " << typeid(*shape_circle).name() << '\n';
  std::cout << "The surface of circle1 is: " << surface << '\n';

  return 0;
}
