#include <iostream>
#include "boxcontainer.h"

char encrypt(const char& param) {
  return static_cast<char> (param + 3);
}

char decrypt(const char& param) {
  return static_cast<char> (param - 3);
}

std::string& modify(std::string& str_param, char(*modifier)(const char&)){
  for (size_t i{}; i < str_param.size(); ++i) {
    str_param[i] = modifier(str_param[i]);
  }
  return str_param;
}

// Modifying a BoxContainer of strings
BoxContainer<std::string>& modify(BoxContainer<std::string>& sentence,
                                  char(*modifier)(const char&))
{
  for(size_t i{}; i < sentence.size(); ++i) {
    for(size_t j{}; j < sentence.get_item(i).size(); ++j) {
      sentence.get_item(i)[j] = modifier(sentence.get_item(i)[j]);
    }
  }
  return sentence;
}

using str_comparator = bool(*)(const std::string&, const std::string&);

std::string get_best(const BoxContainer<std::string>& sentence,
                    str_comparator comparator)
{
  std::string best = sentence.get_item(0);
  for(size_t i{}; i < sentence.size(); ++i){
    if(comparator(sentence.get_item(i), best)){
      best = sentence.get_item(i);
    }
  }
  return best;
}

bool larger_in_size(const std::string& str1, const std::string& str2){
  return (str1.size() > str2.size());
}

bool greater_lexicographically(const std::string& str1, const std::string& str2){
  return (str1 > str2);
}

int main(){

  // std::cout << "A encrypted: " << encrypt('A') << '\n';
  // std::cout << "D decrypted: " << decrypt('D') << '\n';

  std::string msg("Hello");
  // std::string outcome = modify(msg, encrypt);
  // std::string outcome = modify(msg, decrypt);

  // std::cout << "outcome: " << outcome << '\n';

  // modify(msg, encrypt);
  // std::cout << "outcome: " << msg << '\n';

  BoxContainer<std::string> quote;
  quote.add("The");
  quote.add("sky");
  quote.add("is");
  quote.add("blue");
  quote.add("my");
  quote.add("friend");
  std::cout << "Initial : " <<  quote << std::endl;
  std::cout << "Encrypted : " << modify(quote,encrypt) << std::endl;
  std::cout << "Decrypted : " << modify(quote,decrypt) << std::endl;

  std::cout << "---------------------\n";

  str_comparator callback{larger_in_size};

  std::cout << "larger in size: " << get_best(quote, callback) << '\n';
  std::cout << "greater lexicographically: " 
            << get_best(quote, greater_lexicographically) << '\n';

  return 0;
}
