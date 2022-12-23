#include <iostream>

int main(){

  /*
  // for(size_t i{}; ; ++i){
  for(size_t i{}; true; ++i){
    std::cout << i << ": I love C++\n";
  }
  */

  /*
  size_t i{0};
  while(true){
    std::cout << i << ": I love C++\n";
    ++i;
  }
  */

  size_t i{0};
  do{
    std::cout << i << ": I love C++\n";
    ++i;
  }while(true);
  return 0;
}
