#pragma once

#ifndef ARRAYONVECTORSERVICE_H
    #define ARRAYONVECTORSERVICE_H

    #include "../entity/ArrayOnVector.h"
    #include <string>

class ArrayOnVectorService {
public:
    double itemSum(const ArrayOnVector&);
    double findMinItem();
    double findMaxItem();
    size_t findIndexMinItem();
    size_t findIndexMaxItem();

    ArrayOnVector arraySum(const ArrayOnVector&, const ArrayOnVector&);
};

#endif // ARRAYONVECTORSERVICE_H
