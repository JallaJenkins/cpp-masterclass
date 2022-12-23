#include <iostream>

double sum(double scores[5890436], size_t count){  // Compiler will ignore the size value in scores[]
  double sum{};

  for(size_t i{}; i < count; ++i){
    sum += scores[i];
  }
  return sum;
}

int main(){

  double student_scores[] {10.0, 20.0, 30.0, 4, 67, 3, 5, 8, 6};  // Less than 5 arguments
  double result = sum(student_scores, std::size(student_scores));
  std::cout << "result: " << result << '\n';

  return 0;
}
