//
// Created by volha on 16.10.2020.
//
#include "BankAccount.h"

BankAccount BankAccount::operator+(const BankAccount& num) const {
    // Используем конструктор BankAccount и operator+(int, int).
    // Мы имеем доступ к закрытому члену account_, поскольку эта функция является дружественной
    // классу BankAccount
    return BankAccount{value_ + num.value_};
}

BankAccount BankAccount::operator+(int value) const {
    return *this + value;
}

BankAccount operator+(int value, const BankAccount& num) {
    return num + value;
}

std::ostream& operator<<(std::ostream& out, const BankAccount& account) {
    out << "BankAccount(" << account.value_ << ")";
    return out;
}

std::istream& operator>>(std::istream& in, BankAccount& account) {
    // Поскольку operator>> является другом класса, то мы имеем прямой доступ к членам.
    // Обратите внимание, параметр account (объект класса BankAccount) должен быть неконстантным,
    // чтобы мы имели возможность изменить члены класса
    in >> account.value_;
    return in;
}

BankAccount BankAccount::operator-() const {
    return BankAccount{-value_};
}

// Возвращаем true, если используются значения по умолчанию, в противном случае - false
bool BankAccount::operator!() const {
    return (value_ == 0);
}

// bool operator== (const BankAccount &ac1, const BankAccount &ac2){
//   return (ac1.value_ == ac2.value_);
// }
bool BankAccount::operator==(const BankAccount& ac) const {
    return ((*this).value_ == ac.value_);
}

bool operator!=(const BankAccount& ac1, const BankAccount& ac2) {
    return !(ac1 == ac2);
}

BankAccount& BankAccount::operator++() { // преф.
    ++value_;
    return *this;
}

BankAccount BankAccount::operator++(int) { // постф.
    BankAccount temp(value_);
    ++(*this);
    return temp;
}

BankAccount& BankAccount::operator--() {
    --value_;
    return *this;
}

BankAccount BankAccount::operator--(int) {
    BankAccount temp(value_);
    --(*this); // реализация перегрузки
    return temp;
}
