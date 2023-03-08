#include <iostream>
// #include "constants.h"
#include "cylinder.h"

int main(){

  Cylinder cylinder1(10, 10);

  // std::cout << "volume: " << cylinder1.volume() << '\n';

  // Managing a stack object through pointers
  Cylinder* p_cylinder1 = &cylinder1;

  // std::cout << "volume: " << (*p_cylinder1).volume() << '\n';
  std::cout << "volume: " << p_cylinder1->volume() << '\n';

  // Create object on the heap
  // Cylinder* p_cylinder2 = new Cylinder;
  Cylinder* p_cylinder2 = new Cylinder(100, 2);

  std::cout << "volume(cylinder2): " << p_cylinder2->volume() << '\n';
  std::cout << "base_radius(cylinder2): " << p_cylinder2->get_base_radius() << '\n';

  delete p_cylinder2;


  return 0;
}
