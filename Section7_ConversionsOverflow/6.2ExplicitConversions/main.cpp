#include <iostream>

int main(){

  //Implicit cast will add up the doubles,
	//then turn result into int for assignment
  
  double x {12.5};
  double y {34.6};
  int sum {x + y};

  std::cout << "Implicit cast sum: " << sum << std::endl;

  //Explicity cast : cast then sum up

  sum = static_cast<int>(x) + static_cast<int>(y);

  std::cout << "Cast each then sum: " << sum << std::endl;

  //Explicit cast : sum up then cast, same thing as implicit cast

  sum = static_cast<int>(x + y);

  std::cout << "Cast after sum: " << sum << std::endl;

  //Old style C-cast
  double PI {3.14};

  int int_pi = (int)(PI);

  std::cout << "PI: " << PI << std::endl;
  std::cout << "C-style cast PI: " << int_pi << std::endl;

  int cast_pi = static_cast<int>(PI);
  std::cout << "static cast PI: " << cast_pi << std::endl;


  return 0;
}
