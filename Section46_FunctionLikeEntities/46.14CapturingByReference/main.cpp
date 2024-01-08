#include <iostream>

int main(){

  int a{7};
  int b{3};
  int some_var{28}; // Not instaitated in lambda fn
  double some_other_var{55.5}; // Not instantiated in lambda fn

  // Capturing variables by reference
  // auto func = [&a, &b](int c, int d) {
  auto func = [&](int c, int d) {
  
    a++;  // Modifying var is allowed by default
    std::cout << "Captured values:";
    std::cout << " a: " << a;
    std::cout << " b: " << b;
    std::cout << '\n';

    std::cout << "Paramaters:";
    std::cout << " c: " << c;
    std::cout << " d: " << d;
    std::cout << '\n';
  };

  func(10, 20);
  std::cout << "a: " << a << '\n';  // a is changed in main scope
  // std::cout << "------------------\n";
  // func(20, 30);


  return 0;
}
