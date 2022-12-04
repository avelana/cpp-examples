//
// Created by volha on 17.11.2019.
//

#ifndef DEMOPARENTCHILD_SRC_CHILD_H_
#define DEMOPARENTCHILD_SRC_CHILD_H_
#include "Parent.h"

class Child : private Parent {
private:
    double value_;

public:
    //  Child(double value_ = 0.0) : value_(value_) {
    //    std::cout << "Child, value_ = " << value_ << "\n";
    //
    //  }
    //
    Child() {
        val_public_ =
            1; // разрешено: доступ к открытым членам родительского класса из дочернего класса
        val_protected_ = 2; // разрешено: доступ к защищённым членам
        // родительского класса из дочернего класса
        //  val_private_ = 3; // запрещено: доступ к закрытым членам родительского
        // класса из дочернего класса
    }

    //  Child(double value_=0.0, int id=0)
    //  // Не сработает
    //      : value_(value_), id_(id)
    //  {
    //  }

    Child(double value = 0.0, int id = 0) : Parent(id), value_(value) { //      : value_(value_) {
        // Сработает, но  не для константных переменных
        std::cout << "Child, value_ = " << value_ << " id = " << getId() << "\n";
        // id_ = id;
        std::cout << "Child, value_ = " << value_ << " id = " << id_ << "\n";
    }

    double getValue() const { return value_; }

    //  Child(double value_ = 0.0, int id = 0) : Parent(id),// вызывается конструктор Parent(int) со
    //  значением id
    //                                          value_(value_) {
    //    std::cout << "Child\n";
    //  }
    //
    //  double getValue() const { return value_; }
    //  std::string toString() {
    //    return "I am a Child: id = " + std::to_string(getId()) + "value_ = " +
    //    std::to_string(value_) + "\n";
    //  }

    std::string toString() {
        return "The Child (" + Parent::toString()
            + " I am a Child: , value_ = " + std::to_string(value_) + ")\n";
    }

    //+ //" id = "
    //    //+ std::to_string(getId())
};

// class Baby : private Child {
//   Baby() {
//     val_public_ = 1; // разрешено: доступ к открытым членам родительского класса из дочернего
//     класса
//     //val_private_ = 2; // запрещено: доступ к закрытым членам родительского класса из дочернего
//     класса val_protected_ = 3; // разрешено: доступ к защищённым членам родительского класса из
//     дочернего класса
//   }
// };
#endif // DEMOPARENTCHILD_SRC_CHILD_H_