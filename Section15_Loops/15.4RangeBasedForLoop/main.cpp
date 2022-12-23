#include <iostream>

int main(){
  
  int bag_of_values [] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // Old way
  /*
  for (size_t i {0}; i < 10; ++i){
    std::cout << "value: " << bag_of_values[i] << "\n";
  }
  */

  // New way
  /*
  for (int value: bag_of_values){
    std::cout << "value: " << value << "\n";
  }
  */

  // Specify in place
  /*
  for (int value: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}) {
    std::cout << "value: " << value << "\n";
  }
  */

  // Auto type deduction
  for (auto value: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}) {
    std::cout << "value: " << value << "\n";
  }
  return 0;
}
