#pragma once

#ifndef ARRAYSERVICE_H
    #define ARRAYSERVICE_H

    #include "../entity/Array.h"
    #include <string>

class ArrayService {
public:
    // double itemSum(const Array&);
    double itemSum(Array);
    double findMinItem();
    double findMaxItem();
    int findIndexMinItem();
    int findIndexMaxItem();

    Array arraySum(const Array&, const Array&);
};

#endif // ARRAYONVECTORSERVICE_H
