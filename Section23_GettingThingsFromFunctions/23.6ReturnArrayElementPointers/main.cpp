#include <iostream>

const double* find_max_address(const double scores[], size_t count);

int main(){

  double array[] {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 79.0, 10.0};
  // std::cout << "max: " << *(find_max_address(array, std::size(array))) << '\n';
  const double* p_max = find_max_address(array, std::size(array));
  std::cout << "max: " << *p_max << '\n';

  return 0;
}

const double* find_max_address(const double scores[], size_t count) {

  size_t max_index{};
  double max{};

  for (size_t i{0}; i < count; ++i) {
    if(scores[i] > max) {
      max = scores[i];
      max_index = i;
    }
  }
  return &scores[max_index];
}
