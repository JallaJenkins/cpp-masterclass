#include "point.h"
#include <iostream>

int main(){

  std::cout << '\n';
  std::cout << "Entering main:\n";

  Point point1(3.0, 3.0);
  std::cout << "distance: " << point1.length() << '\n';

  std::cout << '\n';
  std::cout << "Reading in the integers:\n";;

  std::cout << "point1.i1: " << point1.i1.get_value() << '\n';
  std::cout << "point1.i2: " << point1.i2.get_value() << '\n';
  std::cout << "point1.i3: " << point1.i3.get_value() << '\n';
  std::cout << "point1.i4: " << point1.i4.get_value() << '\n';

  point1.i1.set_value(8); // works, i1 is not const
  // point1.i2.set_value(10); // Complier error, i2 is const

  std::cout << "point1.p_i5(pointer): " << point1.p_i5->get_value() << '\n';

  std::cout << "Point::i6: " << Point::i6.get_value() << '\n';
  std::cout << "Point::i7: " << Point::i7.get_value() << '\n';

  Point::i6.set_value(50);
  // Point::i7.set_value(60); // Complier error: i6 is const

  std::cout << '\n';
  std::cout << "Leaving main\n";

  return 0;
}
