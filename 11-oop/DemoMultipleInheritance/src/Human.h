//
// Created by volha on 18.11.2019.
//

#ifndef DEMOMULTIPLEINHERITANCE_SRC_HUMAN_H_
#define DEMOMULTIPLEINHERITANCE_SRC_HUMAN_H_
#include <string>

class Human {
 private:
  std::string name_;
     int age_;

 public:
     Human(std::string name, int age) : name_(name), age_(age) { }

     std::string getName() { return name_; }

     int getAge() { return age_; }

     std::string toString() { return "Human{" + name_ + ", " + std::to_string(age_) + "}"; }
};

#endif //DEMOMULTIPLEINHERITANCE_SRC_HUMAN_H_
