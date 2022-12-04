//
// Created by volha on 17.11.2019.
//

#ifndef DEMOPARENTCHILD_SRC_A_H_
#define DEMOPARENTCHILD_SRC_A_H_
#include <iostream>

// class A {
//  public:
//   A() {
//     std::cout << "Constructor A\n";
//   }
//   ~A() {
//     std::cout << "Destructor A: " << '\n';
//   }
// };
// class B : public A {
//  public:
//   B() {
//     std::cout << "Constructor B\n";
//   }
// };
//
// class C : public B {
//  public:
//   C() {
//     std::cout << "Constructor C\n";
//   }
// };
//
// class D : public C {
//  public:
//   D() : C(){
//     std::cout << " Constructor D\n";
//   }
// };

class A {
public:
    A() { std::cout << "Constructor A\n"; }

    A(int a) { std::cout << "Constructor A(" << a << ")\n"; }

    ~A() { std::cout << "Destructor A: " << '\n'; }
};

class B : public A {
public:
    B() : A() { std::cout << "Constructor B\n"; }

    B(int a, double b) : A(a) { std::cout << "Constructor B: " << b << '\n'; }

    ~B() { std::cout << "Destructor B: " << '\n'; }
};

class C : public B {
public:
    C() : B() { std::cout << "Constructor C:\n"; }

    C(int a, double b, char c) : B(a, b) { std::cout << "Constructor C: " << c << '\n'; }

    ~C() { std::cout << "Destructor C: " << '\n'; }
};

#endif // DEMOPARENTCHILD_SRC_A_H_
