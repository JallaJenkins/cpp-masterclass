#include <iostream>

inline int max(int a, int b) {  // Suggest to compiler to expand function in place
                                // wherever it is called elsewhere
  return (a > b) ? a : b;
}

int main(){

  int a{5};
  int b{8};
  std::cout << "max: " << max(a, b) << '\n';

  // This is what the compiler will put in place of line 12:
  // std::cout << "max: ";
  // std::cout << ((a > b) ? a : b);
  // std::cout << '\n';

  return 0;
}
