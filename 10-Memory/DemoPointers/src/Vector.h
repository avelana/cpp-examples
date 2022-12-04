//
// Created by volha on 28.10.2019.
//

#ifndef DEMOPOINTERS_SRC_VECTOR_H_
#define DEMOPOINTERS_SRC_VECTOR_H_

class Vector {
    int size; // Размер
    double* elem; // Указатель на первый элемент (типа douЬl e)
public:
    Vector(int n); // Конструктор: размещает в памяти n чисел типа douЬle , направляет на них
                   // указатель elem и сохраняет n в члене sz

    int GetSize() const { return size; } // Текущий размер
};

#endif // DEMOPOINTERS_SRC_VECTOR_H_
