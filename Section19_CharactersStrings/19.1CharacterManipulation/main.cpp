#include <iostream>
#include <cctype>

int main(){

  /*
  // Check if a character is alphanumeric
  std::cout << '\n';
  std::cout << "std::isalnum:\n";
  std::cout << "C is alnum: " << std::isalnum('C') << '\n';
  std::cout << "^ is alnum: " << std::isalnum('^') << '\n';

  // Can use this as a test condition
  char input_char {'*'};
  if (std::isalnum(input_char)) {
    std::cout << input_char << " is alphanumberic.\n";
  } else {
    std::cout << input_char << " is not alphanumberic.\n";
  }
  */

  /*
  // Check if a character is alphabetic
  // Returns 0 is non-alpha, and non-0 int if alpha
  std::cout << '\n';
  std::cout << "std::isalpha:\n";
  std::cout << "C is alpha: " << std::isalpha('C') << '\n';
  std::cout << "^ is alpha: " << std::isalpha('^') << '\n';
  std::cout << "7 is alpha: " << std::isalpha('7') << '\n';
  std::cout << "e is alpha: " << std::isalpha('e') << '\n';  // NOTE does not return 1!

  if (std::isalpha('e')) {
    std::cout << 'e' << " is alphabetic.\n";
  } else {
    std::cout << 'e' << " is not alphabetic.\n";
  }
  */

  /*
  // Check if a character is blank
  std::cout << '\n';
  std::cout << "std::isblank:\n";
  char message[] {"Hello there. How are you doing? The sun is shining."};
  std::cout << "message: " << message << '\n';

  // Find and print blank index
  size_t blank_count {};
  for (size_t i{0}; i < std::size(message); ++i) {
    //std::cout >> "Value: " << message[i] << '\n;
    if(std::isblank(message[i])) {
      std::cout << "Found a blank character at index: [" << i << "]\n";
      ++blank_count;
    }
  }
  std::cout << "In total we found " << blank_count << " blank characters.\n";
  */

  /*
  // Check if character is lowercase or uppercase
  std::cout << "std:islower and std::isupper:\n";

  std::cout << '\n';
  char thought[] {"The C++ Programming language is one of the most used on the planet"};
  size_t lowercase_count{};
  size_t uppercase_count{};

  // Print original string for ease of comparison on the terminal
  std::cout << "Original string: " << thought << '\n';

  for (auto character: thought) {
    if(std::islower(character)) {
      std::cout << ' ' << character;
      ++lowercase_count;
    }
    if (std::isupper(character)) {
      ++uppercase_count;
    }
  }
  std::cout << '\n';
  std::cout << "Found " << lowercase_count << " lowercase characters and "
            << uppercase_count << " uppercase characters.\n";
  */

  /*
  // Check if character is a digit
  std::cout << '\n';
  std::cout << "std::isdigit:\n";

  char statement[] {"Mr Hamilton owns 221 cows. That's a lot of cows! The kid exclaimed."};

  size_t digit_count {};

  for (auto character: statement) {
    if (std::isdigit(character)) {
      std::cout << "Found digit: " << character << '\n';
      ++digit_count;
    }
  }
  std::cout << "Found " << digit_count << " digits in the statement string\n";
  */

  // Changing character case
  std::cout << '\n';
  std::cout << "std::tolower and std::toupper:\n";
  char original_str[] {"Home. The feeling of belonging"};
  char dest_str[std::size(original_str)];

  // Turn this to uppercase. Change the array in place
  for (size_t i{}; i < std::size(original_str); ++i) {
    dest_str[i] = std::toupper(original_str[i]);
  }

  std::cout << "Original string: " << original_str << '\n';
  std::cout << "Uppercase string: " << dest_str << '\n';

  // Turn this to lowercase. Change the array in place
  for (size_t i{}; i < std::size(original_str); ++i) {
    dest_str[i] = std::tolower(original_str[i]);
  }

  std::cout << "Lowercase string: " << dest_str << '\n';
  return 0;
}
