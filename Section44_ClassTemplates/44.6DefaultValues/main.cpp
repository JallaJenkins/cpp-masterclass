#include <iostream>
#include "boxcontainer.h"

int main(){

  /*
  BoxContainer int_box; // Default to <int, 10>
  int_box.add(10);
  int_box.add(10);
  int_box.add(10);
  int_box.add(10);
  int_box.add(10);
  int_box.add(10);
  int_box.add(10);
  int_box.add(10);
  int_box.add(10);
  int_box.add(10);

  std::cout << "int_box: " << int_box << '\n';

  int_box.add(55); // This is over the maximum
  */

  /*
  BoxContainer<double> double_box; // Max default to 10
  double_box.add(10.0);
  std::cout << "double_box: " << double_box << '\n';
  */

  BoxContainer<char, 5> char_box;
  char_box.add('m');
  char_box.add('m');
  char_box.add('m');
  char_box.add('m');
  char_box.add('m');

  std::cout << "char_box: " << char_box << '\n';

  char_box.add('m');
  std::cout << "char_box: " << char_box << '\n';
  return 0;
}
