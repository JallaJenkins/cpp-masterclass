#include <iostream>

int main(){

  int scores[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // Printing positions
  std::cout << '\n';
  std::cout << "Scores:";
  for (auto score: scores) {
    std::cout << ' ' << score;
  } 

  // for (auto score: scores) {  // Uses COPIES of array elements
  //   score = score * 10;
  // }

  for (auto& score: scores) {  // Uses original array elmeents
    score = score * 10;
  }

  std::cout << '\n';
  std::cout << "Scores:";
  for (auto score: scores) {
    std::cout << ' ' << score;
  } 

  return 0;
}
