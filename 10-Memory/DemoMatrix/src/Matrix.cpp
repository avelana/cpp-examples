//
// Created by volha on 31.10.2019.
//
#include <cmath>
#include <cstdlib>
#include <iostream>

#include "Matrix.h"

// Генерируем рандомное число между значениями min и max
// Предполагается, что функцию srand() уже вызывали
int RandomNumber(int min, int max) {
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    // Равномерно распределяем рандомное число в нашем диапазоне
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

Matrix::Matrix() {
    n_ = 0;
    m_ = 0;
    a_ = nullptr;
}

Matrix::~Matrix() {
    // создание и заполнение случайными значениями

    for (int i = 0; i < n_; i++) {
        delete[] a_[i];
    }
    delete[] a_;
}

Matrix::Matrix(const int n, const int m) {
    n_ = n;
    m_ = m;

    // создание и заполнение случайными значениями
    a_ = new int*[n_];
    for (int i = 0; i < n_; i++) {
        a_[i] = new int[m_];
    }

    std::srand(100); // start value_ for generator 100
    for (int i = 0; i < n_; i++) {
        for (int j = 0; j < m_; j++) {
            a_[i][j] = (int)(RandomNumber(0, 100));
        }
    }
    show();
}

Matrix::Matrix(const int n, const int m, const int k) {
    n_ = n;
    m_ = m;

    // создание и заполнение случайными значениями
    a_ = new int*[n_];
    for (int i = 0; i < n_; i++) {
        a_[i] = new int[m_];
    }

    for (int i = 0; i < n_; i++) {
        for (int j = 0; j < m_; j++) {
            a_[i][j] = k;
        }
    }
    if (k != 0) {
        show();
    }
}

int Matrix::GetN() {
    return n_;
}

int Matrix::GetM() {
    return m_;
}

int** Matrix::GetA() {
    return a_;
}

struct Student {
    std::string name_;
    int age_;
} stud;

void Matrix::show() {
    std::cout << "Matrix (" << n_ << " x " << m_ << "):\n";
    for (int i = 0; i < n_; i++) {
        for (int j = 0; j < m_; j++) {
            std::cout << a_[i][j] << " ";
        }
        std::cout << '\n';
        // Доступ к члену осуществляется через использование фактической переменной структуры Man
        stud.name_ = "Ivan Ivanov";
        // Доступ к члену осуществляется через ссылку на переменную структуры Student
        Student& ref = stud;
        ref.age_ = 18;

        // Доступ к члену осуществляется через указатель на переменную структуры Man
        Student* ptr = &stud;
        (*ptr).age_ = 18;
        ptr->age_ = 18;
    }
};
