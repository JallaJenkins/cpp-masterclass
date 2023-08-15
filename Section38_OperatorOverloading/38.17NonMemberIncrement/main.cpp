#include <iostream>
#include "point.h"

int main(){

  Point p1(10, 10);
  std::cout << "p1: " << p1 << '\n';

  ++p1;
  // p1.operator++(); // this no longer works when overload is not a member function
  operator++(p1); // this will now work b/c operator++ is technically a global fn
  std::cout << "p1: " << p1 << '\n';

  for(size_t i{}; i < 20; ++i){
    ++p1;
    std::cout << "p1: " << p1 << '\n';
  }
  
  return 0;
}
