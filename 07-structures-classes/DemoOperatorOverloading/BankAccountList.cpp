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

