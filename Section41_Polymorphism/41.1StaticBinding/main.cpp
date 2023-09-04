#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

void draw_circle(const Circle& circle){
  circle.draw();
}

void draw_oval(const Oval& oval){
  oval.draw();
}


int main(){

  Shape shape1("Shape1");
  // shape1.draw();

  Oval oval1(2.0, 3.5, "Oval1");
  // oval1.draw();

  Circle circle1(3.3, "Circle1");
  // circle1.draw();

  // Base pointers
  Shape* shape_ptr = &shape1;
  // shape_ptr->draw();

  shape_ptr = &oval1;
  // shape_ptr->draw();  // Static binding default - uses draw method based on type of pointer variable

  shape_ptr = &circle1;
  // shape_ptr->draw();  // Static binding default

  // Base references

  // Shape& shape_ref = shape1;
  Shape& shape_ref = oval1;
  // shape_ref.draw();  // Static binding default - uses draw method based on type of reference variable

  // Drawing shapes
  draw_circle(circle1);
  draw_oval(oval1);


  // Shapes stored in collections
  // Using default static binding, cannot mix types within a collection
  Circle circle_col[]{circle1, Circle(10, "Circle2")};
  Oval oval_col[]{oval1, Oval(20, 30, "Oval2")};

  return 0;
}
