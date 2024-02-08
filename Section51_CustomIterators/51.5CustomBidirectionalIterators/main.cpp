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

  // std::cout << "box: " << box1 << '\n';
  // std::ranges::reverse(box1);
  // std::cout << "box: " << box1 << '\n';

  std::cout << "box1-reverse:\n";
  for(auto it = box1.end(); it!=box1.begin(); ){
    std::cout << *(--it) << " ";
  }
  std::cout << '\n';

 
  
  return 0;
}
