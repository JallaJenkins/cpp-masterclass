#include <iostream>

const int val1 {33};
constexpr int val2 {34};
int val3 {35}; // Run time value

constinit int age = 88; // Initialized at compile time
const constinit int age1 {val1}; // Can combine const and constinit
constinit int age2 {age1}; // OK because age1 is const and so is evaluated at compile time
// constinit int age3 {val3}; // Fails because val3 is not const and so it not evaluated at compile time
const constinit double weight {33.33};
// constexpr constinit double scale_factor{3.11}; // Fails because can't combine constexpr and constinit

int main(){

    //constinit double height{1.72};

    std::cout << "age : " << age << std::endl;
    std::cout << "age1 : " << age1 << std::endl;
    std::cout << "age2 : " << age2 << std::endl;
    
    age =33; // Can change a const init variable
    std::cout << "age : " << age << std::endl;
    
    //Combining const and constinit
    std::cout << "weight : " << weight << std::endl;
    //weight = 44.44; // Compiler error
    
  return 0;
}
