#include <iostream>
#include <type_traits>

template <typename T>
void print_number(T n){
  static_assert(std::is_integral_v<T>, "print_number() can only be called with integral types");
  std::cout << "number: " << n << '\n';
}

int main(){

  /*
  std::cout << std::boolalpha;
  std::cout << "std::is_integral<int>: " << std::is_integral<int>::value << '\n';
  std::cout << "std::is_floating_point<int>: " << std::is_floating_point<int>::value << '\n';

  std::cout << "--------------------\n";

  std::cout << "std::is_integral_v<int>: " << std::is_integral_v<int> << '\n';
  std::cout << "std::is_floating_point_v<int>: " << std::is_floating_point_v<int> << '\n';
  */

  // double a{7};
  // print_number(a);

  auto func = []<typename T>(T a, T b){
    static_assert(std::is_integral_v<T>, "func can only be called with integral type");
    return a + b;
  };

  double x{7};
  double y{6};
  func(x, y);


  return 0;
}
