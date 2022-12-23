#include <iostream>

int main(){

  int scores[] {1, 2, 3, 4, 5, 6, 7, 8, 5, 67, 8, 4, 23};

  /*
  for (size_t i{0}; i < std::size(scores); ++i) {
    std::cout << "scores [" << i << "]: " << scores[i] << '\n';
  }
  */

  /*
  std::cout << "sizeof(scores): " << sizeof(scores) << '\n';
  std::cout << "sizeof(scores[0]): " << sizeof(scores[0]) << '\n';

  int count{sizeof(scores)/sizeof(scores[0])};

  for (size_t i{0}; i < count; ++i) {
    std::cout << "scores [" << i << "]: " << scores[i] << '\n';
  }
  */

  for (auto i: scores){
    std::cout << "value: " << i << '\n';
  }

  return 0;
}
