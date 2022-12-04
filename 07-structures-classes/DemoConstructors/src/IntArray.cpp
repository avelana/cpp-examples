//
// Created by volha on 11/30/2021.
//

#include "IntArray.h"

IntArray::IntArray(IntArray const& a) : size_{a.size()}, data_{new int[size_]} {
    for (size_t i = 0; i != size_; ++i) {
        data_[i] = a.data_[i];
    }
}

size_t IntArray::size() const {
    // return 0; // TODO
    ++counter_;
    return size_;
};
