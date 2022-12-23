#include <iostream>
#include <string>
#include <string_view>

// void say_my_name(const std::string& name) {
//   std::cout << "Hello your name is: " << name << '\n';
// }

void say_my_name(std::string_view name) {
  std::cout << "Hello your name is: " << name << '\n';
}

int main(){

  std::string some_name("Jason");
  // say_my_name(some_name); // No conversion - runs fine
  say_my_name("Jason"); // Implicit conversion to non-const reference - compiler error
                        // Can be fixed by making the parameter const
                        // Best to use std::string_view as parameter type

  say_my_name(some_name);
  say_my_name(std::string_view("Jason"));

  return 0;
}
