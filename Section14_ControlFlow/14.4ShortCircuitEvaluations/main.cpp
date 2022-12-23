#include <iostream>

bool car(){
  std::cout << "car function running\n";
  return false; 
}

bool house(){
  std::cout << "house function running\n";
  return true; 
}

bool job(){
  std::cout << "job function running\n";
  return false; 
}

bool spouse(){
  std::cout << "spouse function running\n";
  return false; 
}

int main(){

  // if (car() && house() && job() && spouse()) {
  //   std::cout << "I am happy\n";
  // }
  // else {
  //   std::cout << "I am sad\n";
  // }

  if (car() || house() || job() || spouse()) {
    std::cout << "I am happy\n";
  }
  else {
    std::cout << "I am sad\n";
  }

  return 0;
}
