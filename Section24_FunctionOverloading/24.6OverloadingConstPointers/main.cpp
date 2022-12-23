#include <iostream>

int max(int* a, int* b) {
  std::cout << "max with int* called\n";
  return (*a > *b) ? *a : *b;
}

int max(const int* a, const int* b) {
  std::cout << "max with const int* called\n";
  return (*a > *b) ? *a : *b;
}

/*
int min(const int* a, const int* b) {
  return (*a < *b) ? *a : *b;
}
*/

int min(const int* const a, const int* const b) {   // Equivalent to previous signature
  std::cout << "a: " << a << '\n';
  std::cout << "b: " << b << '\n';
  std::cout << "*a: " << *a << '\n';
  std::cout << "*b: " << *b << '\n';
  std::cout << "&a: " << &a << '\n';
  std::cout << "&b: " << &b << '\n';
  return (*a < *b) ? *a : *b;
}

int main(){
  /*
  int a{10};
  int b{12};
  const int c{30};
  const int d{15};

  // auto result = max(&a, &b);
  auto result = max(&c, &d);
  */

  const int c{30};
  const int d{15};
  const int* p_c{&c};
  const int* p_d{&d};

  auto result = min(p_c, p_d);

  std::cout << "c: " << c << '\n';
  std::cout << "d: " << d << '\n';
  std::cout << "*p_c: " << *p_c << '\n';
  std::cout << "*p_d: " << *p_d << '\n';
  std::cout << "p_c/&c: " << &c << '\n';
  std::cout << "p_d/&d: " << &d << '\n';
  std::cout << "&p_c: " << &p_c << '\n';
  std::cout << "&p_d: " << &p_d << '\n';
  

  return 0;
}
