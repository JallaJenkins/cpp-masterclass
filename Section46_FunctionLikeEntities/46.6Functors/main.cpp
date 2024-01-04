#include <iostream>
#include "encrypt.h"
#include "decrypt.h"

char encrypt(const char& param) {
  return static_cast<char> (param + 3);
}

char decrypt(const char& param) {
  return static_cast<char> (param - 3);
}



template <typename Modifier>
std::string& modify(std::string& str_param, Modifier modifier){
  for (size_t i{}; i < str_param.size(); ++i){
    str_param[i] = modifier(str_param[i]);  // Calling the callback
  }
  return str_param;
}

int main(){

  std::string str{"Hello"};

  std::cout << "Modifying string through function pointers:\n";
  std::cout << "Initial: " << str << '\n';
  std::cout << "Encrypted: " << modify(str, encrypt) << '\n';
  std::cout << "Decrypted: " << modify(str, decrypt) << '\n';

  std::cout << "------------------\n";

  Encrypt encrypt_functor;
  Decrypt decrypt_functor;

  std::cout << "encrypt_functor: " << encrypt_functor('A') << '\n';
  std::cout << "decrypt_functor: " << decrypt_functor('D') << '\n';

  std::cout << "------------------\n";

  std::cout << "Modifying through functors:\n";
  std::cout << "Initial: " << str << '\n';
  std::cout << "Encrypted: " << modify(str, encrypt_functor) << '\n';
  std::cout << "Decrypted: " << modify(str, decrypt_functor) << '\n';

  // modify(str, 34);

  return 0;
}
