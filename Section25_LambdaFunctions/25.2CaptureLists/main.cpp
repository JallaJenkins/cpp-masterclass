#include <iostream>

int main(){

  // Capture lists

  /*
  double a{10};
  double b{20};

  auto func = [a, b](){
    std::cout << "a + b: " << a + b << '\n';
  };
  func();
  */

  // Capture by value
  /*
  int c{42};

  auto func = [c](){
    std::cout << "Inner value: " << c << ", &inner: " << &c << '\n';
  };

  for(size_t i{}; i < 5; ++i){
    std::cout << "Outer value: " << c << ", &outer: " << &c << " - ";
    func();
    ++c;
  }
  */

  // Capture by reference
  int c{42};

  auto func = [&c](){
    std::cout << "Inner value: " << c << ", &inner: " << &c << '\n';
  };

  for(size_t i{}; i < 5; ++i){
    std::cout << "Outer value: " << c << ", &outer: " << &c << " - ";
    func();
    ++c;
  }
  return 0;
}
