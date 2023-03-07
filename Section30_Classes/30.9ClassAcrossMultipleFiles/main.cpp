#include <iostream>
// #include "constants.h"
#include "cylinder.h"

int main(){

  Cylinder cylinder1(10, 10);
  std::cout << "volume: " << cylinder1.volume() << '\n';

  return 0;
}
