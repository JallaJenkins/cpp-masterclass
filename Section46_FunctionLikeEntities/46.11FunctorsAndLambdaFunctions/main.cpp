#include <iostream>

int main(){

  int result = [](int x, int y) -> int {return x + y;}(7, 3);
  // Compiler will generate a functor to capture this lambda function
  std::cout << "result: " << result << '\n';

  // Auto type deduction can help deduce the type of the generates lambda function
  // We don't have direct access to that in our code
  // The type will be a randomly generated name for the functor class
  auto func = [] (int x, int y) -> int {return x + y;};
  result = func(10, 20);
  std::cout << "result: " << result << '\n';



  return 0;
}
