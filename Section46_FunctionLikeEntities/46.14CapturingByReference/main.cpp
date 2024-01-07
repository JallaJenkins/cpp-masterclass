#include <iostream>

int main(){

  int a{7};
  int b{3};
  int some_var{28}; // Not instaitated in lambda fn
  double some_other_var{55.5}; // Not instantiated in lambda fn

  // Capturing variables by reference
  auto func = [&a, &b](int c, int d) {
  
    a++;  // Modifying var is allowed by default
    std::cout << "Captured values:\n";
    std::cout << "a: " << a << '\n';
    std::cout << "b: " << b << '\n';

    std::cout << '\n';

    std::cout << "Paramaters:\n";
    std::cout << "c: " << c << '\n';
    std::cout << "d: " << d << '\n';
  };

  func(10, 20);
  std::cout << "------------------\n";
  func(20, 30);


  return 0;
}
