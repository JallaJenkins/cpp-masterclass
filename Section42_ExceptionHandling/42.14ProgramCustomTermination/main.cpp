#include <iostream>
#include <exception>  // Necessary?
#include <chrono>
#include <thread>

void our_terminate_function(){
  std::cout << "Our custom terminate function called\n";
  std::cout << "Program will terminate in 10s...\n";
  std::this_thread::sleep_for(std::chrono::milliseconds(10000));
  std::abort();
}

int main(){

  // Set termiate function by reference
  // std::set_terminate(&our_terminate_function); 

  // Set terminate function as lambda function
  std::set_terminate([](){
    std::cout << "Our custom terminate function called\n";
    std::cout << "Program will terminate in 10s...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(10000));
    std::abort(); // Not necessary but recommended; otherwise operating system wil crash the program from outside
  });

  throw 1;

  return 0;
}
