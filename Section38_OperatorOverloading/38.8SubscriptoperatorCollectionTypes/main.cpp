#include <iostream>
#include "scores.h"

int main(){

  Scores scores_math("Math");
  scores_math.print_info();

  std::cout << "Data change:\n";
  scores_math[5] = 88.3;
  scores_math.print_info();

  scores_math[0] = 20.4;

  std::cout << '\n';
  const Scores scores_geo("Geography");
  std::cout << "scores_geo[5]: " << scores_geo[5] << '\n';

  return 0;
}
