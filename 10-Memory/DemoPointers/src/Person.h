//
// Created by volha on 11/27/2020.
//

#ifndef PRCPP_1SEM_10_MEMORY_DEMOPOINTERS_SRC_PERSON_H_
#define PRCPP_1SEM_10_MEMORY_DEMOPOINTERS_SRC_PERSON_H_

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

// Инициализация констант и ссылок
class Person {
public:
    const string name;
    int& ageRef;
    int age;

    Person(string n, int a) : name(n), age(a), ageRef(age) { }

    Person(string n) : name(n), age(18), ageRef(age) { }

    void move() { cout << name << " is moving" << endl; }
};


#endif // PRCPP_1SEM_10_MEMORY_DEMOPOINTERS_SRC_PERSON_H_
