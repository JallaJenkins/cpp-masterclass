#include <iostream>
#include <functional>

struct Multiply_by_2{
	double operator() (double value) const{
		return value *2;
	}
};

inline double add_1(double value){
	return value+1;
}

void modify(double arr[], std::function<double(double)> modifier, int size){
  for (int i{}; i < size; ++i){
    arr[i] = modifier(arr[i]);
  }
}


int main(){
  double scores[] {11.2, 22.1,33.4,44.3};
    //Lambda
    modify(scores , [](double value){ return value -1;}  , 4);
 
    std::cout << "data [ ";
    for( unsigned int i{}; i < 4; ++i){
        std::cout << scores[i] << " ";
    }
    std::cout << "]";

  return 0;
}
