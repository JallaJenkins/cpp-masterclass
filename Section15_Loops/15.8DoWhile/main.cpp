#include <iostream>

int main(){

  // const int COUNT{10};
  const int COUNT{0};
  size_t i{0};

  do{
    std::cout << i << ": I love C++!\n";
    ++i;
  }while(i < COUNT);

  return 0;
}
