#include <iostream>
#include "boxcontainer.h"

void populate_box(BoxContainer<int>& box, int modifier){
  for(size_t i{0}; i < 20; ++i){
    box.add((i+1)*modifier);
  }
}

/*
// Swap function: copy version
template <typename T>
void swap_data(T& a, T& b){
  T temp {a}; //  Invokes copy constructor
  a = b;  //  Invokes copy assignment 
  b = temp; //  Invokes copy assignment
}
*/

// Swao function: move version
template <typename T>
void swap_data(T& a, T& b){
  T temp {std::move(a)}; 
  a = std::move(b);   
  b = std::move(temp); 
}


int main(){

  BoxContainer<int> box1;
  populate_box(box1, 2);
  BoxContainer<int> box2;
  populate_box(box2, 15);

  std::cout << "box1: " << box1 << '\n';
  std::cout << "box2: " << box2 << '\n';

  swap_data(box1, box2);

  std::cout << "---------------------------\n";

  std::cout << "box1: " << box1 << '\n';
  std::cout << "box2: " << box2 << '\n';

  return 0;
}
