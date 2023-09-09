#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"


int main(){
  
  /*
  Circle circle1(7.2,"circle1");
  Oval oval1(13.3,1.2,"Oval1");

  
  oval1.draw();
  // oval1.draw(54);  // Only works if explciitly defined in Oval
  
  circle1.draw();
  // circle1.draw(44);  // Only works if explcitivly defined in Circle
  */

  Shape* shape_ptr = new Circle(10, "Circle1");

  shape_ptr->draw();
  shape_ptr->draw(45, "Red");  // Won't work becuase this overlaod is not defined at the Shape level

  return 0;
}
