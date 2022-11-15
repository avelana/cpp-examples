#pragma once

#ifndef ARRAY_H
    #define ARRAY_H
    #include <initializer_list>
    #include <vector>

/*RVO, "оптимизация возвращаемого значения - return value "
 * "optimization".(до C++17)
 * Оптимизация возвращаемого значения является обязательной и больше
 * не рассматривается как пропуск копирования (с C++17);
 */

class Array {
public:
    Array();
    Array(size_t n);
    Array(size_t n, double value);
    Array(const std::initializer_list<double>&);
    Array(const std::vector<double>&);

    Array(const Array&);
    Array& operator=(const Array&);

    Array(Array&&);
    Array& operator=(Array&&);

    ~Array();
    double getItem(size_t index) const;
    void setItem(size_t, double);

    // fields
    double* valueList;
    size_t size;
};
#endif // ARRAY_H
