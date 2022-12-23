#include <iostream>

int main(){

  int numbers[] {7,5,7,2,4,1,7,4,2};
  int collection_size {9};

  int unique_numbers[20]{numbers[0]};
  int unique_number_count{1};
  
  
  for (size_t i {1}; i < collection_size; ++i) {

    bool number_is_unique {true};

    for (size_t j {0}; j < unique_number_count; ++j) {
      if (numbers[i] == unique_numbers[j]){
        number_is_unique = false;
        break;
      }
    }

    if (number_is_unique) {
      unique_numbers[unique_number_count] = numbers[i];
      ++unique_number_count;
    }

  }

  std::cout << "The collection contains " << unique_number_count;
  std::cout << " unique numbers, they are : ";

  for (size_t i{0}; i < unique_number_count; ++i) {
    std::cout << unique_numbers[i] << ' ';
  }


    // std::cout << numbers[0] << '\n';
    // for (auto number: unique_numbers) {
    //   std::cout << number << '\n';
    // }
  return 0;
}
