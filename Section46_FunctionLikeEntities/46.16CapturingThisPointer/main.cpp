#include <iostream>

class Item{
  int m_var1;
  int m_var2;

public:
  Item(int a, int b)
    : m_var1{a}, m_var2{b}
  {}

  void some_member_func(){
    // auto func = [](){            // This not captured; compiler error, no access to 
                                    // member variables

    // auto func = [this]() {       // Works
    // auto func = [=, this]() {    // Works; captures all member vars, public and 
                                    // private
    // auto func = [=]() {          // Works but depreciated as of C++20
    auto func = [&]() {             // Works
    
      std::cout << "member vars: " << m_var1 << ", " << m_var2 << '\n';
    };
    func();
  }
};

int main(){

  Item item1(10, 20);
  item1.some_member_func();

  return 0;
}
