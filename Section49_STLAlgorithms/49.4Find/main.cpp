#include <iostream>
#include <algorithm>
#include <vector>

int main(){

  // int n = 23;
  int n = 24;

  std::vector<int> collection{14, 24, 7, 8, 98, 11};
  // std::vector<int> collection{14, 24, 6, 8, 98, 10};

  auto result = std::find(std::begin(collection), std::end(collection), n);

  if(result != std::end(collection)) {
    std::cout << "Collection contains: " << n << '\n';
  } else {
    std::cout << "Collection does not contain: " << n << '\n';
  }

  std::cout << "----------------------\n";

  auto odd = [](int x){
    return x % 2 != 0;
  };

  auto odd_n_position = std::find_if(std::begin(collection), std::end(collection), odd);

  if(odd_n_position != std::end(collection)) {
    std::cout << "Found an odd number!: " << *odd_n_position << "\n";
  } else {
    std::cout << "No odd numbers found\n";
  }

  return 0;
}
