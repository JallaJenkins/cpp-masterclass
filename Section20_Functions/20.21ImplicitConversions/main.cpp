#include <iostream>

void print_sum(int a, int b) {
  int sum = a + b;
  std::cout << "sizeof(a): " << sizeof(a) << '\n';
  std::cout << "sizeof(b): " << sizeof(b) << '\n';
  std::cout << "sizeof(int): " << sizeof(int) << '\n';
  std::cout << "sizeof(double): " << sizeof(double) << '\n';
  std::cout << "sum: " << sum << '\n';
  std::cout << '\n';
}

int main(){

  // int a{4};
  // int b{7};
  double a{4.5};  // Will be converted to int
  double b{7.8};
  // std::string a{"4.5"};  // Cannot be converted to int! Compiler error
  // std::string b{"7.8"};
  print_sum(a, b);

  return 0;
}
