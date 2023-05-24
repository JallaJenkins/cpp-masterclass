#include <iostream>

void some_function(){
  int age{34};  // no linkage
  std::cout << "age: " << age << ", &age: " << &age << '\n';
}

// int age = 33;

const double distance{45.8};  // internal linkage

int item_count{6}; // external linkage

extern void print_distance();  // external by default
void print_item_count();  // external by default

int main(){

  // some_function();

  // // age from some_function has no linkage
  // std::cout << "age: "<< age << ", &age: " << &age <<  '\n';  // prints global age w/ no conflict

  // std::cout << "distance: " << distance << ", &distance:" << &distance << '\n';
  // std::cout << "------------------------------\n";
  // print_distance();

  std::cout << "item_count (main): " << item_count << ", &item_count: " << &item_count << '\n';
  std::cout << "----------------------------------\n";
  print_item_count();


  return 0;
}
