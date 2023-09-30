#include <iostream>

class Item{
public:
  Item(){}
  ~Item() noexcept(false) {
    // throw 0;
    try{
      throw 0;
    } catch(int ex) {
      throw;
    }
  }
};

int main(){
  try{
    Item item;
  } catch(int ex) {
    std::cout << "main(): Catching int exception: " << ex << '\n';
  }

  std::cout << "END\n";

  return 0;
}
