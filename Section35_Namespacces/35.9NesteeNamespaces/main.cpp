#include <iostream>

namespace Hello{
  unsigned int age{23};

  namespace World{
    int local_var{44};

    void say_something(){
      std::cout << "Hello there\n";
      std::cout << "The age is: " << age << '\n';
    }
  }

  void do_something(){
    // Here we don't have direct access to local_var
    std::cout << "Using local var: " << World::local_var << '\n';
  }
}

int main(){

  Hello::World::say_something();
  Hello::do_something();

  return 0;
}
