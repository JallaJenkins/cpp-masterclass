#include <iostream>
#include <string>

template <typename T> void swap_data(T& x, T& y) {
  T temp = x;
  x = y;
  y = temp;
}

int main(){

  // int x{10};
  // int y{20};

  std::string x {"Hello"};
  std::string y {"World!"};

  swap_data(x, y);
  
  std::cout << "x: " << x << ", y: " << y << '\n';

  return 0;
}
