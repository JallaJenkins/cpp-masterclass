#include <iostream>

template <typename ReturnType = double, typename T, typename P>
ReturnType maximum(T a, P b){
  return (a > b) ? a : b;
}

template <typename T, typename P, typename ReturnType = double>
ReturnType minimum(T a, P b){
  return (a < b) ? a : b;
}

int main(){

  double a{6};
  double b{9.5};

  // auto result = maximum<int, double>(a, b);
  // std::cout << "result: " << result << '\n';
  // std::cout << "sizeof(result): " << sizeof(result) << '\n';

  auto result = minimum<int, double, int>(a, b);
  std::cout << "result: " << result << '\n';
  std::cout << "sizeof(result): " << sizeof(result) << '\n';

  return 0;
}
