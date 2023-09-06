#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"


int main(){
  
  Circle circle1(7.2,"circle1");
  Oval oval1(13.3,1.2,"Oval1");
  Circle circle2(11.2,"circle2");
  Oval oval2(31.3,15.2,"Oval2");
  Circle circle3(12.2,"circle3");
  Oval oval3(53.3,9.2,"Oval3");

  // Data wukk be skuced off if objects stored in raw Shapes array
  /*
  std::cout << "sizeof(circle1): " << sizeof(circle1) << '\n';

  Shape shapes1[] {circle1, oval1, circle2, oval2, circle3, oval3};

  for(Shape& s : shapes1){
    std::cout << "sizeof(object): " << sizeof(s) << '\n';
    s.draw();
  }
  */

  // Can't store references in collections
  // const Shape& shapes2[] {circle1, oval1, circle2, oval2, circle3, oval3}; // Compiler error

  // Raw pointers will work polymorphically - no slicing
  Shape* shapes3[] {&circle1, &oval1, &circle2, &oval2, &circle3, &oval3};

  for(Shape* s : shapes3){
    std::cout << "sizeof(object): " << sizeof(*s) << '\n';
    s->draw();
  }

  // Also wors with smart pointers
  std::shared_ptr<Shape> shapes4[] {std::make_shared<Circle>(circle1),
    std::make_shared<Oval>(oval1)};
  
  for(auto& s : shapes4){
    std::cout << "sizeof(object): " << sizeof(*s) << '\n';
    s->draw();
  }

  return 0;
}
