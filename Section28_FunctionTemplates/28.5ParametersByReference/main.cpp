#include <iostream>

template <typename T> const T& maximum(const T& a, const T& b);
// template <typename T> T maximum(T a, T b);

int main(){

  double a{23.5};
  double b{51.2};

  std::cout << "Out - $a: " << &a << '\n';
  auto result = maximum(a, b);
  std::cout << "Out - $a: " << &a << '\n';

  return 0;
}

template <typename T> const T& maximum(const T& a, const T& b) {
  // ++a; // compiler error
  std::cout << "In - $a: " << &a << '\n';
  return (a > b) ? a : b;
}

// template <typename T> T maximum(T a, T b) {
//   std::cout << "In - $a: " << &a << '\n';
//   return (a > b) ? a : b;
// }
