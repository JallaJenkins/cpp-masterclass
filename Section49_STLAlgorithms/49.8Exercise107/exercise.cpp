
#include "exercise.h"
#include <iostream>

//YOUR IMPLEMENTATIONS WILL GO IN THIS FILE. DON'T TOUCH THE HEADER FILE

//Implementation of the default constructor and destructor
MovableStack::MovableStack()
  : size{0}, capacity{1} {
    data = new int[capacity];
}

MovableStack::~MovableStack() {
  delete[] data;
  data = nullptr;
}

//Implementation for the copy and move constructors
MovableStack::MovableStack(const MovableStack& other)
  : size{other.size}, capacity{other.capacity}
{
  data = new int[capacity];
  std::copy(other.data, other.data + other.size, data);
}

MovableStack::MovableStack(MovableStack&& other) noexcept 
  : size{other.size}, capacity{other.capacity} 
{
  data = std::move(other.data);
}

//Implemetations for the copy and move assignment operators

MovableStack& MovableStack::operator=(const MovableStack& other){
  if(this != &other) {
    size = other.size;
    capacity = other.capacity;
    data = new int[capacity];
    std::copy(other.data, other.data + other.size, data);
  }
  return *this;
}

MovableStack& MovableStack::operator=(MovableStack&& other) noexcept {
  size = other.size;
  capacity = other.capacity;
  data = std::move(other.data);
}

void MovableStack::push(int value) {
    if (size == capacity) {
        int* newData = new int[capacity * 2];
        std::copy(data, data + size, newData);
        delete[] data;
        data = newData;
        capacity *= 2;
    }
    data[size++] = value;
}

// Implemetations of top(), pop(), empty() and getSize()

int MovableStack::top() const {
  if (size <= 0) {
    throw std::out_of_range("stack is empty, cannot return top element");
  }
  return data[size - 1];
}

int MovableStack::pop(){
  if (size <= 0) {
    throw std::out_of_range("stack is empty, cannot pop element");
  }
  int popped_int = data[size - 1];
  --size;
  return popped_int;
}

bool MovableStack::empty() const {
  return size <= 0;
}

int MovableStack::getSize() const {
  return size;
}