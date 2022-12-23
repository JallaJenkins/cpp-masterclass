#include <iostream>

int* max_return_pointer(int* a, int* b)
{
  if(*a > *b) return a;
  else return b;
}

int* sum(int* a, int* b){
  int result = *a + *b;
  return &result;  // Pointer to local variable - bad!
}

int* max_input_by_value(int a, int b) {
  if (a > b) return &a;  // Pointer to local variable - bad!
  else return &b;  // Pointer to local variable - bad!
}

int main(){

  /*
  int x{56};
  int y{45};
  int* p_max = max_return_pointer(&x, &y);

  std::cout << "x: " << x << '\n';
  std::cout << "y: " << y << '\n';
  std::cout << "*p_max: " << *p_max << '\n';

  ++(*p_max);

  std::cout << "----------------------\n";
  std::cout << "x: " << x << '\n';
  std::cout << "y: " << y << '\n';
  std::cout << "*p_max: " << *p_max << '\n';
  */

  /*
  int x{56};
  int y{45};
  int* p_sum = sum(&x, &y);
  std::cout << *p_sum << '\n';
  */

  int x{56};
  int y{45};
  int* p_sum = max_input_by_value(x, y);
  std::cout << *p_sum << '\n';

  std::cout << "Done\n";

  return 0;
}
