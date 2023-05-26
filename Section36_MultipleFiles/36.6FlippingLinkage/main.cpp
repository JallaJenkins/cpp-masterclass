#include <iostream>

// internal -> external linkage
extern const double distance{45.7};

void print_distance();
void some_other_function();

void yet_another_function() {
  std::cout << "parent\n";
}

namespace {
  void yet_another_function() {
    std::cout << "Another!\n";
  }
}

int main(){

  std::cout << "distance(main): " << distance << '\n';
  std::cout << "&distance(main): " << &distance << '\n';
  std::cout << '\n';
  print_distance();
  std::cout << "----------------\n";
  // some_other_function();

  ::yet_another_function();

  return 0;
}
