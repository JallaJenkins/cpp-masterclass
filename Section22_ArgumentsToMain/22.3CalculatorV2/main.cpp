#include <iostream>
// #include <cstdlib>
#include <cstring>

int main(int argc, char** argv){

  // Check the number of parameters
  if (argc != 4) {
    std::cerr << "Program can only be called with 3 arguments like:\n";
    std::cerr << "rooster.exe a + b\n";
    std::cerr << "You called with: ";
    for (int i{0}; i < argc; ++i) {
      std::cout << " " << argv[i];
    }
    std::cout << '\n';
    return 0;
  }

  // Grab the operands
  double first_number {atof(argv[1])};
  double second_number {atof(argv[3])};

  if ((first_number == 0.0) || (second_number == 0.0)){
    std::cout << "Please use non-zero numbers\n";
    return 0;
  }

  // Grab the operation
  const char* operation {argv[2]};
  char c;

  if ((std::strlen(operation) == 1) &&
        ((operation[0] == '+') ||
        (operation[0] == '-') ||
        (operation[0] == 'x') ||
        (operation[0] == '/'))) {
          c = operation[0];
        } else {
          std::cout << "'" << operation << "' is not a valid operation.\n";
          return 0;
        }

  // Do the operation
  switch(c) {
    case '+':
    std::cout << first_number << " + " << second_number << " = "
              << first_number + second_number << '\n';
    break;

    case '-':
    std::cout << first_number << " - " << second_number << " = "
              << first_number - second_number << '\n';
    break;

    case 'x':
    std::cout << first_number << " x " << second_number << " = "
              << first_number * second_number << '\n';
    break;

    case '/':
    std::cout << first_number << " / " << second_number << " = "
              << first_number / second_number << '\n';
    break;

    default:
    std::cout << "Invalid input\n";
  }

  return 0;
}

