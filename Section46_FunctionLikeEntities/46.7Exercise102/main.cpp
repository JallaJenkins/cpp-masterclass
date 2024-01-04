#include <iostream>

class Multiply_by_2{
public:
  double operator()(double d){
    return 2 * d;
  }
};

class Add_1{
public:
  double operator()(double d){
    return d + 1;
  }
};

template <typename T>
void modify(double* data, T modifier, int size) {
  for(int i{}; i < size; ++i){
     data[i] = modifier(data[i]);
  }
}

int main(){

  double scores[] {10.1,20.3,30.2,40.3};
 
  Multiply_by_2 multiply_by_2;
  Add_1 add1;

  modify(scores,multiply_by_2,4);
  modify(scores,add1,4);

  std::cout << "data [";
  for(unsigned int i{}; i < std::size(scores); ++ i){
      std::cout << scores[i] << " ";
  }
  std::cout << "]" << std::endl;

  return 0;
}
