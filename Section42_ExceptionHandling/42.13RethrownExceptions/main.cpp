#include <iostream>
#include "exceptions.h"

void do_something(size_t i){
      if(i == 2){
          throw CriticalError("i is 2");
      }
      
      if(i == 3){
          throw SmallError("i is 3");
      }
	  
      if(i == 4){
          throw Warning("i is 4");
      }
      std::cout << "Doing something at iteration : " << i << std::endl;
}


int main(){

  for(size_t i{0}; i < 5; ++i){
    try{
      try{
        do_something(i);
      }
      catch(SomethingIsWrong& ex_inner){
        if(typeid(ex_inner) == typeid(Warning)){
          std::cout << typeid(ex_inner).name() <<
            " - Innre catch block, Exception caught : " <<
            ex_inner.what() << '\n';
        } else {
          throw ex_inner; //  Creates new copy as SomethingIsWrong object - slices off child information
        }
      }
    }
    catch(SomethingIsWrong& ex_outer){
      std::cout << typeid(ex_outer).name() <<
        " - Outer catch block, Exception caught: " <<
        ex_outer.what() << '\n';
    }
  }

  return 0;
}
