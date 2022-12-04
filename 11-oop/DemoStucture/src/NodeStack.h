//
// Created by volha on 14.11.2019.
//

#ifndef PRCPP_1SEM_11_OOP_DEMOSTUCTURE_SRC_NODESTACK_H_
#define PRCPP_1SEM_11_OOP_DEMOSTUCTURE_SRC_NODESTACK_H_

// Структура, описывающая элемент стека
template<typename T>
struct NodeStack {
    T item;
    NodeStack<T>* next;
};

#endif // PRCPP_1SEM_11_OOP_DEMOSTUCTURE_SRC_NODESTACK_H_
