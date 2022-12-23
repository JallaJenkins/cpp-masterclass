#include <iostream>

int main(){

  int scores[10] {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

  // Array index notation
  // int* pointer1 {&scores[0]};
  // int* pointer2 {&scores[8]};

  // Pointer arithmetic notation
  int* pointer1 {scores + 0};
  int* pointer2 {scores + 8};
  // long long int difference {pointer1 - pointer2};

  std::cout << "pointer2 - pointer1: " << pointer2 - pointer1 << '\n';
  std::cout << "pointer1 - pointer2: " << pointer1 - pointer2 << '\n';

  std::ptrdiff_t pos_diff = pointer2 - pointer1;
  std::ptrdiff_t neg_diff = pointer1 - pointer2;
  std::cout << "pointer2 - pointer1: " << pos_diff << '\n';
  std::cout << "pointer1 - pointer2: " << neg_diff << '\n';
  std::cout << "sizeof(std::ptrdiff_t): " << sizeof(std::ptrdiff_t) << '\n';

  return 0;
}
