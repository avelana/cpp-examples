//
// Created by volha on 30.11.2019.
//

#ifndef PRCPP_1SEM_10_MEMORY_DEMOSTACK_SRC_STACKONLIST_H_
#define PRCPP_1SEM_10_MEMORY_DEMOSTACK_SRC_STACKONLIST_H_

#pragma once
#include "stack.h"
#include <initializer_list>

template<typename T>
class StackOnList : public Stack<T> {
private:
    template<typename S>
    struct NodeStack {
        NodeStack() : next_(nullptr) { }

        NodeStack(S value_new) : value_(value_new), next_(nullptr) { }

        NodeStack(S value_new, NodeStack<S>* next_new) : value_(value_new), next_(next_new) { }

        ~NodeStack() { }

        S GetValue() const { return value_; }

        NodeStack* GetNext() const { return next_; }

        void SetNext(NodeStack<S>* next_new) { next_ = next_new; }

    private:
        S value_;
        NodeStack* next_;
    };

    NodeStack<T>* top_; // ссылка на голову

public:
    StackOnList() : top_{nullptr} { } // nullptr присваивается по умолчанию?

    StackOnList(const std::initializer_list<T> list);
    StackOnList(const StackOnList<T>& stack);

    ~StackOnList() { }

    NodeStack<T>* GetTop() const { return top_; }

    // const NodeStack<T>* GetTop() const { return top_; } ??

    void Push(const T& new_value);
    T Pop();
    size_t Size();
    bool IsEmpty();

    template<typename U>
    friend bool operator==(const StackOnList<U>& x, const StackOnList<U>& y);
};

template<typename T>
StackOnList<T>::StackOnList(const std::initializer_list<T> list) {
    top_ = nullptr;
    for (auto& value : list) {
        Push(value);
    }
}

template<typename T>
StackOnList<T>::StackOnList(const StackOnList<T>& stack) {
    NodeStack<T>* cur = stack.top_;
    top_ = cur;
    while (cur->GetNext() != nullptr) {
        NodeStack<T>* tmp = new StackOnList(cur->GetNext()->GetValue(), cur);
        cur = cur->GetNext();
    }
}

template<typename T>
void StackOnList<T>::Push(const T& new_value) {
    NodeStack<T>* tmp = new NodeStack<T>(new_value, top_);
    top_ = tmp;
}

template<typename T>
T StackOnList<T>::Pop() {
    T res = top_->GetValue();
    NodeStack<T>* tmp = top_;
    top_ = tmp->GetNext();
    delete tmp;
    return res;
}

template<typename T>
size_t StackOnList<T>::Size() {
    NodeStack<T>* tmp = top_;
    size_t size = 0;
    while (tmp != nullptr) {
        ++size;
        tmp = tmp->GetNext();
    }
    return size;
}

template<typename T>
bool StackOnList<T>::IsEmpty() {
    return top_ == nullptr;
}

template<typename T>
bool operator==(const StackOnList<T>& x, const StackOnList<T>& y) {
    bool tmp = false;
    if (x.Size() == y.Size()) {
        // StackOnList<T>::NodeStack<T>* tmp = new StackOnList<T>::NodeStack<T>();
        // while ()
    }
}

#endif // PRCPP_1SEM_10_MEMORY_DEMOSTACK_SRC_STACKONLIST_H_
