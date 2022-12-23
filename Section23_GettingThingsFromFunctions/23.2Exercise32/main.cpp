#include <iostream>

void is_sum_even(int data[], unsigned int size, bool& result) {
  int sum{0};
  for(unsigned int i{0}; i < size; ++i) {
    sum += data[i];
  }
  result = (sum % 2 == 0);
}

int main(){

  int array[] = {1, 2, 3, 4, 5, 6, 7};
  bool result;
  is_sum_even(array, std::size(array), result);
  std::cout << std::boolalpha;
  std::cout << "is_sum_even: " << result << '\n';

  return 0;
}
