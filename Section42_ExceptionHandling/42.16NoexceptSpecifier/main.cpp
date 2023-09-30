#include <iostream>

class Item{
public : 
        Item(){}
        
        void do_something_in_class() const noexcept{
            std::cout << "Doing something from class" << std::endl;
            try{
                throw 1;
            }
            catch(int ex){
                std::cout << "Handling exception in Item::do_something_in_class" << std::endl;
                // throw; // Rethrowing in noexcept function/method will terminate program
            }
        }
private : 
        int m_member_var;
};

void some_function() noexcept { // Prevents exceptions from leaving fn
  try{
    throw 1;
  }
  catch(int ex){
    std::cout << "Handling int exception in some_function\n";
    // throw;
  }
}

int main(){

  /*
  try{
    some_function();
  }
  catch(int ex){
    std::cout << "Caught rethrown exception in main\n";
  }
  */

 //Using noexcept member function
    Item item;
	try{
		item.do_something_in_class();
	}catch(int ex){
		std::cout << "main() : Catching exception thrown from method" << std::endl;
	}

  return 0;
}
