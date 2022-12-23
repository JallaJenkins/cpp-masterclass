#include <iostream>

consteval int get_value(int multiplier) {  // Force eval at compile time or throw compiler error
  return 3 * multiplier;
}

int main(){

  int result = get_value(4);  // This will work; using number literal

  int some_var{5};
  result = get_value(some_var);  // Will not work; cannot guarantee some_var value at compile time

  return 0;
}
