#include <iostream>

int main(){

  int data1[] {1, 2, 3, 4, 5, 66, 77};
  int data2[] {10, 20, 30, 40, 50, 60};
  unsigned int size1 {7};
  unsigned int size2 {6};

  int* new_array = new int[size1 + size2];


  for (unsigned int i{0}; i < size1; ++i) {
    // int number = data1[i];
    new_array[i] = data1[i];
  }

  for (unsigned int i{0}; i < size2; ++i) {
    new_array[size1 + i] = data2[i];
  }

  for (unsigned int i{0}; i < size1 + size2; ++i) {
    std::cout << new_array[i] << ' ';
  }
  
  delete[] new_array;

  return 0;
}
