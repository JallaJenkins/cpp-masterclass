#include <iostream>
#include <vector>

int main(){

  // std::vector<int> vi {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int vi[] {1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::cout << "Collection: ";
  // for(auto it = vi.begin(); it!= vi.end(); ++it){
  for(auto it = std::rbegin(vi); it!= std::rend(vi); ++it){
    std::cout << *it << ' ';
  }
  std::cout << '\n';

  return 0;
}
