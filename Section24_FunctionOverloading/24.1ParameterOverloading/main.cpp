#include <iostream>
#include <string>
#include <string_view>

int max(int a, int b) {
  std::cout << "Int overload called\n";
  return (a > b) ? a : b;
}

double max(double a, double b) {
  std::cout << "Double overload called\n";
  return (a > b) ? a : b;
}

double max(int a, double b) {
  std::cout << "int, double overload called\n";
  return (a > b) ? a : b;
}

double max(double a, int b) {
  std::cout << "double, int overload called\n";
  return (a > b) ? a : b;
}

double max(double a, int b, int c) {
  std::cout << "double, int, int overload called\n";
  return (a > b) ? a : b;
}

std::string_view max(std::string_view a, std::string_view b) {
  std::cout << "string_view overload called\n";
  return (a > b) ? a : b;
}

int main(){

  int x{4};
  int y{9};
  double a{5.4};
  double b{7.4};

  auto result = max(b, x, y);

  max("Hello", "World");

  return 0;
}
