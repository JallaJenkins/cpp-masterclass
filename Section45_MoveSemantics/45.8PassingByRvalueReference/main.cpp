#include <iostream>
#include "boxcontainer.h"


class Item{
  friend std::ostream& operator<<(std::ostream& out, const Item& operand);
public:
  Item() : m_data(new int){
    std::cout << "Item default constructor called...\n";
  }
  Item(int value) : m_data(new int(value)){
    std::cout << "Item int constructor called...\n";
  }
  // Copy members
  Item(const Item& source) : m_data(new int){
    std::cout << "Item copy constructor copying data...\n";
    *m_data = (*source.m_data);
  }
  Item& operator=(const Item& right_operand){
    std::cout << "Item copy assignment operator copying data...\n";
    if(&right_operand != this) {
      *m_data = (*right_operand.m_data);
    }
    return *this;
  }

  // Move members
  Item(Item&& source){
    std::cout << "Item move constructor moving data...\n";
    // Steal pointer
    m_data = source.m_data;
    // Reset pointer
    source.m_data = nullptr;
  }
  Item& operator=(Item&& right_operand){
    std::cout << "Item move assignment operator moving data...\n";
    if (&right_operand != this) {
      // Steal pointer
      m_data = right_operand.m_data;
      // Reset pointer
      right_operand.m_data = nullptr;
    }
    return *this;
  }
private:
  int * m_data{nullptr};
};

std::ostream& operator<<( std::ostream& out, const Item& operand){
    out << "Item : [" << (*operand.m_data) << "]";
    return out;
}


Item get_value(){
  return Item(22);
}

void do_something(Item&& item){
  std::cout << "Do somthing move version called...\n";
  // Item internal = item; // Calls copy assgignment operator
  Item internal = std::move(item); // Calls move assignment operator
  std::cout << "internal: " << internal << '\n';
}


int main(){

  /*
  Item&& rvalue_ref {get_value()}; // Rvalue converted to lvalue

  // Item item1(rvalue_ref); // Copy constructor called; rvalue-ref treated as lvalue

  // Item item1(std::move(rvalue_ref)); // Move constructor called via std::move

  std::cout << "------------------\n";

  // do_something(rvalue_ref);  // Won't compile! No overload that takes an lvalue

  do_something(std::move(rvalue_ref));
  */

  BoxContainer<Item> items;
  items.add(get_value());

  return 0;
}
