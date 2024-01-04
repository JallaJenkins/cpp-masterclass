#ifndef ENCRYPT_H
#define ENCRYPT_H

// Functor
class Encrypt 
{
public:
  char operator()(const char& param){
    return static_cast<char>(param + 3);
  }
};

#endif  // ENCRYPT_H