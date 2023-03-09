#include <iostream>
#include <string>
#include <string_view>

class Dog{
  public:
    Dog() = default;
    Dog(std::string_view name_param, std::string_view breed_param, int age_param);
    ~Dog();

    void print_info(){
      std::cout << "Dog(" << this << ") : [name: " << name << " breed: " 
      << breed << " age: " << *p_age << "]\n";
    }

    // Setters

    /*
    // With Pointers
    Dog* set_dog_name(std::string_view name){
      // name = name; // Not reliable
      this->name = name; // This is standard syntax
      return this;
    }

    Dog* set_dog_breed(std::string_view breed){
      this->breed = breed;
      return this;
    }

    Dog* set_dog_age(int age){
      *(this->p_age) = age;
      return this;
    }
    */

    // With Refernces
    Dog& set_dog_name(std::string_view name){
      // name = name; // Not reliable
      this->name = name; // This is standard syntax
      return *this;
    }

    Dog& set_dog_breed(std::string_view breed){
      this->breed = breed;
      return *this;
    }

    Dog& set_dog_age(int age){
      *(this->p_age) = age;
      return *this;
    }

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
  std::cout << name << " has been born at " << this << ". Woof!\n";
}

Dog::~Dog(){
  delete p_age;
  std::cout << name << " at " << this << " has been destroyed! :-(\n";
}

int main(){

  Dog dog1("Fluffy", "Shepherd", 2); // Constructor
  dog1.print_info();

  /*
  // Direct calls using object
  dog1.set_dog_name("Pumba");
  dog1.set_dog_breed("Wire Fox Terrier");
  dog1.set_dog_age(4);
  
  */

  // Chained calls using pointers
  // dog1.set_dog_name("Pumba")->set_dog_breed("Wire Fox Terrier")->set_dog_age(4);

  // Chained calls using references
  dog1.set_dog_name("Pumba").set_dog_breed("Wire Fox Terrier").set_dog_age(4);
  // dog1.set_dog_name("Pumba");
  dog1.print_info();

  std::cout << "Program done!\n";
  //Destructor
  return 0;
}
