#include <iostream>
#include "my_string.h"

int main(){

  /*
  CU::string new_string("Fancy");
  std::cout << "new_string: " << new_string << '\n';
  new_string.clear();
  std::cout << "new_string: " << new_string << '\n';
  */

  CU::string new_string{"Fancy", 5};
  std::cout << "new_string: " << new_string << '\n';
  std::cout << "new_string: " << new_string.insert(3, " pants ", 7) << '\n';
  std::cout << "new_string: " << new_string << '\n';

  new_string.append("whoopie!", 8);
  std::cout << "new_string: " << new_string << '\n';

  return 0;
}
