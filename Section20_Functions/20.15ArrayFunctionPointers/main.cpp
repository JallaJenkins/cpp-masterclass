#include <iostream>
#include <array>

// double sum(double scores[], size_t count) {
  double sum(double* scores, size_t count) {
  double scores_sum{};
  // std::cout << "sizeof(scores): " << sizeof(scores) << '\n';
  // size_t arr_size {std::size(scores)};

  for(size_t i{0}; i < count; ++i) {
    scores_sum += scores[i];
  }
  return scores_sum;
}

int main(){
  double my_scores[]{10.5, 34.3, 4.8, 6.5};
  // size_t arr_size {std::size(my_scores)};

  double result = sum(my_scores, std::size(my_scores));

  // std::cout << "sizeof(my_scores): " << sizeof(my_scores) << '\n';
  // std::cout << "sizeof(int*): " << sizeof(int*) << '\n';
  // std::cout << "std::size(my_scores): " << arr_size << '\n';

  std::cout << "result: " << result << '\n';

  return 0;
}
