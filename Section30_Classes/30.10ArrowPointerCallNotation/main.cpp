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

  return 0;
}
