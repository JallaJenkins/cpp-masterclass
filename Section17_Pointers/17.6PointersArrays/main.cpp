#include <iostream>

int main(){

  int scores[10] {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

  int* p_scores{scores};

  // Print the address
  std::cout << "scores: " << scores << '\n';  // Array
  std::cout << "p_scores: " << p_scores << '\n';  // Pointer
  std::cout << "&scores[1]: " << &scores[1] << '\n';

  // Print content
  std::cout << '\n';
  std::cout << "Printing out data at array address:\n";
  std::cout << "*scores: " << *scores << '\n';
  std::cout << "scores[0]: " << scores[0] << '\n';
  std::cout << "p_scores: " << p_scores << '\n';
  std::cout << "p_scores[0]: " << p_scores[0] << '\n';

  // Differences
  int number {21};
  p_scores = &number;
  // scores = &number;  // Compile err: The array name is a pointer, but it is special
                     // It contains extra information about the array
                     // Thus you can't assign it like a regular pointer

  std::cout << "p_scores: " << p_scores << '\n';

  // std::size has no meaning for raw pointers
  std::cout << "size(scores): " << std::size(scores) << '\n';
  // std::cout << std::size(p_scores) << '\n';  // Compiler error


  return 0;
}
