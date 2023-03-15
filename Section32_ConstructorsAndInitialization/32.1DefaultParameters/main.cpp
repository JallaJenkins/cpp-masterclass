#include <iostream>
#include "cylinder.h"


int main(){

  Cylinder c1(4, 5);
  std::cout << "volume: " << c1.volume() << '\n';

  return 0;
}
