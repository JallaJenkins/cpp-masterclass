#include <iostream>

int main(){

  //Capture everything by value
  /*
  int c{42};
  
  auto func = [=](){
      std::cout << "Inner value : " << c << std::endl;
  };
  
  for(size_t i{} ; i < 5 ;++i){
      std::cout << "Outer value : " << c << std::endl;
      func();
      ++c;
  }
  */
  
  // Capture all by reference
  int c{42};
  int d{5};
  
  auto func = [&](){
      std::cout << "Inner value : " << c << std::endl;
      std::cout << "Inner d: " << d << '\n';
  };
  
  for(size_t i{} ; i < 5 ;++i){
      std::cout << "Outer value : " << c << std::endl;
      func();
      ++c;
  }
  return 0;
}
