//
// Created by volha on 11/30/2021.
//

#ifndef PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOCONSTRUCTORS_SRC_INTARRAY_H_
#define PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOCONSTRUCTORS_SRC_INTARRAY_H_
#include <stddef.h>
#include <vector>

struct IntArray {
public:
    size_t size() const;
    void resize();

    explicit IntArray(size_t s);

    ~IntArray() { delete[] data_; }; // Деструктор

    IntArray(const IntArray&); // Копирующий конструктор
    IntArray& operator=(const IntArray&); // Копирующее присваивание

private:
    int* data_;
    size_t size_;

    mutable size_t counter_;
};

#endif // PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOCONSTRUCTORS_SRC_INTARRAY_H_
