#include <iostream>

int main(){
  /*
  int elephant_count;
  int lion_count{};
  int dog_count{10};
  int cat_count{15};
  int domesticated_animals { dog_count + cat_count };

  // int new_number{doest_exist};

  int narrowing_conversion(2.9);

  std::cout << elephant_count << std::endl;
  std::cout << lion_count << std::endl;
  std::cout << dog_count << std::endl;
  std::cout << cat_count << std::endl;
  std::cout << domesticated_animals << std::endl;
  std::cout << narrowing_conversion << std::endl;
  */

  /*
  int apple_count(5);
  int orange_count(10);
  int fruit_count(apple_count + orange_count);
  
  std::cout << apple_count << std::endl;
  std::cout << orange_count << std::endl;
  std::cout << fruit_count << std::endl;
  */

  int bike_count = 2;
  int truck_count = 7;
  int vehicle_count = bike_count + truck_count;
  int narrowing_conversion_assignment = 2.9;

  std::cout << bike_count << std::endl;
  std::cout << truck_count << std::endl;
  std::cout << vehicle_count << std::endl;
  std::cout << narrowing_conversion_assignment << std::endl;

  std::cout << "sizeof int: " << sizeof(int) << std::endl;
  std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;

  return 0;

}