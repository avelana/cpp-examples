#include <iostream>

using namespace std;

// Вспомогательный класс
class Object {
public:
    Object() { cout << "Object::constructor()" << endl; }

    ~Object() { cout << "Object::destructor()" << endl; }
};

// Базовый класс
class Base {
public:
    Base() { cout << "Base::constructor()" << endl; }

    virtual ~Base() { cout << "Base::destructor()" << endl; }

    //~Base() { cout << "Base::destructor()" << endl; }
    virtual void print() = 0;
};

// Производный класс
class Derived : public Base {
public:
    Derived() { cout << "Derived::constructor()" << endl; }

    ~Derived() { cout << "Derived::destructor()" << endl; }

    void print() { }

    Object obj;
};

int main() {
    /*
     * указателю на базовый класс присваивается адрес динамически создаваемого объекта производного
     * класса Derived. Затем через этот указатель объект разрушается. При этом наличие виртуального
     * деструктора базового класса обеспечивает вызовы деструкторов всех классов в ожидаемом
     * порядке, а именно, в порядке, обратном вызовам конструкторов соответствующих классов.
     */
    Base* p = new Derived;
    delete p;
    return 0;
}

// #include <iostream>
// class A {
//  public:
//   virtual const char *getName1(int x) {return "A";}
//   virtual const char *getName2(int x) {return "A";}
//   virtual const char *getName3(int x) {return "A";}
//   };
// class B : public A {
//  public:
//   virtual const char *getName1(int x)  { return "B"; }
//  // тип параметра short int
//  virtual const char *getName2(int x) override { return "B"; }
//  // метод является const
//  virtual const char *getName3(int x) override { return "B"; } // всё хорошо, метод является
//  переопределением A::getName3(int)
//  };
//
//
// int main() {
//   B b;
//   A &rParent = b;
//   std::cout << rParent.getName1(1) << '\n';
//   std::cout << rParent.getName2(2) << '\n';
//    return 0;
// }