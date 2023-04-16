#include <iostream>
#include "cylinder.h"

int main(){
  Cylinder cylinder1(3.3, 10.0);
  std::cout << "Volume of cylinder: " << cylinder1.volume() << '\n';
  std::cout << "Cylinder default color: " << Cylinder::default_color << '\n';
  std::cout << "Cylinder default color: " << cylinder1.default_color << '\n';

  return 0;
}
