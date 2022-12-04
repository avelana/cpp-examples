//
// Created by volha on 16.10.2020.
//

#ifndef DEMOOPERATOROVERLOADING_BANKACCOUNT_H_
#define DEMOOPERATOROVERLOADING_BANKACCOUNT_H_
#include <iostream>

class BankAccount {
private:
    int value_;

public:
    BankAccount(int value = 0) { value_ = value; }

    int getValue() const { return value_; }

    BankAccount operator+(const BankAccount&) const;
    BankAccount operator+(int value) const;
    friend BankAccount operator+(int value, const BankAccount& num);

    // Унарный минус
    BankAccount operator-() const;
    bool operator!() const;

    friend std::ostream& operator<<(std::ostream& out, const BankAccount&);
    friend std::istream& operator>>(std::istream& in, BankAccount&);

    // friend bool operator== (const BankAccount &, const BankAccount &);
    bool operator==(const BankAccount&) const;
    friend bool operator!=(const BankAccount&, const BankAccount&);

    BankAccount& operator++(); // версия префикс
    BankAccount& operator--(); // версия префикс

    BankAccount operator++(int); // версия постфикс
    BankAccount operator--(int); // версия постфикс

    // Перегрузка операции преобразования значений типа BankAccount в значения типа int
    operator int() { return value_; }
};


#endif // DEMOOPERATOROVERLOADING_BANKACCOUNT_H_
