#include <iostream>

void print_array(int* arr, unsigned int n) 
{ 
    for (unsigned int i = 0; i < n; i++){
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl;
}

void insertion_sort(int * array, unsigned int size) {
  if (size <= 1) return;

  int key{0};

  for (unsigned int i{1}; i < size; ++i) {
    key = array[i];
    int j{i-1};

    if (array[i] > array[j]) {
      continue;
      }

    while (j >= -1) {
      if ((j < 0) || (array[i] > array[j])) {
        ++j;
        for (unsigned int k{i}; k > j; --k){
          array[k] = array[k-1];
        }
        array[j] = key;
        break;
      }
      --j; 
    }
  }
}

int main(){

  int data[] = {6,3,5,7,4,2 }; 
  int size = sizeof(data)/sizeof(int);
  std::cout << "Before :" << std::endl;
  print_array(data,size);
  insertion_sort(data,size);
  std::cout << "After :" << std::endl;
  print_array(data,size);

  return 0;
}
