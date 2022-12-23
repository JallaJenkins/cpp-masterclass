#include <iostream>

// Declare an enum type
enum class Month: char{
  Jan = 1, January = Jan, Feb, Mar,
  Apr, May, Jun,
  Jul, Aug, Sep,
  Oct = 100, Nov, Dec,
};

int main(){

  Month month {Month::January};
  std::cout << "month: " << static_cast<int>(month) << '\n';
  std::cout << "sizeof(month): " << sizeof(month) << '\n';
  std::cout << (Month::Jan == Month::Feb) << '\n';

  return 0;
}
