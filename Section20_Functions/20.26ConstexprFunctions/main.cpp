#include <iostream>

constexpr int get_value(int multiplier) {
  return 3 * multiplier;
}

int main(){

  // constexpr int result = get_value(4); // Evaluated at compile time
  // std::cout << "result: " << result << '\n';

  int some_var{5};
  int result = get_value(some_var); // Evaluated at run time b/c runtime variable is in argument
  std::cout << "result: " << result << '\n';

  return 0;
}
