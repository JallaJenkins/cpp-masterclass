#include <iostream>
extern const double distance;  // Declaration

void print_distance() {
  std::cout << "distance(some_other_file): " << distance << '\n';
  std::cout << "&distance(some_other_file): " << &distance << '\n';
}
/*
// external -> internal linkage
static void some_other_function(){
  std::cout << "Hello there\n";
}
*/

namespace {
  void some_other_function(){
  std::cout << "Hello there\n";
}
}