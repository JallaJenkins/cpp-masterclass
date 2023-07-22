#include "scores.h"
#include <cassert>
#include <iostream>

double& Scores::operator[](size_t index) {
  assert(index < 20);
  return m_scores[index];
}

const double& Scores::operator[](size_t index) const {
  assert(index < 20);
  return m_scores[index];
}

void Scores::print_info() const {
  std::cout << course_name << " scores:\n";
  for(size_t i{}; i < 20; ++i) {
    std::cout << '[' << i << "]: " << m_scores[i] << ' ';
  }
  std::cout << '\n';
}