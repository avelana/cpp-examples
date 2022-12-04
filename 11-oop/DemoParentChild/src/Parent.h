//
// Created by volha on 17.11.2019.
//

#ifndef DEMOPARENTCHILD_SRC_PARENT_H_
#define DEMOPARENTCHILD_SRC_PARENT_H_
#include <iostream>

class Parent {
public:
    int val_public_; // доступ к этому члену открыт для всех объектов
protected:
    int val_protected_; // доступ к этому члену открыт для других членов класса Parent,
                        // дружественных классов/функций, дочерних классов
private:
    int val_private_; // доступ к этому члену открыт только для других членов класса Parent и для
                      // дружественных классов/функций (но не для дочерних классов)

protected:
    // int id_;
    const int id_;
    // int &id_;
public:
    //  Parent(int id):id_{id} {
    //    //this(id);
    //  }


    Parent(int id = 0) : id_(id) { std::cout << "Parent \n"; }

    //  Parent(int id = 0){
    //     id_ = id ;
    //    std::cout << "Parent\n";
    //  }

    int getId() const { return id_; }

    std::string toString() { return "I am a Parent: id = " + std::to_string(id_) + "\n"; }
};


#endif // DEMOPARENTCHILD_SRC_PARENT_H_
