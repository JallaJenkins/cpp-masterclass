#include <iostream>

int divide_impl( int num, int den){
 
        if( den == 0 )
            throw -1;
       return num/den;     
}

void divide(int a, int b){
    //YOUR CODE WILL BO GELOW THIS LINE
    //DON'T MODIFY ANYTHING ABOVE THIS LINE
    try {
      int result = divide_impl(a, b);
      std::cout << "result : " << result;
    } catch (int ex) {
      std::cout << "handling thrown exception : " << ex;
    }


	//YOUR CODE WILL GO ABOVE THIS LINE
	//DON'T MODIFY ANYTHING BELOW THIS LINE
}

int main(){

  divide(4, 0);

  return 0;
}
