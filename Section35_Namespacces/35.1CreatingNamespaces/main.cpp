#include <iostream>

const double adjustment{0.724};

namespace No_Adjust
{
  double add(double x, double y){
    return x + y;
  }
}

namespace Adjust
{
  double add(double x, double y){
    return x + y - adjustment;
  }
}

namespace No_Adjust{

  double mult(double x, double y);
  double div(double x, double y);

}

namespace Adjust{
  double mult(double x, double y);
  double div(double x, double y);
}

int main(){

  double result = No_Adjust::div(12, 3);
  std::cout << "result: " << result << '\n';

  return 0;
}

namespace No_Adjust{

  double mult(double x, double y){
    return x * y;
  }

  double div(double x, double y){
    return x / y;
  }

}

namespace Adjust{
  double mult(double x, double y){
    return x * y - adjustment;
  }

  double div(double x, double y){
    return x / y - adjustment;
  }
}
