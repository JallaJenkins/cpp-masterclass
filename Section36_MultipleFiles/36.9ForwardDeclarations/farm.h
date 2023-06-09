#ifndef FARM_H
#define FARM_H

// #include "dog.h"

class Dog;  // Forward declaration

class Farm
{
  public:
    Farm();
    ~Farm();

    void use_dog(const Dog& dog_param);  // doesn't require definition

    void do_something(const Dog& dog_param){
      // dog_param.print_info(); // needs method so cannot use without including header
    }

  private:
    // Dog dog_member;  // needs constructor so cannot use without including header


};

#endif  // FARM_H