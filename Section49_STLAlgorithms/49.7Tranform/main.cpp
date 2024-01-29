#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
void print_collection(const T& collection){
  std::cout << "Collection: [";
  for(const auto& elt : collection){
    std::cout << " " << elt;
  }
  std::cout << " ]\n";
}

int main(){

  // Original collection
  std::vector<int> input {5, 7, 4, 2, 8, 6, 1, 9, 0, 3, 11, 45, 6, 23};
  std::vector<int> output {11, 22, 33};
  std::cout << "output size: " << output.size() << '\n';
  std::cout << "output capacity: " << output.capacity() << '\n';

  print_collection(input);
  print_collection(output);

  std::cout << "transforming...\n";

  // Uses whatever space there is, doesn't extend capacity
  // std::transform(input.begin(), input.end(), output.begin(), [](int n){return n*2;});

  // std::back_inserter_iterator: appens to the back and extends capacity if necessary
  std::transform(input.begin(), input.end(), std::back_insert_iterator(output), [](int n){return n*2;});

  print_collection(output);
  std::cout << "output size: " << output.size() << '\n';
  std::cout << "output capacity: " << output.capacity() << '\n';

  std::cout << "Done!\n";
  return 0;
}
