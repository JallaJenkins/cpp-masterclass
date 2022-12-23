#include <iostream>
#include <string>

void say_my_name(const std::string& name);
void process_name(std::string_view name_sv);

int main(){

  process_name("Daniel");

  return 0;
}

void say_my_name(const std::string& name) {
  std::cout << "Your name is: " << name << '\n';
}

void process_name(std::string_view name_sv) {

  // say_my_name(name_sv); // Compiler error: Implicit conversion from s_view to 
                        // std::string is not allowed

  say_my_name(std::string(name_sv)); // Can be fixed by making the conversion explicit


}