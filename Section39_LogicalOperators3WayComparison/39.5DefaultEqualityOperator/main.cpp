#include <iostream>

class Item {
public:
  Item() = default;
  Item(int i) : Item(i, i, i) {}
  Item(int a_param, int b_param, int c_param)
    : a(a_param), b(b_param), c(c_param) {}

  /// Equality default operator: memberwise comparison
  bool operator==(const Item& right_operand) const = default;

  /*
  // Custom tnequality operator (not required in C++20)
  bool operator!=(const Item& right_operand) const {
    return !(*this==right_operand);
  }
  */

private:
  int a{1};
  int b{2};
  int c{3};
};

int main(){

  Item i1{1, 2, 3};
  Item i2{1, 2, 33};

  std::cout << std::boolalpha;
  std::cout << "i1 == i2: " << (i1 == i2) << '\n';
  std::cout << "i1 != i2: " << (i1 != i2) << '\n';
  std::cout << "i1 == 12: " << (i1 == 12) << '\n';
  std::cout << "36 == i2: " << (36 == i2) << '\n';
  std::cout << "i1 != 12: " << (i1 != 12) << '\n';
  std::cout << "36 != i2: " << (36 != i2) << '\n';


  return 0;
}
