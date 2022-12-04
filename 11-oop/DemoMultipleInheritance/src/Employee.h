//
// Created by volha on 18.11.2019.
//

#ifndef DEMOMULTIPLEINHERITANCE_SRC_EMPLOYEE_H_
#define DEMOMULTIPLEINHERITANCE_SRC_EMPLOYEE_H_
#include <string>
class Employee {
 private:
  std::string employer_; // работодатель
  double wage_; // зарплата

 public:
  Employee(std::string employer, double wage)
      : employer_(employer), wage_(wage) {
  }

  std::string getEmployer() { return employer_; }

  double getWage() { return wage_; }

  std::string toString() { return "Employee{" + std::to_string(wage_) + "}"; }
};

#endif //DEMOMULTIPLEINHERITANCE_SRC_EMPLOYEE_H_
