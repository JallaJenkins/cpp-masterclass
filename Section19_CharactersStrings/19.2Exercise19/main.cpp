#include <iostream>
#include <cctype>

int main(){

  char data[] {"John was 8 years old at the time."};
  unsigned int size {std::size(data)};

  unsigned int vowel_count{};
  unsigned int consonant_count{};

  char vowels[] {"aeiou"};

  for(unsigned int i{0}; i < size; ++i) {
    if (std::isalpha(data[i])) {
      bool isvowel {false};

      for (unsigned int j{0}; j < std::size(vowels); ++j) {
        if (std::tolower(data[i]) == vowels[j]) {
          isvowel = true;
          break;
        }
      }

      if (isvowel) {
        vowel_count++;
      } else {
        consonant_count++;
      }
    }
  }

  std::cout << "The string contains " << vowel_count << " vowels and ";
  std::cout << consonant_count << " consonants";

  return 0;
}
