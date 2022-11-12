//
// Created by volha on 11/12/2022.
//

#include <stdlib.h>
#include <time.h>
#include <utility>

#include "../dataaccesslayer/FileReader.h"
#include "ArrayCreator.h"

/// see KEYS
Array ArrayCreator::createArray(ArrayMode mode, const std::map<KEYS, void*>& params) {
    Array res;
    switch (mode) {
        case ARRAY_EMPTY: {
            return Array();
        }
        case ARRAY_DEFAULT: {
            try {
                size_t n = findArraySizeParam(params);
                res = Array(n); // Ctor move and move assingnment
                return res;
                //  return Array(n);
            } catch (const char* ex) {
                throw ex;
            }
        }
        case ARRAY_VALUE:
            try {
                size_t n = findArraySizeParam(params);
                double value = findFillValueParam(params);
                return Array(n, value);
            } catch (const char* ex) {
                throw ex;
            }
        case ARRAY_RANDOM: {
            try {
                size_t n = findArraySizeParam(params);

                std::pair<double, double> range = findRandomRangeParam(params);
                double start = range.first;
                double end = range.second;

                if (end < start) {
                    std::swap(start, end);
                }

                Array arr(n);
                double delta = end - start;
                if (delta > 0) {
                    srand(time(NULL));
                    double tmp;
                    for (size_t i = 0; i < n; ++i) {
                        tmp = start + ((double)rand() / RAND_MAX) * delta;
                        arr.setItem(i, tmp);
                    }

                } else {
                    for (size_t i = 0; i < n; ++i) {
                        arr.setItem(i, start);
                    }
                }
                return arr;
            } catch (const char* ex) {
                throw ex;
            }
        }
        case ARRAY_FROM_LIST: {
            try {
                std::initializer_list<double> list = findListParam(params);
                return Array(list);
            } catch (const char* ex) {
                throw ex;
            }
        }
        case ARRAY_FROM_FILE: {
            try {
                std::string path = findFilePathParam(params);
                FileReader reader;
                std::vector<double> data;
                reader.read(path, data);
                return Array(data);

            } catch (const char* ex) {
                throw ex;
            }
        }
        default:
            throw "unknown mode of array filling";
            break;
    }
}

//---- private methods-----
/// key = SIZE
size_t ArrayCreator::findArraySizeParam(const std::map<KEYS, void*>& params) {
    if (params.count(SIZE)) {
        void* ptr = params.at(SIZE);
        __int64 tmp = *static_cast<__int64*>(ptr);
        if (tmp >= 0) {
            return static_cast<size_t>(tmp);
        } else
            throw "array size can't be negative";
    } else
        throw "array size doesn't exist";
}

/// key = VALUE
double ArrayCreator::findFillValueParam(const std::map<KEYS, void*>& params) {
    if (params.count(VALUE)) {
        void* ptr = params.at(VALUE);
        double value = *static_cast<double*>(ptr);
        return value;
    } else
        throw "value to fill array doesn't exist";
}

/// key = VALUE_BEGIN  and key = VALUE_END
std::pair<double, double> ArrayCreator::findRandomRangeParam(const std::map<KEYS, void*>& params) {
    if (params.count(VALUE_BEGIN) && params.count(VALUE_END)) {
        void* ptr = params.at(VALUE_BEGIN);
        double valueBegin = *static_cast<double*>(ptr);
        ptr = params.at(VALUE_END);
        double valueEnd = *static_cast<double*>(ptr);

        return std::make_pair(valueBegin, valueEnd);
    } else
        throw "value to fill array doesn't exist";
}

std::initializer_list<double> ArrayCreator::findListParam(const std::map<KEYS, void*>& params) {
    if (params.count(INITIALIZER_LIST)) {
        void* ptr = params.at(INITIALIZER_LIST);
        return *static_cast<std::initializer_list<double>*>(ptr);
    } else
        throw "initializer list parameter doesn't exist";
}

std::string ArrayCreator::findFilePathParam(const std::map<KEYS, void*>& params) {
    if (params.count(FILE_PATH)) {
        void* ptr = params.at(FILE_PATH);
        return *static_cast<std::string*>(ptr);
    } else
        throw "file name parameter doesn't exist";
}