#include <iostream>

template <unsigned int size, typename T>
int find_value(T collection[], T value){
  for(unsigned int i{}; i < size; ++i){
    if (collection[i] == value) {
      return i;
    }
  }
  return -1;
}


int main(){

  // unsigned int ids[] {222333,44556,123555,917666};
  // auto index =  find_value<4,unsigned int>(ids,4455622);
  // std::cout << "index : " << index << std::endl;

  unsigned int ids[] {222333,44556,123555,917666};
  auto index =  find_value<4,unsigned int>(ids,44556);
  std::cout << "index : " << index << std::endl;

  return 0;
}
