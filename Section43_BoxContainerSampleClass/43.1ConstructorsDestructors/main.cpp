#include <iostream>
#include "boxcontainer.h"

int main(){

  BoxContainer box1(15);
  box1.dummy_initialize();

  std::cout << "box1: " << box1 << '\n';
  std::cout << "&box1: " << &box1 << '\n';

  BoxContainer box2(box1);
  std::cout << "box2: " << box2 << '\n';
  std::cout << "&box2: " << &box2 << '\n';

  return 0;
}
