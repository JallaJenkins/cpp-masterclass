#include <iostream>

int main(){

  
  const size_t name_length{15};

  char members [][name_length] {
    {'J','o','h','n'},
    {'S','a','m','u','e','l',},
    {'R','a','s','h','i','d'},
    {'R','o','d','r','i','g','e','z'}
  };

  /*
  // Printing this out is unsafe - no guarantee of null character

  std::cout << "Unsafe printing of members: " << '\n';
  for (size_t i{0}; i < std::size(members); ++i) {
    std::cout << members[i] << '\n';
  }
  */

 /*
  std::cout << "Printing out by character manually: \n";
  for (size_t i{0}; i < std::size(members); ++i) {
    for (size_t j{0}; j < std::size(members[i]); ++j) {
      std::cout << members[i][j];
    }
    std::cout << '\n';
  }
  */

  // Using C-string literals
  char members1 [][name_length] {
    "John",
    "Samuel",
    "Rashid",
    "Rodriguez"
  };

  std::cout << "Printing out C-string literals:\n";
  for (size_t i{0}; i < std::size(members1); ++i) {
    std::cout << members1[i] << '\n';
  }

  return 0;
}
