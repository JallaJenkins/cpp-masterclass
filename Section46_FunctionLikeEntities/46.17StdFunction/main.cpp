#include <iostream>
#include <functional>
#include "boxcontainer.h"


// Function pointer
char encrypt(const char& param){
  return static_cast<char>(param + 3);
}


// Functor
struct Decrypt{
  char operator()(const char& param){
    return static_cast<char>(param - 3);
  }
};


// Modifying a BoxContainer of strings
BoxContainer<std::string>& modify(BoxContainer<std::string>& sentence,
      // char(*modifier)(const char&)){             // function poitner syntax
      std::function<char(const char&)> modifier){   // std::function syntax

  for (size_t i{}; i < sentence.size(); ++i){
    for (size_t j{}; j < sentence.get_item(i).size(); ++j){
      sentence.get_item(i)[j] = modifier(sentence.get_item(i)[j]);
    }
  }
  return sentence;
}


std::string get_best(const BoxContainer<std::string>& sentence, 
    // Function pointer syntax:
    // bool(*comparator)(const std::string& str1, const std::string& str2))

    // std::function syntax:
    std::function<bool(const std::string& str1, const std::string& str2)> comparator)
{
  std::string best = sentence.get_item(0);
  for(size_t i{}; i < sentence.size(); ++i){
    if (comparator(sentence.get_item(i), best)){
      best = sentence.get_item(i);
    }
  }
  return best;
}


int main(){

  // Basic usage of std::cuntion: storing function-like entities
  std::function<char(const char&)> my_modifier;

  // Function pointer
  my_modifier = encrypt;
  std::cout << "A encrypted becomes: " << my_modifier('A') << '\n';

  // Functir
  Decrypt decrypt;
  my_modifier = decrypt;
  std::cout << "D decrypted becomes: " << my_modifier('D') << '\n';

  // Lambda function
  my_modifier = [](const char& param){
    return static_cast<char>(param + 3);
  };
  std::cout << "A encrypted becomes: " << my_modifier('A') << '\n';

  
  std::cout << "------------------\n";


  BoxContainer<std::function<char(const char&)>> func_entities;
  func_entities.add(encrypt);
  func_entities.add(decrypt);
  func_entities.add([](const char& param){
    return static_cast<char>(param + 3);
  });

  for(size_t i{}; i < func_entities.size(); ++i){
    std::cout << "result: " << i << ", D transformed becomes: "
              << func_entities.get_item(i)('D') << '\n';
  }

  std::cout << "-------------------\n";

  std::cout << "Modifying the quote:\n";
  BoxContainer<std::string> quote;
  quote.add("The");
  quote.add("sky");
  quote.add("is");
  quote.add("blue");
  quote.add("my");
  quote.add("friend");

  std::cout << "Initial: " << quote << '\n';
  std::cout << "Encrypted: " << modify(quote, encrypt) << '\n';
  std::cout << "Decrypted: " << modify(quote, decrypt) << '\n';

  auto greater_lex = [](const std::string& str1, const std::string& str2){
    return str1 > str2;
  };

  std::cout << '\n';
  std::cout << "Getting the best: " << '\n';
  std::cout << "greater lex: " << get_best(quote, greater_lex) << '\n';

  return 0;
}
