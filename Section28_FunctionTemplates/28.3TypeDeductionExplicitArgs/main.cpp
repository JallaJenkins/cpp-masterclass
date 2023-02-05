#include <iostream>
#include <string>

template <typename T> T maximum(T a, T b) {
  return (a > b) ? a : b;
}

int main(){

  int a{10};
  int b{23}; 
  double c{34.7};
  double d{23.4};
  std::string e{"hello"};
  std::string f{"world"};

  // auto max = maximum(a, b);
  // auto max = maximum(c, d);
  // auto max = maximum(a, d);  // Compiler error

  auto max = maximum<double>(a, d);  // Forces conversion to double
  
  std::cout << "max: " << max << '\n';

  return 0;
}
