//
// Created by volha on 11/30/2021.
//

#include "Vector.h"

Vector::Vector(size_t s) : size{s}, ptr{new double[s]} { }

Vector::~Vector() {
    delete[] ptr;
}

Vector::Vector(const Vector&){
    /// TODO
};

Vector& Vector::operator=(const Vector&) {
    // TODO
    return *this;
}