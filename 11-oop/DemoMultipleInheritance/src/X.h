//
// Created by volha on 21.11.2019.
//

#ifndef PRCPP_1SEM_11_OOP_DEMOMULTIPLEINHERITANCE_SRC_X_H_
#define PRCPP_1SEM_11_OOP_DEMOMULTIPLEINHERITANCE_SRC_X_H_

class X {
 protected:
  int value_;
 public:
  X() { value_ = 0; }
  X(int val) : value_(val) {}
};

class Y : public virtual X {
 protected:
  char ch_;
 public:
  Y(char c, int val) : X(val), ch_(c) {}
};

class Z : public virtual X {
 protected:
  float d_;
 public:
  Z(float d, int val) : X(val), d_(d) {}
};

class Q : public Y, public Z {
 public:
  //Q(char c, float d, int val) : Y(c, val), Z(d, val) {}
  Q(char c, float d, int val) : X(val), Y(c, val), Z(d, val) {}
  std::string toString() {
    std::string tmp{ch_};
    return tmp + " " + std::to_string(d_) + " " + std::to_string(value_);

  }
};

#endif //PRCPP_1SEM_11_OOP_DEMOMULTIPLEINHERITANCE_SRC_X_H_
class A {
 public:
  class B {

  }
}
