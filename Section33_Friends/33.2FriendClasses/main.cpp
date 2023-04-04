#include <iostream>

class Dog{
  std::string m_name;
  int m_age;
  
  public:
    Dog(const std::string& name, int age)
      : m_name(name), m_age(age)
      {

      }
    
    friend class Cat;

};

class Cat{
  std::string m_name;

  public:
    void print_dog_info(const Dog& d) const {
      std::cout << "Dog [name: " << d.m_name << ", age: " << d.m_age << "]\n";
    }
};

int main(){

  Cat cat1;

  Dog dog1("Fluffy", 2);

  cat1.print_dog_info(dog1);
  

  return 0;
}
