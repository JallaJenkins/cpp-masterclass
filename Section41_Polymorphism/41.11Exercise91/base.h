#ifndef BASE_H
#define BASE_H

#include <iostream>

class Base {
  int m_1{};

public:
  Base() = default;
  Base(int n);
  virtual ~Base();

  virtual void print() {
    std::cout << "data[ x : " << m_1 << "]";
  }

  int get_m_1() {
    return m_1;
  }

  static int m_count;

};

class Derived : public Base {
  int m_2;

public:
  Derived() = default;
  Derived(int n, int m);
  virtual ~Derived();

  virtual void print() {
    std::cout << "data[ x : " << get_m_1() << " y:" << m_2 << "]";
  }

  int static m_count;

};


#endif // BASE_H