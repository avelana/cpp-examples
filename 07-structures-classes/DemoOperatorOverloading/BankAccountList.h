//
// Created by volha on 10/30/2020.
//

#ifndef PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOOPERATOROVERLOADING_BANKACCOUNTLIST_H_
#define PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOOPERATOROVERLOADING_BANKACCOUNTLIST_H_
#include "BankAccount.h"
#include "vector"

class BankAccountList {
private:
    std::vector<BankAccount> list{};
    std::string currency;
    std::string country;
    // Person person;
public:
    BankAccountList() { }

    BankAccountList(BankAccount b) { add(b); }

    void add(BankAccount);

    BankAccount& operator[](const int index);
    const BankAccount& operator[](const int index) const;

    // void operator[] (std::string index); // можно перегрузить как угодно, но желательно, чтобы не
    // нарушала смысл этого оператора
};

#endif // PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOOPERATOROVERLOADING_BANKACCOUNTLIST_H_
