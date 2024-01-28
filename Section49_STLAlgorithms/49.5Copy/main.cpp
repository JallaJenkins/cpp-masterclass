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

  // std::vector<int> source {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int source[] {1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::vector<int> dest {15, 21, 12, 53, 30, 40};

  std::cout << "source: ", print_collection(source);
  std::cout << "dest: " , print_collection(dest);

  // Copy from source to dest
  std::cout << "copying...\n";
  std::copy(std::begin(source), std::begin(source) + 4, std::begin(dest));
  std::cout << "source: ", print_collection(source);
  std::cout << "dest: " , print_collection(dest);

  std::cout << "--------------------------\n";

  std::vector<int> dest1 {100, 200, 300, 400, 500, 600};
  std::cout << "source: ", print_collection(source);
  std::cout << "dest1: " , print_collection(dest1);

  auto odd = [](int n){return n % 2 != 0;};

  // If there are more elements than space available in destination , surplus elements will be ignored

  std::cout << "Copying odds only...\n";
  std::copy_if(std::begin(source), std::end(source), std::begin(dest1), odd);
  std::cout << "source: ", print_collection(source);
  std::cout << "dest1: " , print_collection(dest1);

  std::cout << '\n';
  return 0;
}
