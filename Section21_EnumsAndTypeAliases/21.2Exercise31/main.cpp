#include <iostream>

enum class DayOfWeek {
  Mon, Tue, Wed, Thu, Fri, Sat, Sun,
};

void print_day(DayOfWeek day){
    switch(day){
        case DayOfWeek::Mon   : 
            std::cout << "Today is Monday";
        break;

        case  DayOfWeek::Tue  : 
            std::cout << "Today is Tuesday";
        break;

        case   DayOfWeek::Wed : 
            std::cout << "Today is Wednesday";
        break;

        case  DayOfWeek::Thu  : 
            std::cout << "Today is Thursday";
        break;

        case  DayOfWeek::Fri  : 
            std::cout << "Today is Friday" ;
        break;

        case  DayOfWeek::Sat  : 
            std::cout << "Today is Saturday";

         case  DayOfWeek::Sun  : 
            std::cout << "Today is Sunday" ;
        break;

        default : 
        std::cout << "No day";
    }
}

int main(){

  print_day(DayOfWeek::Mon);

  return 0;
}
