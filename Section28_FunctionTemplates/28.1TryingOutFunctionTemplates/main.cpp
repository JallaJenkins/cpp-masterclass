#include <iostream>
#include <string>

template <typename T>
T maximum(T a, T b) {
  return (a > b) ? a : b;
}

// template <typename T>
// T multiply(T a, T b){
//   return a * b;
// }

int main(){

  // std::string x{"Hello"};
  // std::string y{"World"};
  // auto result = maximum(x, y);
  // auto result = multiply(x, y);

  // double x{5.5};
  // double y{7.9};

  int x{5};
  int y{7};

  int* p_x{&x};
  int* p_y{&y};

  // auto result = maximum(x, y);
  auto result = maximum(p_x, p_y);
  
  std::cout << "result: " << *result << '\n';

  return 0;
}
