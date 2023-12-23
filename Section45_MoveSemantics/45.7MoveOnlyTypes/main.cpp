#include <iostream>
#include "boxcontainer.h"

void populate_box(BoxContainer<int>& box, int modifier){
  for(size_t i{0}; i < 20; ++i){
    box.add((i+1)*modifier);
  }
}




int main(){

  BoxContainer<int> box1;
  populate_box(box1, 2);

  std::cout << "box1: " << box1 << '\n';

  std::cout << "--------------------------\n";

  BoxContainer<int> box2(box1); // Compiler error; copy constructor deleted

  std::cout << "box1: " << box1 << '\n';
  std::cout << "box2: " << box2 << '\n';


  return 0;
}
