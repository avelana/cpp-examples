#pragma once

#ifndef ARRAYONVECTOR_H
    #define ARRAYONVECTOR_H
    #include <initializer_list>
    #include <vector>

class ArrayOnVector {
public:
    ArrayOnVector();
    ArrayOnVector(size_t n);
    ArrayOnVector(size_t n, double value);
    ArrayOnVector(const std::initializer_list<double>&);
    ArrayOnVector(const ArrayOnVector&);
    double getItem(size_t index) const;
    void setItem(size_t index, double value);
    void pushBackItem(double);

    // fields
    std::vector<double> valueList;
};
#endif // ARRAYONVECTOR_H
