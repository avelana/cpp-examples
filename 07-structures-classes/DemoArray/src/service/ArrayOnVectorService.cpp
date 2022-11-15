#include "ArrayOnVectorService.h"

ArrayOnVector
ArrayOnVectorService::arraySum(const ArrayOnVector& first, const ArrayOnVector& second) {
    ArrayOnVector res;
    size_t n = first.valueList.size();
    if (n != second.valueList.size()) {
        throw "size are not equal";
    }
    try {
        for (int i = 0; i < n; ++i) {
            res.valueList.push_back(first.getItem(i) + second.getItem(i));
        }
        return res;
    } catch (const char* ex) {
        throw ex;
    }
}

double ArrayOnVectorService::itemSum(const ArrayOnVector& arr) {
    double sum = 0;
    for (const auto& tmp : arr.valueList) {
        sum += tmp;
    }
    return sum;
}

// TODO
double ArrayOnVectorService::findMinItem() {
    return 0;
}

// TODO
double ArrayOnVectorService::findMaxItem() {
    return 0;
}

// TODO
size_t ArrayOnVectorService::findIndexMinItem() {
    return 0;
}

// TODO
size_t ArrayOnVectorService::findIndexMaxItem() {
    return 0;
}