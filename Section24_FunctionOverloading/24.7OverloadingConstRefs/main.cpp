#include <iostream>

int max(int& a, int& b) {
  std::cout << "max with int& called; a = 200\n";

  // Can change a and b through reference
  // a = 200;  // Will apply outside function scope
  return (a > b) ? a : b;
}

int max(const int& a, const int& b) {
  std::cout << "max with const int& called\n";

  // Can change a and b through reference
  // a = 200;  // Compiler error
  return (a > b) ? a : b;
}

int main(){

  int a{45};
  int b{85};

  int max1 = max(a, b);
  std::cout << "max1: " << max1 << '\n';

  const int& ref_a = a;
  const int& ref_b = b;
  int max2 = max(ref_a, ref_b);
  std::cout << "max2: " << max2 << '\n';

  return 0;
}
