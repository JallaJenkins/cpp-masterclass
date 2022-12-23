#include <iostream>

int main(){

  std::cout << "Enter a day between 1 and 7: ";
  int day;
  std::cin >> day;

  if (day < 1 || day > 7){
    std::cout << "Invalid day!\n";
  } else {
    switch(day){
      case 1:
        std::cout << "Monday\n";
        break;
      case 2:
        std::cout << "Tuesday\n";
        break;
      case 3:
        std::cout << "Wednesday\n";
        break;
      case 4:
        std::cout << "Thurday\n";
        break;
      case 5:
        std::cout << "Friday\n";
        break;
      case 6:
        std::cout << "Saturday\n";
        break;
      case 7:
        std::cout << "Sunday\n";
        break;
    }
  }

  return 0;
}
