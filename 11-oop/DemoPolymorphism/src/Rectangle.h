//
// Created by volha on 14.11.2019.
//

#ifndef DEMOPOLYMORPHISM_SRC_RECTANGLE_H_
#define DEMOPOLYMORPHISM_SRC_RECTANGLE_H_
#include <iostream>
#include "Shape.h"
class Rectangle : public Shape {
 public:
  Rectangle(int a = 0, int b = 0) : Shape(a, b) {}

  int area() {
    std::cout << "Rectangle class area : " << (width * height) << '\n';
    return (width * height);
  }
};

#endif //DEMOPOLYMORPHISM_SRC_RECTANGLE_H_
