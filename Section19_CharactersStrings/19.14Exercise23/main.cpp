#include <iostream>
#include <string>

int main(){

  std::string data[] {"I","am","the","king","of","the","jungle"};
  unsigned int size = std::size(data);

  std::string result;

  result = data[0];
  for (unsigned int i{0}; i < size; ++i ) {
    if (data[i] > result) {
      result = data[i];
    }
  }

  std::cout << result << '\n';

  return 0;
}
