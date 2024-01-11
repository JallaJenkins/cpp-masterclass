#include <iostream>
#include <vector>

template <typename T>
void print_vec(const std::vector<T>& vec){
  for(size_t i{}; i < vec.size(); ++i){
    std::cout << vec[i] << " ";
  }
  std::cout << '\n';
}

template <typename T>
void print_raw_array(const T* p, size_t size){
  std::cout << "data = ";
  for(size_t i{}; i < size; ++i)
    std::cout << p[i] << ' ';
  std::cout << '\n';
}

int main(){

  // Constructing vectors
  std::vector<std::string> vec1 {"The", "sky", "is", "blue", "my", "friend"};
  std::cout << "vec1[2]: " << vec1[1] << '\n';
  print_vec(vec1);

  std::cout << "-------------------\n";

  std::vector<int> ints1;
  std::cout << "ints1: ";
  print_vec(ints1);

  std::vector<int> ints2 = {1, 2, 3, 4};
  std::vector<int> ints3 {11, 22, 33, 44};

  std::cout << "ints2: ";
  print_vec(ints2);
  std::cout << "ints3: ";
  print_vec(ints3);

  std::vector<int> ints4(20, 55); // 20 items, all init to 55
  std::cout << "ints4: ";
  print_vec(ints4);

  std::vector<int> ints5 {20, 55};  // 2 items: 20 and 55
  std::cout << "ints5: ";
  print_vec(ints5);

  // Accessing elements

  std::cout << "-------------\n";
  std::cout << "Accessing elements in a vector:\n";
  std::cout << "vec1[2]: " << vec1[2] << '\n';
  std::cout << "vec1.at(3): " << vec1.at(3) << '\n';
  std::cout << "vec1.front(): " << vec1.front() << '\n';
  std::cout << "vec1.back(): " << vec1.back() << '\n';

  // Using data method
  print_raw_array(vec1.data(), vec1.size());

  // Pushing back
  ints1.push_back(100);
  ints1.push_back(200);
  ints1.push_back(300);
  ints1.push_back(500);
  std::cout << "ints1: ";
  print_vec(ints1);

  // Popping back
  ints1.pop_back();
  std::cout << "ints1: ";
  print_vec(ints1);

  return 0;
}
