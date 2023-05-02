#include "integer.h"
#include <iostream>

Integer::Integer(int value) : inner_int(value)
{
  std::cout << "Constructor for Integer " << inner_int << " called\n";
}

Integer::~Integer(){

}
