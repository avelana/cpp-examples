//
// Created by volha on 14.11.2019.
//

#ifndef PRCPP_1SEM_11_OOP_DEMOPOLYMORPHISM_SRC_POINT3D_H_
#define PRCPP_1SEM_11_OOP_DEMOPOLYMORPHISM_SRC_POINT3D_H_
#include "Point2D.h"
class Point3D : public Point2D {
 public:
  Point3D(int x, int y, int z) : Point2D(x, y), z_{z} {
  }

 protected:
  int z_;

};

#endif //PRCPP_1SEM_11_OOP_DEMOPOLYMORPHISM_SRC_POINT3D_H_
