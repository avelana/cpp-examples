//
// Created by volha on 11/30/2021.
//

#ifndef PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOCONSTRUCTORS_SRC_VECTOR_H_
#define PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOCONSTRUCTORS_SRC_VECTOR_H_

#include <cstddef>

class Vector { // Вектор чисел типа douЫe
public:
    explicit Vector(size_t s);
    ~Vector();
    Vector(const Vector&); // Копирующий конструктор
    Vector& operator=(const Vector&); // Копирующее присваивание
private:
    size_t size;
    double* ptr;
};

#endif // PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOCONSTRUCTORS_SRC_VECTOR_H_
