#include <iostream>

int main(){

   /*
    Lambda function signature : 
                                [capture list] (parameters) ->return type{
                                        // Function body
                                }
    */

  /*
  auto func = [](){
    std::cout << "Hello World!\n";
  };

  func();
  func();
  */

  // Call lambda function directly
  /*
  [](){
    std::cout << "Hello World!\n";
  }();
  */

  // Lambda function w/ parameters
  /*
  [](double a, double b){
    std::cout << "a + b: " << a + b << '\n';
  }(10.0, 5.0);
  */

  /*
  auto func1 = [](double a, double b){
    std::cout << "a + b: " << a + b << '\n';
  };

  func1(10, 20);
  func1(5, 7);
  */

  // Lambda w/ return
  /*
  auto result = [](double a, double b){
    return a + b;
  }(10, 50);

  // std::cout << "result: " << result << '\n';
  std::cout << "result: " << [](double a, double b){
    return a + b;
  }(10, 50) << '\n';
  */

  /*
  auto func1 = [](double a, double b){
    return a + b;
  };

  auto result1 = func1(23, 7);
  auto result2 = func1(9, 45);

  std::cout << "result1: " << result1 << '\n';
  std::cout << "result2: " << result2 << '\n';
  std::cout << "direct call: " << func1(5, 2) << '\n';
  */

  /*
  auto func3 = [](double a, double b)->int{
    return a + b;
  };

  auto func4 = [](double a, double b){
    return a + b;
  };

  double a{6.9};
  double b{3.5};

  auto result3 = func3(a, b);
  auto result4 = func4(a, b);

  std::cout << "result3: " << result3 << '\n';
  std::cout << "result4: " << result4 << '\n';
  std::cout << "sizeof(result3): " << sizeof(result3) << '\n';
  std::cout << "sizeof(result4): " << sizeof(result4) << '\n';
  */

  std::cout << "Done!\n";
  
  return 0;
}
