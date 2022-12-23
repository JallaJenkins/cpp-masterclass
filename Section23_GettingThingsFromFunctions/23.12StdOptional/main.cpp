#include <iostream>
#include <optional>
#include <string>

int main(){

  // Declare and initialize
  std::optional<int> items{3};
  std::optional<std::string> name{"Jason Leslie"};
  std::optional<double> weight{77.2};
  std::optional<char> character{'s'};

  // Declare and initialize empty
  std::optional<std::string> dog_name{};  // Inits to std::nullopt
  std::optional<int> age{std::nullopt};
  std::optional<char> letter = std::nullopt;  // Triggers unused warning??
  std::optional<double> height = {};          // Triggers unused warning??

  // Read from an std::optional variable
  // std::cout << "items: " << items << '\n';  // Can't print directly - compiler error
  std::cout << "items: " << items.value() << '\n';
  std::cout << "items: " << *items << '\n';
  std::cout << "name: " << name.value() << '\n';
  std::cout << "weight: " << weight.value() << '\n';
  std::cout << "character: " << character.value() << '\n';

  // Write stuff
  dog_name = "Fluffy";
  age = 26;

  std::cout << '\n';
  std::cout << "Writing data in..." << '\n';
  std::cout << "dog_name: " << dog_name.value() << '\n';
  std::cout << "age: " << age.value() << '\n';

  // Reading bad data - thows std::bad_optional_access error
  // std::cout << "letter: " << letter.value() << '\n';
  // std::cout << "height: " << height.value() << '\n';

  // Checking for value before using
  std::cout << std::boolalpha;
  std::cout << "letter.has_value(): " << letter.has_value() << '\n';
  std::cout << "height.has_value(): " << height.has_value() << '\n';
  std::cout << "dog_name.has_value(): " << dog_name.has_value() << '\n';

  // Do check before reading
  std::cout << '\n';
  std::cout << "Conditional reading..." << '\n';

  if(letter.has_value()){
    std::cout << "letter contains a useful value: " << letter.value() << '\n';
  } else {
    std::cout << "letter contains std::nullopt" << '\n';
  }

  if(letter != std::nullopt) {
    std::cout << "letter contains a useful value: " << letter.value() << '\n';
  } else {
    std::cout << "letter contains std::nullopt" << '\n';
  }

  if(dog_name.has_value()){
    std::cout << "dog_name contains a useful value: " << dog_name.value() << '\n';
  } else {
    std::cout << "dog_name contains std::nullopt" << '\n';
  }

  return 0;
}
