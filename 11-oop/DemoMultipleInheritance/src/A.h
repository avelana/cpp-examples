//
// Created by volha on 21.11.2019.
//

#ifndef PRCPP_1SEM_11_OOP_DEMOMULTIPLEINHERITANCE_SRC_A_H_
#define PRCPP_1SEM_11_OOP_DEMOMULTIPLEINHERITANCE_SRC_A_H_

class A {
 public:
  int a;
};
class B {

 public:
  float a;

};
class C : public A, public B {

};

#endif //PRCPP_1SEM_11_OOP_DEMOMULTIPLEINHERITANCE_SRC_A_H_
