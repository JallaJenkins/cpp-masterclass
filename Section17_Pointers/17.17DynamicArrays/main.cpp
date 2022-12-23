#include <iostream>

int main(){

  size_t size{10};

  // Different ways you can declare an array dynamically

  double* p_salaries{new double[size]};  // Contains garbage values
  int* p_students{new(std::nothrow) int[size]{}};  // All values init to 0
  double* p_scores{new(std::nothrow) double[size]{1, 2, 3, 4, 5}}; // Remaning values 0

  // nullptr check and use the allocated array
  if(p_scores) {
    std::cout << "size of scores (regular pointer): " << sizeof(p_scores) << '\n';
    std::cout << "Successfully allocated memory for scores.\n";

    // Print out elements. Can use regular array notation or pointer arithmetic
    for (size_t i{}; i < size; ++i) {
      std::cout << "value: " << p_scores[i] << " : " << *(p_scores + i) << '\n';
    }
  }

  delete[] p_salaries;
  p_salaries = nullptr;
  delete[] p_students;
  p_students = nullptr;
  delete[] p_scores;
  p_scores = nullptr;

  // Static array vs dynamic array
  std::cout << "=============================================\n";

  int scores[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // On the stack; static array

  std::cout << "scores size: " << std::size(scores) << '\n';
  for (auto score : scores) {
    std::cout << "value: " << score << '\n';
  }

  int* p_scores1 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // std::cout << "p_scores1 size: " << std::size(p_scores1) << '\n';  // Compiler error
  // std::size doesn't work with dynamic arrays

  // for (auto scores : p_scores1) {   // Compiler error
  //   std::cout << "A score!\n";      // Cannot use ranged-based for-loops with 
                                       // dynamic arrays
  // }

  return 0;
}
