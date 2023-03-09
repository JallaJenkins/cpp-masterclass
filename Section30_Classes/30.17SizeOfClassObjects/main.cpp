#include <iostream>
#include <string>

class Dog{
  public:
    Dog() = default;
    void print_info(){

    }
    void do_something(){
      
    }

  private:
    size_t leg_count;
    size_t arm_count;
    int* p_age;

    

};

int main(){

  Dog dog1;
  std::cout << "sizeof(size_t): " << sizeof(size_t) << '\n';

  // Size of pointer, not what is pointed to
  std::cout << "sizeof(int*): " << sizeof(int*) << '\n';  

  // Size of class is the sum of the size of its member variables
  // Pointers contribute only the size of the pointer itself, not what is pointed to
  std::cout << "sizeof(Dog): " << sizeof(dog1) << '\n';

  std::string name{"I am the king of the universe!"};

  // Size of std::string is determined by class size, not length of string
  // The string literal is "contained" in std::string as a pointer to a c-string
  std::cout << "sizeof(name): " << sizeof(name) << '\n';

  return 0;
}
