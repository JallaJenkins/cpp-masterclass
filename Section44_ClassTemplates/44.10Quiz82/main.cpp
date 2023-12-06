#include <iostream>
#include "map.h"

int main(){
  Map<const char*> m1("Steve","Murphy");
  std::string last_name {"Steve"};
  std::string first_name{"Murphy"};
  Map<const char*> m2(last_name.c_str(),first_name.c_str());
  auto result = m1.compare_to(m2);
  std::cout << "result : " << std::boolalpha << result << std::endl;
  m1.print_info();
 
  return 0;
}
