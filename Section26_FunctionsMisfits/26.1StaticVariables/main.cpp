#include <iostream>

unsigned int add_student(){
  static unsigned int student_count{0};  // Scope is within function, lifetime lasts for entire program run
  student_count++;
  return student_count;
}

void do_something(){
  --student_count;
}

int main(){

  /*
  std::cout << "student count: " << add_student() << '\n'; // 1
  std::cout << "student count: " << add_student() << '\n'; // 2
  std::cout << "student count: " << add_student() << '\n'; // 3
  */

  for(size_t i{}; i < 20; ++i){
    std::cout << "student count: " << add_student() << '\n'; // 1-20
  }

  return 0;
}
