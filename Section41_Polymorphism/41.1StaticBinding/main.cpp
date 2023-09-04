#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main(){

  Shape shape1("Shape1");
  shape1.draw();

  Oval oval1(2.0, 3.5, "Oval1");
  oval1.draw();

  Circle circle1(3.3, "Circle1");
  circle1.draw();

  return 0;
}
