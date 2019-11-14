//
// Created by volha on 14.11.2019.
//

#ifndef DEMOPOLYMORPHISM_SRC_TRIANGLE_H_
#define DEMOPOLYMORPHISM_SRC_TRIANGLE_H_
#include <iostream>
#include "Shape.h"
class Triangle : public Shape {
 public:
  Triangle(int a = 0, int b = 0) : Shape(a, b) {}

  int area() {
    std::cout << "Triangle class area : " << (width * height / 2) << '\n';
    return (width * height / 2);
  }
};

#endif //DEMOPOLYMORPHISM_SRC_TRIANGLE_H_
