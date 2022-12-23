#include <iostream>

double max(double* numbers, size_t count) {
  std::cout << "double overload called\n";
  double maximum{0};

  for(size_t i{0}; i < count; ++i) {
    if(numbers[i] > maximum)
      maximum = numbers[i];
  }
  return maximum;
}

int max(int* numbers, size_t count) {
  std::cout << "int overload called\n";
  int maximum{0};

  for(size_t i{0}; i < count; ++i) {
    if(numbers[i] > maximum)
      maximum = numbers[i];
  }
  return maximum;
}

/*
int max(int numbers[], size_t count) {  // Compiler error - same declaration as 
                                        // previous
  std::cout << "int overload called\n";
  int maximum{0};

  for(size_t i{0}; i < count; ++i) {
    if(numbers[i] > maximum)
      maximum = numbers[i];
  }
  return maximum;
}
*/

int main(){

  double doubles[]{10.0, 30.0, 12.3};
  int ints[] {1, 2, 5, 2, 8, 4};

  auto result = max(doubles, std::size(doubles));
  std::cout << "result: " << result << '\n';

  auto result_int = max(ints, std::size(ints));
  std::cout << "result: " << result_int << '\n';

  return 0;
}
