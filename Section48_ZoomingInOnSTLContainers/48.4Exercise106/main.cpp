#include <iostream>
#include <list>

template<typename T>
void print_positions(std::list<T> data, std::list<unsigned int> indices){
  auto it_data = data.begin();
  auto it_indices = indices.begin();
  auto end_indices = indices.end();

  while (it_indices != indices.end()){
    it_data = data.begin();
    for(unsigned int i{}; i < *it_indices; ++i){
      ++it_data;
    }

    std::cout << "[" << *it_indices << "]:" << *it_data << '\n';
    ++it_indices;
  }
}

int main(){

  std::list<int> l1 = {7, 5, 16, 8,11,34,78};
  std::list<unsigned int> p1 = {1,3,5,2,0};

  print_positions(l1, p1);

  std::list<std::string> l = {"She","is","the","queen","of","the","blue","sky"};
  std::list<unsigned int> p = {2,7,1,6};
  print_positions(l,p);

  return 0;
}
