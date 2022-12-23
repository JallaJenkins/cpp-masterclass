#include <iostream>

int main(){

  // int* data = new int[100000000000000000];

  /*
  for (size_t i{0}; i < 10000000; ++i) {
    int* data = new int[10000000];
  }
  */

  /*
  // Using error handling with exceptions
  for (size_t i{0}; i < 5; ++i) {
    try {  
      int* data = new int[1000000000000000];
    } catch (std::exception& ex) {
      std::cout << "Something went wrong: " << ex.what() << '\n';
    }
  } 
  */

  // Using std::nothrow
  for (size_t i{0}; i < 100; ++i) {
    int *data = new(std::nothrow) int[10000000000];

    if (data != nullptr) {
      std::cout << "Data allocated\n";
    } else {
      std::cout << "Data allocation failed\n";
    }
  }


  std::cout << "Reached program end\n";

  return 0;
}
