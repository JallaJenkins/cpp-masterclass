#include <iostream>

template <typename T, typename P>
decltype(auto) maximum(T a, P b) {
  return (a > b) ? a : b;
}

int main(){

  int x{7};
  double y{45.9};

  auto result = maximum(x, y);
  std::cout << "result: " << result << '\n';
  std::cout << "sizeof(result): " << sizeof(result) << '\n';

  return 0;
}

