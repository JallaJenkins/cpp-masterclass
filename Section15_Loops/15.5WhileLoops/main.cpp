#include <iostream>

int main(){

  const size_t COUNT{10};
  size_t i{0};

  while (i < COUNT) {
    std::cout << i << ": I love C++" << std::endl;
    ++i;
  }

  std::cout << "Loop done!\n";

  return 0;
}
