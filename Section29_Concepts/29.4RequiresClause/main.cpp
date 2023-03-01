#include <iostream>
#include <concepts>
#include <string>

template <typename T>
concept TinyType = requires (T t){
  sizeof(T) < 4;  // Syntax must be valid
  requires sizeof(T) <= 4;  // Expression must evaluate to true
};

// Compound requirement
template <typename T>
concept Addable = requires (T a, T b) {
  //noexcept is optional
  // {a + b} noexcept -> std::convertible_to<int>; // Compound requirement
  // {a + b} -> std::convertible_to<int>; // Compound requirement
  {a + b};
  // Checks if a + b is valid syntax, doesn't throw exceptions, and result is convertable to int
};


// TinyType auto add(TinyType auto a, TinyType auto b){
//   return a + b;
// }

Addable auto add(Addable auto a, Addable auto b){
  return a + b;
}

int main(){

  // double x{67};
  // double y{56};

  std::string x{"Hello"};
  std::string y{"World"};

  std::cout << add(x, y) << '\n';
  std::cout << sizeof(add(x, y)) << '\n';

  return 0;
}
