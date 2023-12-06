#include <iostream>
#include "exercise.h"

int main(){

  // Map<int> m1(11,22);
  // Map<int> m2(11,22);
  // auto result = m1.compare_to(m2);
  // std::cout << "result : " << std::boolalpha << result << std::endl;
  // m1.print_info();

  Map<const char*> m1("Daniel","Gakwaya");
  std::string last_name {"Daniel"};
  std::string first_name{"Gakwaya"};
  Map<const char*> m2(last_name.c_str(),first_name.c_str());
  auto result = m1.compare_to(m2);
  std::cout << "result : " << std::boolalpha << result << std::endl;

  return 0;
}
