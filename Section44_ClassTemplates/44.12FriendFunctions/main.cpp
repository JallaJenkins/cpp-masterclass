#include <iostream>

template<typename T>
class TemplateClass;  // forward decl to make func decl possible

template<typename T>
void some_func(TemplateClass<T>);

int main(){

  return 0;
}
