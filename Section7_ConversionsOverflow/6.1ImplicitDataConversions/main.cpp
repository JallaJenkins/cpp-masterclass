#include <iostream>

int main(){

  //		. The compiler applies implicit conversions
	// 			when types are different in 
	//			an expression
	//		. Conversions are always done from the smallest
	//			to the largest type in this case int is 
	//			transformed to double before the expression
	//			is evaluated.Unless we are doing an assignment
  
  double price {45.6};
  int units {10};

  int total_price = price * units; // units implicitly converted to double

  std::cout << "total price: " << total_price << std::endl;
  std::cout << "sizeof total price: " << sizeof(total_price) << std::endl;

  //Implicit conversions in assignments
	// The assignment operation is going to cause an implicit
	// narrowing conversion , y is converted to int before assignment

  int x {56};
  double y {45.44};
  double x = y + 35.4; // double to int

  std::cout << "x is now: " << x << std::endl;
  std::cout << "sizeof x is now: " << sizeof(x) << std::endl;
  

  return 0;
}
