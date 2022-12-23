#include <iostream>
#include <cctype>

int main(){

  char data[] {"The sky is blue my friend."};
  unsigned int size {std::size(data)};
  char* result{nullptr};

  result = new char[size];

  for (unsigned int i{0}; i < size; ++i) {
    if (isspace(data[i])) {
      result[i] = '_';
    } else {
      result[i] = data[i];
    }
  }

  std::cout << "After replacing the spaces, we get : " << result;

  delete result;
  result = nullptr;

  return 0;
}
