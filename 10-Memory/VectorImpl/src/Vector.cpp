#include "Vector.h"
#include <algorithm>

Vector::Vector(int s) // Конструктор
    : size_{s}, elem_{new double[s]} { // Выделение памяти
    for (int i = 0; i < s; ++i) { // Инициализация
        elem_[i] = 0; // элементов
    }
}

// 18.З.1. Копирующие конструкторы, Страуструп стр.693
Vector::Vector(const Vector& arg) // Размещает элементы, инициализирует их копированием
    : size_{arg.size_}, elem_{new double[arg.size_]} {
    std::copy(arg.elem_, arg.elem_ + arg.size_, elem_); // см . раздел §Б.5.2
}

// Копирующее присваивание
Vector& Vector::operator=(const Vector& v) { // Делаем данный вектор копией v
    double* ptr = new double[v.size_]; // Вьделение памяти
    std::copy(v.elem_, v.elem_ + v.size_, ptr); // Копирование элементов
    delete[] elem_; // Освобождение памяти
    elem_ = ptr; // Переназначение указателя
    size_ = v.size_;

    return *this; // Возвра т ссылки на себя (см. раздел 17.10)
}

Vector::Vector(Vector&& v) // Перемещающий конструктор. Запись && означает ссылка на rvalue.
    : size_{v.size_}, elem_{v.elem_} { // Копируем elem_ и size_ из v
    v.size_ = 0; // Делаем вектор а пустым
    v.elem_ = nullptr;
}

Vector& Vector::operator=(Vector&& v) { // Перемещающее присваивание
    delete[] elem_; // Освобождение старой памяти
    elem_ = v.elem_; // // Копирование elem_ и size_ из v
    size_ = v.size_;
    v.elem_ = nullptr; // Делаем вектор v пустым
    v.size_ = 0;
    return *this; // Возврат ссылки на себя (см. раздел 17.10)
}