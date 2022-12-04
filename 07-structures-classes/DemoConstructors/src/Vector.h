//
// Created by volha on 11/30/2021.
//

#ifndef PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOCONSTRUCTORS_SRC_VECTOR_H_
#define PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOCONSTRUCTORS_SRC_VECTOR_H_

class Vector {
    class Vector { // Вектор чисел типа douЫe
        puЬlic : 11 Конструктор : explicit Vector(int s) : sz { s ) , p { new douЬle [ s ] ) { )
􀔉vector ( ) {
                        delete[] р; ) / / Деструктор
Vector ( const Vector& ) ; // Копирующий конструктор
                        Vector& operator=(const Vector&); 11 Копирующее присваивание
11 . . .
private :
) ;
                        int sz;
                        douЫe* р;
                    };

#endif // PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOCONSTRUCTORS_SRC_VECTOR_H_
