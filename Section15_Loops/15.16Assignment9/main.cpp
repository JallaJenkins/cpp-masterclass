#include <iostream>
#include <iomanip>


int main(){

  // Init variables
  const size_t MONTHS{12};
  const size_t COL_WIDTH{6};
  bool is_leap{false};

  // Get year from user
  std::cout << "Enter a year: ";
  int year;
  std::cin >> year;

  // Check for leap year
  if (!(year % 4 == 0))
        is_leap = false;
        
    else if (!(year % 100 == 0))
        is_leap = true;
    
    else if (!(year % 400) == 0)
        is_leap = false;
    
    else is_leap = true;

  // Get first day from user
  std::cout << "Enter the first day of the year [1: Monday, ... 7: Sunday]: ";
  int current_day;
  std::cin >> current_day;

  // Start printing calendar
  std::cout << "\n";
  std::cout << "Calendar for " << year << "\n";

  // Initialize days_in_month
  size_t days_in_month{31};

  // Set text justification & start month loop
  std::cout << std::right;
  for (size_t month{0}; month < MONTHS; ++month ) {

    // Print month information & get number of days in month
    // std::cout << std::left;
    switch (month) {
      case 0:
        std::cout << "--January " << year << " --\n";
        days_in_month = 31;
        break;
      case 1:
        std::cout << "--February " << year << " --\n";
        days_in_month = is_leap ? 29 : 28;
        break;
      case 2:
        std::cout << "--March " << year << " --\n";
        days_in_month = 31;
        break;
      case 3:
        std::cout << "--April " << year << " --\n";
        days_in_month = 30;
        break;
      case 4:
        std::cout << "--May " << year << " --\n";
        days_in_month = 31;
        break;
      case 5:
        std::cout << "--June " << year << " --\n";
        days_in_month = 30;
        break;
      case 6:
        std::cout << "--July " << year << " --\n";
        days_in_month = 31;
        break;
      case 7:
        std::cout << "--August " << year << " --\n";
        days_in_month = 31;
        break;
      case 8:
        std::cout << "--September " << year << " --\n";
        days_in_month = 30;
        break;
      case 9:
        std::cout << "--October " << year << " --\n";
        days_in_month = 31;
        break;
      case 10:
        std::cout << "--November " << year << " --\n";
        days_in_month = 30;
        break;
      case 11:
        std::cout << "--December " << year << " --\n";
        days_in_month = 31;
        break;
      default:
        std::cout << "Invalid month!\n";
        break;
    }

    // Print days of week heading
    for (auto weekday: {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"}) {
      std::cout << std::setw(COL_WIDTH) << weekday;
    }
    std::cout << "\n";
    
    // Move cursor to first day of the week in the month
    for (size_t i{1}; i < current_day; ++i ) {
      std::cout << std::setw(COL_WIDTH) << "";
    }

    // Print dates
    size_t day_count{1};

    while(day_count <= days_in_month) {
      std::cout << std::setw(COL_WIDTH) << day_count;
      
      ++day_count;
      ++current_day;

      // If last date was Sunday, move to next line
      if (current_day > 7) {
        current_day = 1;
        std::cout << std::endl;
      }
    }
    
    // If last day in the previous month was not Sunday, move to next line
    if (current_day !=1)
      std::cout << "\n";

    // Add space between months
    std::cout << "\n";
  }
    
  return 0;
}
