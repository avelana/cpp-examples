//
// Created by volha on 14.11.2019.
//

#ifndef DEMOPOLYMORPHISM_SRC_SHAPE_H_
#define DEMOPOLYMORPHISM_SRC_SHAPE_H_
#include <iostream>
class Shape {
 protected:
  int width, height;

 public:
     Shape(int a = 0, int b = 0) {
         width = a;
         height = b;
     }

     virtual int area() {
         std::cout << "Parent class area :\n";
         return 0;
     }
};

#endif //DEMOPOLYMORPHISM_SRC_SHAPE_H_


/*
 * virtual
* Чистые виртуальные функции
Если включить виртуальную функцию в базовый класс, чтобы ее можно было переопределить в производном классе,
чтобы она соответствовала объектам этого класса, но при этом нет никакого значимого определения,
которое вы могли бы дать для функции в базовом классе , то
// pure virtual function
  virtual int area() = 0;
*/
