#include "ArrayOnVector.h"
#include "../Logger.h"

ArrayOnVector::ArrayOnVector() {
    Logger::out("Constructor default", this);
    valueList = {};
}

ArrayOnVector::ArrayOnVector(const ArrayOnVector& other) {
    valueList = other.valueList;
}

ArrayOnVector::ArrayOnVector(size_t n) {
    Logger::out("Constructor parametric with n", this);
    std::vector<double> tmp(n);
    valueList = tmp;
}

ArrayOnVector::ArrayOnVector(size_t n, double value) {
    Logger::out("Constructor parametric with n and value", this);
    std::vector<double> tmp(n, value);
    valueList = tmp;
}

ArrayOnVector::ArrayOnVector(const std::initializer_list<double>& list) {
    Logger::out("Constructor parametric with initializer list", this);
    valueList = list;
}

double ArrayOnVector::getItem(size_t index) const {
    if (index >= valueList.size()) {
        throw "index is out of range";
    }
    return valueList[index];
}

void ArrayOnVector::setItem(size_t index, double value) {
    if (index >= valueList.size()) {
        throw "index is out of range";
    }
    valueList[index] = value;
}

void ArrayOnVector::pushBackItem(double value) {
    valueList.push_back(value);
}