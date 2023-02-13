#include <iostream>

/*
// Return type depends on order of arguments in this example:
template <typename T, typename P>
T maximum(T a, P b){
  return (a > b) ? a : b;
}
*/

// Seperate return type
// template <typename T, typename R, typename P>
// template <typename T, typename P, typename R>
// Best to put return type first
template <typename R, typename T, typename P>
R maximum(T a, P b){
  return (a > b) ? a : b;
}

int main(){

  int a{5};
  double b{6.7};
  auto result = maximum<int>(a, b);

  std::cout << "sizeof(result): " << sizeof(result) << '\n';

  return 0;
}
