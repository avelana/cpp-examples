#include <iostream>

class A {
public:
    virtual const char* getName1(int x) { return "A"; }

    virtual const char* getName2(int x) { return "A"; }

    virtual const char* getName3(int x) { return "A"; }
};

class B : public A {
public:
    virtual const char* getName1(short int x) { return "B"; } // тип параметра short int

    virtual const char* getName2(int x) const { return "B"; } // метод является const
};

class B1 : public A {
public:
    virtual const char* getName1(short int x) override {
        return "B";
    } // ошибка компиляции, метод не является переопределением

    virtual const char* getName2(int x) const override {
        return "B";
    } // ошибка компиляции, метод не является переопределением

    virtual const char* getName3(int x) override {
        return "B";
    } // всё хорошо, метод является переопределением A::getName3(int)
};

int main() {
    B1 b;
    A& rParent = b;
    std::cout << rParent.getName1(1) << '\n';
    std::cout << rParent.getName2(2) << '\n';

    return 0;
}