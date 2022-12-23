#include <iostream>

int main(){

  const size_t COUNT{20};

  /*
  for(size_t i{0}; i < COUNT; ++i){

    if(i == 5)
      continue;

    if(i == 11)
      break;

    std::cout << "i: " << i << "\n";
  }
  */

  size_t i{0};

  while(i < COUNT){

    if (i == 5) {
      ++i;
      continue;
    }

    if (i == 11)
      break;

    std::cout << "i: " << i << "\n";
    ++i;
  }

  return 0;
}
