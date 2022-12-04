//
// Created by volha on 10/30/2020.
//

#ifndef PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOOPERATOROVERLOADING_DOLLARACCOUT_H_
#define PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOOPERATOROVERLOADING_DOLLARACCOUT_H_
#include "BankAccount.h"

class DollarAccout {
private:
    static int rate;
    int value_;

public:
    DollarAccout(int value = 0) { value_ = value; }

    // Выполняем конвертацию DollarAccout в BankAccount (rub)
    operator BankAccount() { return BankAccount(value_ * DollarAccout::rate); }
};

int DollarAccout::rate = 2;
#endif // PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOOPERATOROVERLOADING_DOLLARACCOUT_H_
