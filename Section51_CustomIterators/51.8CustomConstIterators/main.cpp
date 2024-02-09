#include "boxcontainer.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>

template <typename T>
void print(const BoxContainer<T>& c){
  for(auto i : c) {
    std::cout << i << " ";
  }
  std::cout << '\n';
}

int main(){

  BoxContainer<int> vi;
  vi.add(5);
  vi.add(1);
  vi.add(4);
  vi.add(8);
  vi.add(5);
  vi.add(3);
  vi.add(7);
  vi.add(9);
  vi.add(6);

  const BoxContainer<int> copy(vi);

  std::cout << "data: ";
  for (auto it = copy.begin(); it!=copy.end(); ++it){
    std::cout << (*it) << " ";
  }
  std::cout << '\n';

  print(copy);


  return 0;
}
