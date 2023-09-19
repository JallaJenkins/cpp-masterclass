#include <iostream>

class Animal{
public: 
  Animal() = default;
  virtual void breathe() const{} ;
private : 
  std::string m_description;
};
 
 
class Dog : public Animal
{
public : 
  Dog() = default;  
  virtual void breathe()const override{};
  void run(){
    std::cout << "Dog running..." << std::endl;
  }
private : 
  std::string m_fur_color;
};

// Function throws const char* exception when par_b is 0
void process_parameters(int par_a, int par_b){
  if(par_b == 0)
    throw "Potential division by 0 detected";
  int result = par_a/par_b;
}


int main(){

  /*
  // int division by 0: CRASH
  const int a{45};
  const int b{0};
  int result = a/b; // runtime error
  */

  /*
  Animal a;
  Dog& d{dynamic_cast<Dog&>(a)};  // runtime error - a is an animal object, not a reference
  */

  /*
  // Exceptions allow us to recover from these errors and give our program a chance to continue running

  const int a{45};
  const int b{0};
  int result;

  try {
    if(b == 0)
      throw 0;
    result = a/b;
  }
  // Multiple catch blocks
  // Catch blocks should match the types that are thrown in the try block
  catch(std::string ex){
    std::cout << "Division by 0 detected\n";
  }
  catch(int ex) {
    std::cout << "Exception: " << 0 << '\n';
  }
  */

  // Exceptions can be thrown in functions or other code blocks
  try {
    process_parameters(10, 0);
  } catch (const char* ex){ 
    std::cout << ex << '\n';
  }

  std::cout << "Done\n";

  return 0;
}
