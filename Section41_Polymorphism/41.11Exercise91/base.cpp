#include "base.h"


int Base::m_count {0};

Base::Base(int n) : m_1{n}
{
  ++m_count;
}

Base::~Base()
{
  --m_count;
}


int Derived::m_count{0};

Derived::Derived(int n, int m) : Base(n), m_2(m)
{
  ++m_count;
}

Derived::~Derived()
{
  --m_count;
}