#include <iostream>
#include <string>

void exception_thrower() {
  throw 'z';
}

void some_function(){
  for(size_t i{}; i < 15; ++i) {
    std::cout << "Iteration: " << i <<'\n';

    try { // Outer try block - handled in outer catch blocks
      if(i==2) {
        throw "exception for int 2 thrown"; 
      }

      try { // Inner try block
        if(i==5){
          throw 'd';  // Throw char, handled by inner catch block
        }

        if(i==7){
          throw i;  // Throw size_t; handled in outer block
        }

        if(i==8){
          exception_thrower();
        }

        if(i==9){
          // Not handled within function
          throw std::string("string thrown for int 9");
        }

      } catch(char ex) {
        std::cout << "Inner catch(char) block: " << ex << '\n';
      }

    }
    catch (const char* ex) {
      std::cout << "Outer catch(const char*) block: " << ex <<'\n';
    }
    catch (size_t ex) {
      std::cout << "Outer catch(size_t) block: " << ex << '\n';
    }
  }
  std::cout << "some_function() finished\n";
}

int main(){

  try{
    some_function();
  } catch(std::string& ex){
    std::cout << "Main catch block(std::string&): " << ex << '\n';
  }

  std::cout << "END\n";

  return 0;
}
