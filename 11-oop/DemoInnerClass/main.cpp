#include <iostream>
using namespace std;

class Global {
    int n;

public:
    int i;
    static float f;

    class Internal {
        void func(Global& glob) {
            i = 3; // Ошибка: используется имя нестатического данного
            // из охватывающего класса
            f = 3.5; // Правильно: f - статическая переменная
            glob.i = 3; // Правильно: обращение к членам охватывающего
            // класса через объект этого класса
            n = 7; // Ошибка: обращение к private-члену охватывающего
            // класса
            glob.n = 13; // Правильно: обращение к членам внешнего
            // класса через объект этого класса
        }
    };
};

class OuterClass {
public:
    class InnerClass {
    public:
        static double d;

        // во вложенном классе можно использовать статические переменные
        void pr() { // внутренний метод
            cout << d << endl;
        }
    }; // конец объявления вложенного класса

    int pr1() {
        InnerClass obj;
        // InnerClass::pr();//обращение к методу вложенного класса через ::
        obj.pr();
        return 0;
    }

    InnerClass c;

    void pr2() {
        c.pr(); // обращение к методу вложенного класса через объект
    }

}; // конец объявления внешнего класса

double OuterClass::InnerClass::d = 5.32; // определение статической переменной

class LinkedList {
public:
    class Iterator { // вложенный класс
    public:
        void insert(int x);
        int erase();
    };

private:
    class Node { // вложенный класс
    public:
        Node* next;
        int data;
    };
};

class A { }; // внешний клаcc

class B {
public:
    class C : public A { }; // вложенный клаcc наcледует от внешнего
};

class D : public B::C { }; // внешний клаcc наcледует от вложенного

class E {
    class F : public B::C { }; // вложенный клаcc наcледует от вложенного

    class G : public F { };
};

int main() {
    OuterClass oc;
    oc.c.pr(); // нестатический член вложенного класса
    cout << OuterClass::InnerClass::d << endl; // статический член  вложенного класса
    cout << oc.pr1() << endl;
    return 0;
}
