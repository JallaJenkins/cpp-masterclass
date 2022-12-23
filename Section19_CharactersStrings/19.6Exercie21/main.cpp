#include <iostream>
#include <cstring>

int main(){

  const char src1[] {"will old space the replace"};
  const char src2[] {"sense sky  hit has"};
  const char src3[] {"hello went is get"};
  const char src4[] {"red blue yellow orange"};

  char* result;
  result = new char[20]; // Dynamically allocate for space

  strncpy(result, src1 + 15, 4);
  result[4] = '\0';
  strncat(result, src2 + 6, 4);
  result[8] = '\0';
  strncat(result, src3 + 11, 3);
  result[11] = '\0';
  strncat(result, src4 + 4, 4);
  result[15] = '\0';

  std::cout << "result : " << result;

  return 0;
}
