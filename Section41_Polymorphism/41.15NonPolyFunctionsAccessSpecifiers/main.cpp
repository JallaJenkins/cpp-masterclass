#include <iostream>
#include <memory>
#include "ellipse.h"


int main(){

  // Access through base pointer
  std::shared_ptr<Shape> shape0 = std::make_shared<Ellipse>(1, 5, "ellipse0");
  shape0->draw();
  // shape0->func(); // Error - func is private in Shape class

  Ellipse* ellipse1(new Ellipse(3, 5, "ellipse1"));
  // ellipse1->draw();  // Error - draw is private in Ellipse class
  ellipse1->func();
  delete ellipse1;

  Shape shape3 = Ellipse(3, 6, "ellipse3");
  shape3.draw();
  // shape3.func();  // Error - shape3 is a shape, not Ellipse

  return 0;
}
