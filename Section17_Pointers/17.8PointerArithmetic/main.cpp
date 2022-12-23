#include <iostream>

int main(){

  // Increment/Decrement pointer addresses manually

  int scores[10] {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

  // scores++;

  int* p_score {scores};

  /*
  std::cout << "Values in scores array {p_score pointer increment}:\n";

  std::cout << "Address: " << p_score << ", value: " << *p_score << '\n';
  ++p_score;  // moves forward 4 bytes = size of int
  std::cout << "Address: " << p_score << ", value: " << *p_score << '\n';
  ++p_score;  // moves forward 4 bytes = size of int
  std::cout << "Address: " << p_score << ", value: " << *p_score << '\n';
  ++p_score;  // moves forward 4 bytes = size of int
  std::cout << "Address: " << p_score << ", value: " << *p_score << '\n';
  ++p_score;  // moves forward 4 bytes = size of int
  std::cout << "Address: " << p_score << ", value: " << *p_score << '\n';
  ++p_score;  // moves forward 4 bytes = size of int
  std::cout << "Address: " << p_score << ", value: " << *p_score << '\n';
  ++p_score;  // moves forward 4 bytes = size of int
  std::cout << "Address: " << p_score << ", value: " << *p_score << '\n';
  ++p_score;  // moves forward 4 bytes = size of int
  std::cout << "Address: " << p_score << ", value: " << *p_score << '\n';
  ++p_score;  // moves forward 4 bytes = size of int
  std::cout << "Address: " << p_score << ", value: " << *p_score << '\n';
  ++p_score;  // moves forward 4 bytes = size of int
  std::cout << "Address: " << p_score << ", value: " << *p_score << '\n';
  ++p_score;  // moves forward 4 bytes = size of int
  */

  /*
  std::cout << '\n';
  std::cout << "Explicit addition of integer:\n";
  p_score = scores;  // Reset pointer to start of array
  std::cout << "scores[4]: " << *(p_score + 4) << '\n';  // Moves forward by 4 * int size
  */

  /*
  // Using loops
  p_score = scores;
  std::cout << '\n';
  std::cout << "Pointer arithmetic on p_scores pointer and a for loop:\n";
  for (size_t i{0}; i < std::size(scores); ++i) {
    std::cout << "Value: " << *(p_score + i) << '\n';  // p_scores + i = scores[i]]
  }
  */

  /*
  // Can also do arithmetic on the array name just like any pointer
  p_score = scores;
  std::cout << '\n';
  std::cout << "Pointer arithmetic on array name:\n";
  for (size_t i{0}; i < std::size(scores); ++i) {
    std::cout << "Value: " << *(scores + i) << '\n';
  }
  */

  /*
  // Printing in reverse order
  std::cout << '\n';
  std::cout << "Elements in reverse order with decrementing pointer arithmetic:\n";
  for (size_t i{std::size(scores)}; i > 0; --i) {
    std::cout << "Value: " << *(scores + i - 1) << '\n';
  }
  */

  /*
  // Print in reverse order using -- operator on p_score
  std::cout << '\n';
  std::cout << "Elements in reverse order using -- on p_score:\n";
  p_score = scores + std::size(scores) - 1;
  for (size_t i{std::size(scores)}; i > 0; --i) {
    std::cout << "Value: " << *(p_score--) << '\n';
  }
  */

  /*
  // Printing in reverse using array index notation
  std::cout << '\n';
  std::cout << "Elements in reverse order using array index notation:\n";
  p_score = scores + std::size(scores) - 1;
  for (size_t i{std::size(scores)}; i > 0; --i) {
    std::cout << "Value: " << scores[i-1] << '\n';
  }
  */

  p_score = scores;
  scores[0] = 31;
  *(scores + 1) = 32;  // Equivalent to scores[1] = 32
  *(p_score + 2) = 33;  // Equivalent to scores[2] = 33

  std::cout << '\n';
  std::cout << "Array after modifing first 3 elements:\n";
  for (size_t i{0}; i < std::size(scores); ++i) {
    std::cout << "Value: " << scores[i] << '\n';
  }

  return 0;
}
