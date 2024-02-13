#include "boxcontainer.h"
#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
std::ostream& operator<<( std::ostream& out,const  std::vector<T>& vec){
    out << " [ ";
    for(auto i : vec){
        out << i  << " ";
    }
    out << "]";
    return out;
}

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

  std::cout << "box: " << box1 << '\n';

  // Desitination container
  BoxContainer<int> box2;
  for(size_t i{}; i < box1.size(); ++i){
    box2.add(0);
  }
  
  std::cout << "box2-1: " << box2 << '\n';
  std::ranges::copy(box1.begin(), box1.end(), box2.begin());
  std::cout << "box2-2: " << box2 << '\n';
  
  return 0;
}