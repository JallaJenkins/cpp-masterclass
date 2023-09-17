#include <iostream>
#include "polymorphic.h"
#include "nonpolymorphic.h"

int main(){

  /*
  // typeid with fundamental types
  // if(typeid(22) == typeid(int)){
  if(typeid(22.2f) == typeid(int)){
    std::cout << "22 is an int\n";
  } else {
    std::cout << "22 is not an int\n";
  }

  if(typeid(22.2f) == typeid(float)){
    std::cout << "22 is a float\n";
  } else {
    std::cout << "22 is not a float\n";
  }

  std::cout << "typeid(int): " << typeid(int).name() << '\n';
  */

  // typeid with references
  std::cout << "Polymorphic references:\n";
  DynamicDerived dynamic_derived;
  DynamicBase& base_ref = dynamic_derived;
  std::cout << "Type of dynamic_derived: " << typeid(dynamic_derived).name() << '\n';
  std::cout << "Type of base_ref: " << typeid(base_ref).name() << '\n';
  // Both are DynamicDerived

  // typeide with pointers
  std::cout << "---------------------------\n";
  std::cout << "Polymorphic pointers:\n";
  DynamicBase* b_ptr = new DynamicDerived;

  std::cout << "Type of b_ptr: " << typeid(b_ptr).name() << '\n';  // Base type
  std::cout << "Type of *b_ptr: " << typeid(*b_ptr).name() << '\n'; // Dynamic type

  // type id with nonpoly pointers and refs; static binding only
  std::cout << "---------------------------\n";
  std::cout << "Non-poly pointers and refs\n";
  StaticBase* b_ptr_s = new StaticDerived;
  StaticDerived staticderived;
  StaticBase& static_base_ref {staticderived};
  std::cout << "Type of *b_ptr_s: " << typeid(*b_ptr_s).name() << '\n';
  std::cout << "Type of static_base_ref: " << typeid(static_base_ref).name() << '\n';



    delete b_ptr;
    delete b_ptr_s;

  return 0;
}
