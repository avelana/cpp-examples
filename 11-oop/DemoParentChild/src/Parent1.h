//
// Created by volha on 18.11.2019.
//

#ifndef DEMOPARENTCHILD_SRC_PARENT1_H_
#define DEMOPARENTCHILD_SRC_PARENT1_H_

#include <iostream>

class Parent1 {
public:
    int value_;

    int getValue() { return value_; }

    // Parent1(int value):value_(value){}
};

class Child1 : public Parent1 {
private:
    using Parent1::value_;

public:
    Child1(int value) {
        // Мы не можем инициализировать value_, поскольку это член класса Parent (Parent должен
        // инициализировать value_) Но мы можем присвоить значение
        value_ = value;
    }

    int getValue() = delete; // делаем этот метод недоступным
};


#endif // DEMOPARENTCHILD_SRC_PARENT1_H_
