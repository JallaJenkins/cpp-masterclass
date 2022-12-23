#include <iostream>

/*
// The right way
auto process_number(int value) {
  if(value < 10) return 22;  // returns int literal
  else return 55;  // returns int literal
}
*/

/*
// Compiler error - cannot return differnt return types
auto process_number(int value) {
  if(value < 10) return 22;  // returns int literal
  else return 55.1;  // returns double literal
}
*/

// Ways to fix:

// int process_number(int value) {  // Implicit conversion
// double process_number(int value) {  // Implicit conversion
//   if(value < 10) return 22;  // returns int literal
//   else return 55.1;  // returns double literal
// }

auto process_number(int value) { 
  if(value < 10) return static_cast<double>(22);  // use static cast
  else return 55.1;  // returns double literal
}


int main(){

  auto result = process_number(17);
  std::cout << "result: " << result << '\n';
  std::cout << "sizeof(result): " << sizeof(result) << '\n';
  std::cout << "sizeof(int): " << sizeof(int) << '\n';
  std::cout << "sizeof(double): " << sizeof(double) << '\n';


  return 0;
}
