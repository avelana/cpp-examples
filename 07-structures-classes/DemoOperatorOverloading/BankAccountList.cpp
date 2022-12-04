//
// Created by volha on 10/30/2020.
//

#include <cassert> // для assert()

#include "BankAccountList.h"

BankAccount& BankAccountList::operator[](const int index) {
    assert(index >= 0 && index < list.size() && "is not fit index");

    if (index < 0 || index >= list.size()) {
        throw "is not fit index";
    }

    // assert (index>0);
    return list[index];
}

const BankAccount& BankAccountList::operator[](const int index
) const { // для константных объектов: используется только для просмотра (вывода) элементов массива
    return list[index];
}

void BankAccountList::add(BankAccount b) {
    list.push_back(b);
}

class Simple {
public:
    Simple() { }

    operator bool() const { return true; }
};

class SimpleExplicit {
public:
    explicit SimpleExplicit() { }

    explicit operator bool() const { return true; }
};

int main(int, char**) {
    Simple s7{};
    bool b7 = s7;

    SimpleExplicit se7{};
    // bool be7 = se7; - COMPILE ERROR
    bool be7 = static_cast<bool>(se7);

    return 0;
}