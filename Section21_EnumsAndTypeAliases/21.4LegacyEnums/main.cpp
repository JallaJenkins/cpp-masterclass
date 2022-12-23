#include <iostream>


enum Direction: unsigned char {
  TopLeft = 64, TopRight, Center, BottomLeft, BottomRight
};

enum Tool {
  Pen, Marker, Eraser, Rectangle, Circle, PaintBucket
};


/*
enum class Direction {
  TopLeft, TopRight, Center, BottomLeft, BottomRight
};

enum class Tool {
  Pen, Marker, Eraser, Rectangle, Circle, PaintBucket
};
*/

int main(){

  Direction direction{TopLeft};  // Errors with enum classes
  Tool tool {Pen};

  std::cout << "direction: " << static_cast<unsigned int>(direction) << '\n';
  std::cout << "tool: " << tool << '\n';
  // std::cout << "(tool > direction): " << (tool > direction) << '\n';

  // Direction direction{Direction::TopLeft};
  // Tool tool {Tool::Pen};

  // std::cout << "direction: " << static_cast<int>(direction) << '\n';
  // std::cout << "tool: " << static_cast<int>(tool) << '\n';
  // std::cout << "(tool > direction): " << (tool > direction) << '\n';  // Hard error with enum classes!

  return 0;
}
