#include <iostream>
#include <array>
#include <experimental/array>

template <typename T, size_t Size>
void print_array(const std::array<T, Size>& arr){
  for(size_t i{}; i < arr.size(); ++i){
    std::cout << arr[i] << " ";
  }
  std::cout << '\n';
}

template <typename T>
void print_raw_array(const T* p, std::size_t size)
{
    std::cout << "data = ";
    for (std::size_t i = 0; i < size; ++i)
        std::cout << p[i] << ' ';
    std::cout << std::endl;
}

int main(){

  std::array<int, 3> int_array1;        // Junk data
  std::array<int, 3> int_array2{1, 2};  // {1, 2, 0}
  std::array<int, 3> int_array3{};      // {0, 0, 0}
  std::array int_array4{1, 2};          // Compiler will deduce <int, 2>

  // std::array<int, 3> int_array5{1, 2, 3, 4, 5};  // Too many elements - compiler error
  // Can deduce the type with auto using <experiemental//array> lib
  // Not all compilers will be able to handle <experimental/array>
  auto int_array6 = std::experimental::make_array(1, 2, 3, 4, 5);
  
  std::cout << "int_array1: ", print_array(int_array1);
  std::cout << "int_array2: ", print_array(int_array2);
  std::cout << "int_array3: ", print_array(int_array3);
  std::cout << "int_array4: ", print_array(int_array4);
  std::cout << "int_array6: ", print_array(int_array6);

  // Adding and removing - limited functionality
  std::cout << '\n';
  std::cout << "Filling the array:\n";
  int_array1.fill(321);
  int_array4.fill(500);
  std::cout << "int_array1: ", print_array(int_array1);
  std::cout << "int_array4: ", print_array(int_array4);

  // Accessing elements
  std::cout << '\n';
  std::cout << "Accessing elements in one array:\n";
  std::cout << "int_array2[0]: " << int_array2[0] << '\n';
  std::cout << "int_array2.at(1): " << int_array2.at(1) << '\n';
  std::cout << "int_array2.front(): " << int_array2.front() << '\n';
  std::cout << "int_array2.back(): " << int_array2.back() << '\n';

  // Data method
  print_raw_array(int_array2.data(), int_array2.size());






  return 0;
}
