#pragma once

#ifndef SORTING_H
    #define SORTING_H

    #include "../controller/inputOutputFunctions.h"
    #include <functional>
    #include <vector>

// When sorting, it will be necessary
// to swap the elements if the first element
// is larger than the second
bool ascending(int x, int y) {
    return x > y;
}

// When sorting, it will be necessary
// to swap the elements if the first element
// is less than the second
bool descending(int x, int y) {
    return x < y;
}

void quickSort(
    std::vector<int>& arr, int left, int right, std::function<bool(int, int)> comparator = ascending
) {
    int i = left;
    int j = right;

    int middle = (left + right) / 2;
    int x = arr[middle];

    int tmp;
    outputToConsole(arr, ' ');
    do {
        std::cout << "left = " << left << "right = " << right << " \n";
        // while (arr[i] < x) { i++; }
        // while (arr[j] > x) { j--; }
        while (comparator(x, arr[i])) {
            i++;
        }
        while (comparator(arr[j], x)) {
            j--;
        }
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }

        outputToConsole(arr, ' ');
    } while (i <= j);
    if (j > 0) {
        if (left < j) {
            quickSort(arr, left, j, comparator);
        }
    }
    if (i < arr.size()) {
        if (i < right) {
            quickSort(arr, i, right, comparator);
        }
    }
}


#endif