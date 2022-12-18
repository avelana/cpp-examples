#include "Stack.h"
#include <iostream>
#include <new>
using namespace std;

int main() {
    // объявить стек из целых чисел
    Stack<int> st1;

    st1.Print(); // st1 = { }

    // +5
    st1.push(5); // st1 = { 5 }

    // +9
    st1.push(9); // st1 = { 5, 9 }

    // +13
    st1.push(13); // st1 = { 5, 9, 13 }

    // +7
    st1.push(7); // st1 = { 5, 9, 13, 7 }
    st1.Print();
    cout << "Count: " << st1.Count() << endl;

    // ----------------------
    Stack<int> st2;
    st2 = st1; // вызов оператора копирования
    Stack<int> st3 = st2; // вызов конструктора копирования
    // ----------------------

    // -1 item
    int t;
    t = st1.pop(); // t = 7
    cout << "Delete item: " << t << endl;
    st1.Print(); // 5, 9, 13
    cout << "Head: " << st1.Head() << endl;

    // -2 items
    st1.pop(); // st1 = { 5, 9 }
    st1.pop(); // st1 = { 5 }
    st1.Print();

    // -2 items
    st1.pop(); // st1 = { }
    st1.pop();
    st1.Print();

    if (st1.IsEmpty())
        cout << "Stack is empty." << endl;
    else
        cout << "Stack is not empty" << endl;

    cout << "Stack st2:" << endl;
    st2.Print();

    cout << "Stack st3:" << endl;
    st3.Print();

    // вызов оператора копирования в виде цепочки
    st1 = st3 = st2;
    st1.Print();
}
