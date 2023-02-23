#include <iostream>

template <typename T, typename P>
auto maximum (T a, P b) -> decltype((a > b) ? a : b); 

int main(){

  // decltype
  int a{9};
  double b{15.8};

  /*
  std::cout << "size: " << sizeof(decltype((a > b) ? a : b)) << '\n';

  decltype((a > b) ? a : b) c {7}; // delcare a var using decltype

  std::cout << "c: " << c << '\n';\
  std::cout << "sizeof(c): " << sizeof(c) << '\n';
  */

  auto result = maximum(a, b);
  std::cout << "result: " << result << '\n';
  std::cout << "seizeof(result): " << sizeof(result) << '\n';

  return 0;
}

template <typename T, typename P>
auto maximum (T a, P b) -> decltype((a > b) ? a : b) {
  return (a > b) ? a : b;
}