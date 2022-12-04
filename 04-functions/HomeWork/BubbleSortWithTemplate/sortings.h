//
// Created by volha on 22.09.2019.
//
#include <array>
#include <vector>
// using namespace std;

#ifndef sortings_h
    #define sortings_h

template<typename T>
void BubbleSort(std::vector<T>& a) {
    for (int i = 0; i < a.size(); ++i) {
        for (int j = a.size() - 1; j > i; --j) {
            if (a[j - 1] > a[j]) {
                std::swap(a[j - 1], a[j]);
            }
        }
    }
};

template<typename T, size_t SIZE>
void BubbleSortArray(std::array<T, SIZE>& a) {
    for (int i = 0; i < a.size(); ++i) {
        for (int j = a.size() - 1; j > i; --j) {
            if (a[j - 1] > a[j]) {
                std::swap(a[j - 1], a[j]);
            }
        }
    }
};

// #include "sortings.cpp"
#endif // sortings_h
