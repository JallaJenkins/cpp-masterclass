#include <iostream>
#include <utility>
#include <vector>

int main(){

  // Create pair
  std::cout << "Creating pairs:\n";
  std::pair<int, std::string> pair1(0, "Book shelf");
  // auto pair2 = std::make_pair<int, std::string>(1, "Table");
  auto pair2 = std::make_pair(1, "Table");  // Deduces variable types

  // std::cout << "pair1: " << pair1 << '\n'; // No operator<< for pairs

  std::cout << "pair1: (" << pair1.first << ", " << pair1.second << ")\n";
  std::cout << "pair2: (" << pair2.first << ", " << pair2.second << ")\n";

  // auto[] syntax to deconstuct pair into two seperate variables
  std::cout << '\n';
  std::cout << "auto[] syntax - deconstruct pair into seperate variables:\n";
  auto [int_var, string_var] = pair1;
  std::cout << "pair1 (auto[] syntax): (" << int_var << ", " << string_var << ")\n";

  // Template type deduction
  std::cout << '\n';
  std::cout << "Template argument deduction:\n";
  std::pair student(33165, std::string("John Snow"));
  std::cout << "student ID: " << student.first << '\n';
  std::cout << "student name: " << student.second << '\n';

  // Collection of pairs
  std::cout << '\n';
  std::cout << "Collection of pairs:\n";
  std::vector<std::pair<int, std::string>> collection {
    {10, "Earth"},
    {20, "Spins"},
    {30, "From"},
    {40, "Left"},
    {50, "To"},
    {60, "Right"}
  };

  // Traverse: syntax 1
  std::cout << '\n';
  std::cout << "syntax 1:\n";
  std::cout << "collection: [ ";
  for(const auto& elt: collection){
    std::cout << "(" << elt.first << ", " << elt.second << ") ";
  }
  std::cout << "]\n";

  // Travers: syntax 2
  std::cout << '\n';
  std::cout << "syntax 2:\n";
  std::cout << "collection: [ ";
  for(auto[key, value] : collection){
    std::cout << "(" << key << ", " << value << ") ";
  }
  std::cout << "]\n";

  return 0;
}
