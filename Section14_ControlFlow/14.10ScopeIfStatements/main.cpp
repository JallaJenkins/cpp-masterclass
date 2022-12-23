#include <iostream>

int global_var{45};

int main(int argc, char **argv){
  
  bool green{false};

  global_var++;

  if(green){
    int car_count{23};
    global_var++;
    std::cout << "Light is green " << car_count << " cars on the move!\n";
  } else {
    // car_count++;
    global_var++;
    std::cout << "Light is not green. Y'all should STOP!\n";
  }

  // car_count++;
  std::cout << "global_var: " << global_var << "\n";


  return 0;
}
