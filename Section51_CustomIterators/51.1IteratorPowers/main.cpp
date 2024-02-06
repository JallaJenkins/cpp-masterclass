#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>

template <typename T>
std::ostream& operator<<( std::ostream& out,const  std::vector<T>& vec){
    out << " [ ";
    for(auto i : vec){
        out << i  << " ";
    }
    out << "]";
    return out;
}

int main(){

  // Source collection
  std::vector<int> numbers {1, 9, 3, 7, 2, 5, 4, 6, 89};
  std::cout << "numbers: " << numbers << '\n';

  // Iterators returned by begin() are input iterators. All that is required is that we can read through them - the data is "input" into the iterator. 
  // For std::ranges::find, that is sufficient, so a const iterator will work
  if(std::ranges::find(numbers.cbegin(), numbers.cend(), 8) != numbers.cend()){
    std::cout << "numbers contains: " << 8 << '\n';
  } else {
    std::cout << "numbers does not contain: " << 8 << '\n';
  }

  // Output iterator: std::ranges::copy
  // Iterator through which we can write
  std::cout << "-------------------(copy>----------------\n";
  std::vector<int> dest(numbers.size());
  // std::vector<int> dest;  // BAD will probably crash
  
  std::cout << "numbers : " << numbers << std::endl;
  std::cout << "dest : " << dest << std::endl;

  // dest.begin() has to be an output iterator, have to be able to write through it
  // std::ranges::copy(numbers.cbegin(), numbers.cend(), dest.cbegin()); // Compiler error
  std::ranges::copy(numbers.cbegin(), numbers.cend(), dest.begin()); // Worksr

  std::cout << "numbers : " << numbers << std::endl;
  std::cout << "dest : " << dest << std::endl;

  // replace, fill require forward iterator
  std::cout << '\n';
  std::cout << "--------------------(fill)------------------\n";
  std::cout << "numbers: " << numbers << '\n';

  // Replacing every instance of 7 with 345. Needs a forward iterator to move through the vector
  std::ranges::replace(numbers.begin(), numbers.end(), 7, 345);
  std::cout << "numbers: " << numbers << '\n';

  // Bidirectional iterator
  std::cout << '\n';
  std::cout << "--------------------(bi-directional)------------------\n";

  std::cout << "numbers: " << numbers << '\n';
  auto it_first = numbers.begin();
  auto it_last = numbers.end();
  while (it_last-- != it_first){
    std::cout << *it_last << " ";
  }

  std::cout << '\n';
  std::ranges::reverse(numbers);
  std::cout << "numbers: " << numbers << '\n';

  //Random access iteator : std::ranges::sort
    //Contiguous iterator : C++ 20 doesn't have a concrete example for this
    
    std::cout << "---------------(sort)-------------" << std::endl;
    std::cout << "numbers : " << numbers << std::endl;

    //Sorting the collection
    std::ranges::sort(numbers);
    std::cout << "numbers : " << numbers << std::endl;
    

  return 0;
}
