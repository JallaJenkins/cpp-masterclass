#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

template <typename T>
void print_collection(const T& collection){
  std::cout << "Collection: [ ";
  for(const auto& elt : collection) {
    std::cout << elt << " ";
  }
  std::cout << "]\n";
}

int main(){

  std::vector<int> numbers {11, 2, 6, 4, 8, 3, 17, 9};
  print_collection(numbers);

  // std::ranges::all_of()
  std::cout << "std::ranges::all_of(): " << '\n';

  auto odd = [](int n){return n % 2 != 0;};
  auto result = std::ranges::all_of(numbers, odd);

  if(result){
    std::cout << "All elements are odd\n";
  } else {
    std::cout << "Some elements are not odd\n";
  }

  // For each
  std::cout << '\n';
  std::cout << "std::range::for_each():\n";
  std::ranges::for_each(numbers, [](int& n){n*=2;});
  print_collection(numbers);

  // Sort
  std::cout << '\n';
  std::cout << "std::range::sort():\n";
  std::ranges::sort(numbers);
  print_collection(numbers);

  // Find
  std::cout << '\n';
  std::cout << "std::ranges::find_if():\n";
  auto odd_n_position = std::ranges::find_if(numbers, odd);
  if (odd_n_position != std::end(numbers)) {
    std::cout << "Found an odd number: " << *odd_n_position << '\n';
  } else {
    std::cout << "No odd number found\n";
  }

  // Copy into output stream on the fly
  std::cout << '\n';
  std::cout << "numbers: ";
  // std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));
  std::ranges::copy(numbers, std::ostream_iterator<int>(std::cout, " "));
  std::cout << '\n';

  std::cout << "Done!\n";
  return 0;
}
