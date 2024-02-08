#include "boxcontainer.h"
#include <iostream>
#include <algorithm>
#include <vector>


int main(){

  // std::vector<int> box1 {8, 1, 4, 2, 5, 3, 7, 9};
  BoxContainer<int> box1;
  box1.add(5);
  box1.add(1);
  box1.add(4);
  box1.add(8);
  box1.add(5);
  box1.add(3);
  box1.add(7);
  box1.add(9);
  box1.add(6);

  std::cout << "box1: " << box1 << '\n';
  std::sort(box1.begin(), box1.end());
  std::cout << "box1: " << box1 << '\n';
  
  
  return 0;
}
