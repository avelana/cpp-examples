//
// Created by volha on 20.11.2019.
//

#ifndef PRCPP_1SEM_11_OOP_DEMOMULTIPLEINHERITANCE_SRC_COPIER_H_
#define PRCPP_1SEM_11_OOP_DEMOMULTIPLEINHERITANCE_SRC_COPIER_H_
#include <iostream>

class PoweredDevice {
  static int counter;
  const int id_;
  static int GenerateId() {
    return (counter++);
  }

 public:
  PoweredDevice() : id_(GenerateId()) {
  }
  void turn_on() {
    std::cout << "Device is on.\n";
  }
  int getId() {
    return id_;
  }
};

int PoweredDevice::counter = 10000;

class Scanner : virtual public PoweredDevice {
 public:
//  void turn_on() {
//    std::cout << "Scanner is on.\n";
//  }
  //Scanner(){}
};

class Printer : public virtual PoweredDevice {
 public:
//  void turn_on() {
//    std::cout << "Printer is on.\n";
//  }
  //Printer(){}
};

class Copier : public Scanner, public Printer {

 public:
//  // раскомментирование этой функции решит проблему ромба (решение 3)
//  void turn_on() {
//    std::cout << "Copier is on.\n";
//  }
  Copier() {}
};

#endif //PRCPP_1SEM_11_OOP_DEMOMULTIPLEINHERITANCE_SRC_COPIER_H_
