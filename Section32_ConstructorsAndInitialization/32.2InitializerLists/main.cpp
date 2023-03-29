#include <iostream>
#include "cylinder.h"

int main(){

  Cylinder c1(5);
  std::cout << "volume: " << c1.volume() << '\n';
  std::cout << "base_red: " << c1.get_base_radius() << '\n';
  std::cout << "height: " << c1.get_height() << '\n';

  

  return 0;
}
