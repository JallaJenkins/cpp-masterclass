#include <iostream>
#include <string>
#include <string_view>

class Dog{
  public:
    Dog() = default;
    Dog(std::string_view name_param, std::string_view breed_param, int age_param);
    ~Dog();

  private:
    std::string name;
    std::string breed;
    int* p_age{nullptr};

};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param){
  name = name_param;
  breed = breed_param;
  p_age = new int;
  *p_age = age_param;
  std::cout << name << " has been born! Woof!\n";
}

Dog::~Dog(){
  delete p_age;
  std::cout << name << " has been destroyed! :-(\n";
}

// void some_func(){
//   Dog my_dog("Fluffy", "Shepherd", 2); // Destroyed at end of some_func
// }

void some_func(){
  Dog* p_dog = new Dog("Fluffy", "Shepherd", 2);

  delete p_dog; // Heap objects must be explicitly destroyed
}

int main(){

  // Dog my_dog("Fluffy", "Shepherd", 2);  // destroyed at end of main function

  // some_func();

  some_func();
  

  std::cout << "Program done!\n";
  return 0;
}
