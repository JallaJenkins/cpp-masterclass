#include <iostream>

int main(){

  int a{7};
  int b{3};
  int some_var{28}; // Not instaitated in lambda fn
  double some_other_var{55.5}; // Not instantiated in lambda fn

  // Capturing variables by value
  // auto func = [a, b](int c, int d) {
  auto func = [=](int c, int d) {
  // auto func = [=](int c, int d) mutable {
    // a++; // Compiler error - captured var is const in lambda fn
            // Works if fn is labeled mutable
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
