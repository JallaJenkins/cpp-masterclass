#include <iostream>

int main(){

  // for(double multiplier{4}; auto i: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}) {
  //   std::cout << "result: " << (i * multiplier) << "\n";
  // }

  for(double multiplier{4}; size_t i; i < 10; ++i) {
    std::cout << "result: " << (i * multiplier) << "\n";
  }

  double multiplier{64};

  std::cout << "multiplier: " << multiplier << "\n";

  return 0;
}
