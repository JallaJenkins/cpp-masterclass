#include <iostream>
#include <iomanip>

int main(){

  const size_t ROWS{12};
  const size_t COLS{3};

  /*
  std::cout << "Nested for loops:\n";

  for (size_t row{0}; row < ROWS; ++row){

    for (size_t col{0}; col < COLS; ++col){

      std::cout << "(row " << std::setw(2) << row << ", col " << std::setw(2) << col << ") ";
      // std::cout << "(row " << row << ", col " << col << ") ";
    }
    std::cout << "\n";
  }
  */

  std::cout << "Nested while loops:\n";

  size_t row{0};
  size_t col{0};

  while (row < ROWS){

    while (col < COLS){
      std::cout << "(row " << std::setw(2) << row << ", col " << std::setw(2) << col << ") ";
      ++col;
    }
    std::cout << "\n";
    col = 0;
    ++row;
  }

  return 0;
}
