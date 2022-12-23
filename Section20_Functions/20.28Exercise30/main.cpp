#include <iostream>

int max_subsequence_sum(int sequence[], unsigned int size) {

  int val_max{sequence[0]};

  for (unsigned int i{0}; i < size; ++i) {
    int current_sum {0};

    for (unsigned int j{i}; j < size; ++j) {
      current_sum += sequence[j];

      if (current_sum > val_max) {
        val_max = current_sum;
      }
    }
  }
  return val_max;
}

int main(){

  int data[] {3, -4, 6, 1, 1, -2, 2, 3};
  int sum = max_subsequence_sum(data, std::size(data));
  std::cout << "Max subsequence sum: " << sum << '\n';



  return 0;
}
