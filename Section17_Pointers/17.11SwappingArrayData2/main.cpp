#include <iostream>

int main(){

  int arr0[] {1, 2, 3, 4, 5};
  int arr1[] {6, 7, 8, 9, 10};
  int* p_arr0{arr0};
  int* p_arr1{arr1};

  // Print arr0
  std::cout << "arr0: ";
  for (size_t i{}; i < std::size(arr0); ++i) {
    std::cout << *(p_arr0 + i) << ' ';
  }
  std::cout << '\n';

  // Print arr1
  std::cout << "arr1: ";
  for (size_t i{}; i < std::size(arr1); ++i) {
    std::cout << (*p_arr1 + i) << ' ';
  }
  std::cout << '\n';

  /*
  // Swapping data the hard way:
  int temp[5];
  for(size_t i{0}; i < std::size(arr1); ++i) {
    temp[i] = arr1[i];
  }
  for(size_t i{0}; i < std::size(arr0); ++i) {
    arr1[i] = arr0[i];
  }
  for(size_t i{0}; i < std::size(temp); ++i) {
    arr0[i] = temp[i];
  }
  */

  /*
  // This won't work:
  int* temp{nullptr};

  temp = arr1;
  arr0 = arr1;
  */

  int* temp{nullptr};

  temp = p_arr1;
  p_arr1 = p_arr0;
  p_arr0 = temp;

  // Print arr0
  std::cout << "arr0: ";
  for (size_t i{}; i < std::size(arr0); ++i) {
    std::cout << (p_arr0[i]) << ' ';
  }
  std::cout << '\n';

  // Print arr1
  std::cout << "arr1: ";
  for (size_t i{}; i < std::size(arr1); ++i) {
    std::cout << *p_arr1 + i << ' ';
  }
  std::cout << '\n';

  return 0;
}
