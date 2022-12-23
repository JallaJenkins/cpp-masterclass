#include <iostream>
#include <cstring>

int main(){

  std::string data[] {"catching","iteration","fresh","iterative","outside","mercy"};
  unsigned int size {std::size(data)};
  const char* key {"iter"};

  std::string* matches = new std::string[size];
  unsigned int num_matches {0};

  for (unsigned int i{0}; i < size; ++i) {
    int is_found = data[i].find(key);
    if (is_found != std::string::npos) {
      matches[num_matches++] = data[i];
    }
  }

  std::cout << "Found " << num_matches << " matches. They are:";

  for (unsigned int i{0}; i < num_matches; ++i) {
    std::cout << " " << matches[i];
  }

  delete[] matches;
  matches = nullptr;
  return 0;
}
