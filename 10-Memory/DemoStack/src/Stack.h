//
// Created by volha on 31.10.2019.
//

#ifndef DEMOSTACK_SRC_STACK_H_
#define DEMOSTACK_SRC_STACK_H_

#include <exception>
#include <iostream>
using namespace std;

// класс, реализующий стек в виде динамического массива
template<typename T>
class Stack {
private:
    T* stack; // Динамический масив-указатель на стек
    int top; // Вершина стека - количество элементов типа T в стеке

public:
    // конструктор по умолчанию
    Stack() {
        stack = nullptr; // необязательно
        top = 0; // количество элементов в стеке определяется по значению count
    }

    // поместить элемент в стек
    void push(T item) {
        T* tmp; // временный указатель

        // блок try необходим для перехвата исключения, если память не выделится
        try {
            // указатель указывает на stack
            tmp = stack;

            // выделить память на 1 элемент больше, чем было выделено до этого
            stack = new T[top + 1];

            // увеличить количество элементов в стеке на 1
            top++;

            // скопировать данные из памяти, на которую указывает tmp в память,
            // на которую указывает stack
            for (int i = 0; i < top - 1; i++)
                stack[i] = tmp[i];

            // добавить последний элемент
            stack[top - 1] = item;

            // освободить память, выделенную перед этим для stack,
            // на эту память указывает tmp
            if (top > 1)
                delete[] tmp;
        } catch (bad_alloc e) {
            // если память не выделилась
            cout << e.what() << endl;
        }
    }

    // Вытягнуть элемент из стека
    // При вытягивании элемента из стека память не переопределяется
    T pop() {
        if (top == 0)
            throw std::exception(); // стек пуст
        top--;
        return stack[top];
    }

    // Просмотр элемента в вершине стека
    T Head() {
        if (top == 0)
            return 0;
        return stack[top - 1];
    }

    // конструктор копирования STACK(const STACK&) - необходим для избежания
    // недостатков побитового копирования
    Stack(const Stack& st) {
        try {
            // 1. Выделить новый участок памяти для массива stack
            stack = new T[st.top];

            // 2. Скопировать данные из st в текущий объект
            top = st.top;
            for (int i = 0; i < top; i++)
                stack[i] = st.stack[i];
        } catch (bad_alloc e) {
            // если память не выделилась, то вывести соответствующее сообщение
            std::cout << e.what() << std::endl;
        }
    }

    // операторная функция operator=(const STACK&) - необходима для избежания
    // недостатков побитового копирования
    Stack operator=(const Stack& st) {
        // Нужно скопировать из st в текущий объект
        // 1. Освободить предварительно выделенную память для текущего объекта
        if (top > 0) {
            top = 0;
            delete[] stack; // освободить память под предыдущий массив
        }

        // 2. Выделить новый участок памяти для массива stack
        try {
            // попытка выделить память
            stack = new T[st.top];

            // 3. Скопировать данные из st в текущий объект
            top = st.top;
            for (int i = 0; i < top; i++)
                stack[i] = st.stack[i];
        } catch (bad_alloc e) {
            // если не удалось виделить память, то вывести соответствующее сообщение
            cout << e.what() << endl;
        }

        // 4. Вернуть текущий объект
        return *this;
    }

    // Деструктор - освобождает память
    ~Stack() {
        if (top > 0)
            delete[] stack;
    }

    // Количество элементов в стеке
    int Count() { return top; }

    // Функция, которая определяет пуст ли стек
    bool IsEmpty() { return top == 0; }

    // Функция, выводящая стек
    void Print() {
        T* p; // временный указатель, двигается по элементах стека

        // 1. Установить указатель p на вершину стека
        p = stack;

        // 2. Вивід
        cout << "Stack: " << endl;
        if (top == 0)
            cout << "is empty." << endl;

        for (int i = 0; i < top; i++) {
            cout << "Item[" << i << "] = " << *p << endl;
            p++; // прокрутить указатель на следующий элемент
        }
        cout << endl;
    }
};

#endif // DEMOSTACK_SRC_STACK_H_
