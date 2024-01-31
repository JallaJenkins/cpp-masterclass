#include <iostream>
#include <algorithm>
#include <vector>
#include "point.h"

template<typename T>
void print_collection(const T& collection){
  std::cout << "Collection: [";
  for(const auto& elt : collection){
    std::cout << " " << elt;
  }
  std::cout << " ]\n";
}

int main(){

  // Projections
  std::cout << '\n';
  std::cout << "Sorting points (default based on length):\n";
  // Point raw_points[] {{10, 90}, {30, 70}, {20, 80}};
  std::vector<Point> points {{10, 90}, {30, 70}, {20, 80}};
  print_collection(points);

  // Sorting with the default comparator (based on <, defined by <=> in Point class)
  std::cout << "Using default comparator:\n";
  std::ranges::sort(points);
  print_collection(points);

  // Sorting with a projection
  // Data is processed into a project, and the projection is passed to the comparator
  // Here we pass a projection of m_x for the comparator to use
  // Points are then sorted by value of m_x rather than length
  std::cout << '\n';
  std::cout << "projection on Point::m_x:\n";
  std::ranges::sort(points, std::less<>(), [](auto const& p){return p.m_x;});
  print_collection(points);

  // Projecting with direct member variable
  std::cout << '\n';
  std::cout << "projection on Point::m_y using direct member variable reference:\n";
  std::ranges::sort(points, std::less<>(), &Point::m_y);
  print_collection(points);

  // Projections with for_each
  std::cout << '\n';
  std::cout << "Projections with for_each:\n";

  auto print = [](const auto& n){std::cout << " " << n;};
  using pair = std::pair<int, std::string>;
  std::vector<pair> pairs {{1, "one"}, {2, "two"}, {3, "three"}};

  std::cout << "Project using first member of pair: ";
  std::ranges::for_each(pairs, print, &pair::first);
  std::cout << '\n';

  std::cout << "Project using second member of pair: ";
  std::ranges::for_each(pairs, print, [](const auto& p){return p.second;});

  return 0;
}
