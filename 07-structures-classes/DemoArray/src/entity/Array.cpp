#include "Array.h"
#include "../Logger.h"

Array::Array() {
    Logger::out("Constructor default", this);
    valueList = nullptr;
    size = 0;
}

Array::Array(size_t n) {
    Logger::out("Constructor parametric with n", this);
    size = n;
    valueList = new double[size];
}

Array::Array(size_t n, double value) {
    Logger::out("Constructor parametric with n and value", this);
    size = n;
    valueList = new double[size];
    for (int i = 0; i < size; ++i) {
        valueList[i] = value;
    }
}

Array::Array(const std::initializer_list<double>& list) {
    Logger::out("Constructor parametric with initializer list", this);
    size = list.size();

    valueList = new double[size];
    size_t i = 0;
    for (auto& tmp : list) {
        valueList[i] = tmp;
        ++i;
    }
}

Array::Array(const std::vector<double>& list) {
    Logger::out("Constructor parametric is based on vector values", this);
    size = list.size();

    valueList = new double[size];
    size_t i = 0;
    for (auto& tmp : list) {
        valueList[i] = tmp;
        ++i;
    }
}

Array::Array(const Array& other) {
    Logger::out("Constructor copy", this);

    size = other.size;
    valueList = new double[size];
    for (size_t i = 0; i < size; ++i) {
        valueList[i] = other.getItem(i);
    }
}

Array& Array::operator=(const Array& other) {
    Logger::out("Copy assignment operator", this);
    if (this != &other) {
        delete[] valueList; // Free the existing resource

        size = other.size;
        valueList = new double[size];
        for (size_t i = 0; i < size; ++i) {
            valueList[i] = other.getItem(i);
        }
    }
    return *this;
}

Array::Array(Array&& other) {
    Logger::out("Constructor move", this);
    size = other.size;
    valueList = other.valueList;

    other.size = 0;
    other.valueList = nullptr;
}

Array& Array::operator=(Array&& other) {
    Logger::out("Move assignment operator", this);
    if (this != &other) {
        delete[] valueList; // Free the existing resource

        size = other.size;
        valueList = other.valueList;

        other.size = 0;
        other.valueList = nullptr;
    }
    return *this;
}

Array::~Array() {
    Logger::out("Destructor", this);
    if (valueList != nullptr) {
        delete[] valueList;
    }
}

double Array::getItem(size_t index) const {
    if (index >= size) {
        throw "index is out of range";
    }
    return valueList[index];
}

void Array::setItem(size_t index, double value) {
    if (index >= size) {
        throw "index is out of range";
    }
    valueList[index] = value;
}