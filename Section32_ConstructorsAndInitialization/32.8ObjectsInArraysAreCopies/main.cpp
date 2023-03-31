#include <iostream>
#include "person.h"

int main(){

  Person p1("John", "Snow", 25);
  Person p2("Sam", "Grey", 45);
  Person p3("Johnny", "Drill", 5);
  p1.print_info();
  p2.print_info();
  p3.print_info();

  std::cout << "------------------\n";

  Person students[] {p1, p2, p3};

  for(size_t i{}; i < std::size(students); ++i){
    students[i].print_info();
  }
  
  std::cout << "------------------\n";

  // for(Person p: students){ // Creates & destroys copy for each iteration
  //   p.print_info();
  // }

  for(Person& p: students){  // Operates directly on objects in array
    p.print_info();
  }

  return 0;
}
