#include <iostream>

double add_1(double n){
  return n + 1;
}

double multiply_by_2(double n) {
  return n * 2;
}

void modify(double* numbers, double(*modifier)(double n), int size){
  for(size_t i; i < size; ++i) {
    numbers[i] = modifier(numbers[i]);
  }
}

int main(){

  double scores[] {10.1,20.3,30.2,40.3};

  // modify(scores,add_1,4); // calling the modify function with add_1 as the callback
  // std::cout << "data [";
  // for(unsigned int i{}; i < std::size(scores); ++ i){
  //     std::cout << scores[i] << " ";
  // }
  // std::cout << "]" << std::endl;

  modify(scores,multiply_by_2,4);
  std::cout << "data [";
  for(unsigned int i{}; i < std::size(scores); ++ i){
      std::cout << scores[i] << " ";
  }
  std::cout << "]" << std::endl;

  return 0;
}
