#include <iostream>

int main(){

  std::cout << "What day is today? [1. Monday... 7. Sunday]: ";
  int day;
  std::cin >> day;


  if (day < 1 || day > 7){
    std::cout << "Not a valid day!\n";
  } 
  else {
    day--;
    std::cout << "How many days should we go back?: ";
    int days_back;
    std::cin >> days_back;

    std::cout << "Today is ";

    switch(day){
      case 0:
        std::cout << "Monday\n";
        break;
      case 1:
        std::cout << "Tuesday\n";
        break;
      case 2:
        std::cout << "Wednesday\n";
        break;
      case 3:
        std::cout << "Thurday\n";
        break;
      case 4:
        std::cout << "Friday\n";
        break;
      case 5:
        std::cout << "Saturday\n";
        break;
      case 6:
        std::cout << "Sunday\n";
        break;
      default:
        std::cout << "Invalid day\n";
        break;
    }
  
  std::cout << "If we went back " << days_back << " days, it would be ";

  int previous_day{(7 + ((day - days_back) % 7)) % 7};

  switch(previous_day){
      case 0:
        std::cout << "Monday\n";
        break;
      case 1:
        std::cout << "Tuesday\n";
        break;
      case 2:
        std::cout << "Wednesday\n";
        break;
      case 3:
        std::cout << "Thurday\n";
        break;
      case 4:
        std::cout << "Friday\n";
        break;
      case 5:
        std::cout << "Saturday\n";
        break;
      case 6:
        std::cout << "Sunday\n";
        break;
      default:
        std::cout << "Invalid day\n";
    }
  }

  return 0;
}
