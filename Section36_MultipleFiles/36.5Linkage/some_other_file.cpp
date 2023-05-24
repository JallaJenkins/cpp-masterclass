#include <iostream>

// void do_something(){
//   std::cout << "age: " << age << '\n';  // not linked from main
// }

const double distance{};  // Declaration and definition w/ internal linkage

extern int item_count; // Declaraion of var defined in another TU

void print_distance(){
  std::cout << "distance (other_file): " << distance << ", &distance: " << &distance << '\n';
}

void print_item_count() {
  std::cout << "item_count (other_file): " << item_count << ", &item_count: " << &item_count << '\n';
}
