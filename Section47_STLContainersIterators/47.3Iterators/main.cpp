#include <iostream>
#include <vector>
#include <array>

template <typename T>
void print_collection(const T& collection){
  auto it = collection.begin();

  std::cout << " [";
  while(it != collection.end()){
    std::cout << " " << *it;
    ++it;
  }
  std::cout << " ]";
}

int main(){

  std::vector<int> ints1 {11, 22, 33, 44};
  std::array<int, 4> ints2 {100, 200, 300, 400};

  std::vector<int>::iterator it_begin = ints1.begin();
  std::vector<int>::iterator it_end = ints1.end();

  std::cout << std::boolalpha;
  std::cout << "*it_begin (first element): " << *it_begin << '\n';
  std::cout << "it_begin == it_end: " << (it_begin == it_end) << '\n';
  std::cout << "it_begin == ints.end(): " << (it_begin == ints1.end()) << '\n';

  ++it_begin;
  std::cout << "*it_begin (second element): " << *it_begin << '\n';
  std::cout << "it_begin == it_end: " << (it_begin == it_end) << '\n';

  ++it_begin;
  std::cout << "*it_begin (third element): " << *it_begin << '\n';
  std::cout << "it_begin == it_end: " << (it_begin == it_end) << '\n';

  ++it_begin;
  std::cout << "*it_begin (fourth element): " << *it_begin << '\n';
  std::cout << "it_begin == it_end: " << (it_begin == it_end) << '\n';

  ++it_begin;
  std::cout << "*it_begin (after fourth element): " << *it_begin << '\n';
  std::cout << "it_begin == it_end: " << (it_begin == it_end) << '\n';

  std::cout << "\n----------------------\n\n";
  std::cout << "ints1: ", print_collection(ints1), std::cout << '\n';
  std::cout << "ints2: ", print_collection(ints2), std::cout << '\n';

  

  return 0;
}
