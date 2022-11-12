//
// Created by volha on 11/12/2022.
//

#ifndef ARRAYCREATOR_H
    #define ARRAYSTATICCREATOR_H
    #include "../entity/Array.h"
    #include "../entity/ArrayOnVector.h"
    #include <map>

enum ArrayMode {
    ARRAY_EMPTY, // no items
    ARRAY_DEFAULT, // n items but not initialised by values
    ARRAY_VALUE,
    ARRAY_RANDOM,
    ARRAY_FROM_LIST,
    ARRAY_FROM_FILE,
};

enum KEYS {
    SIZE,
    VALUE,
    VALUE_BEGIN,
    VALUE_END,
    INITIALIZER_LIST,
    FILE_PATH,
};

class ArrayCreator {
public:
    /// see KEYS
    Array createArray(ArrayMode, const std::map<KEYS, void*>& params);
    // ArrayOnVector createArrayOnVector(size_t, ArrayMode);
private:
    size_t findArraySizeParam(const std::map<KEYS, void*>& params);
    double findFillValueParam(const std::map<KEYS, void*>& params);
    std::pair<double, double> findRandomRangeParam(const std::map<KEYS, void*>& params);
    std::initializer_list<double> findListParam(const std::map<KEYS, void*>& params);
    std::string findFilePathParam(const std::map<KEYS, void*>& params);
};


#endif // ARRAYSTATICCREATOR_H
