//
// Created by volha on 18.11.2019.
//

#ifndef DEMOMULTIPLEINHERITANCE_SRC_TEACHER_H_
#define DEMOMULTIPLEINHERITANCE_SRC_TEACHER_H_
#include "Human.h"
#include "Employee.h"

// Класс Teacher открыто наследует свойства классов Human и Employee
class Teacher : public Human, public Employee {
 private:
  int teacherGrade_; // ранг

 public:
  Teacher(std::string name, int age, std::string employer, double wage, int teachesGrade)
      : Human(name, age), Employee(employer, wage), teacherGrade_(teachesGrade) {
  }
};

#endif //DEMOMULTIPLEINHERITANCE_SRC_TEACHER_H_
