#include <iostream>

int main(){

  int numbers[] {1,112,4,5,8,12,13,16,71,92};
  unsigned int collection_size{std::size(numbers)};

  bool sorted{true};

  for (size_t i{1}; i < collection_size; ++i) {
    if (numbers[i-1] > numbers[i]) {
      sorted = false;
      break;
    }
  }


  return 0;
}
