#include "ArrayService.h"
#include "../controller/IOConsole.h"

Array ArrayService::arraySum(const Array& a, const Array& b) {
    int n = a.size;
    Array res(n);
    if (n != b.size) {
        throw "size are not equal";
    }
    try {
        for (int i = 0; i < n; ++i) {
            res.setItem(i, a.getItem(i) + b.getItem(i));
        }
    } catch (const char* ex) {
        throw ex;
    }
    return res;
}

// double ArrayService::itemSum(const Array& arr) {
//	double sum = 0;
//     for (int i = 0; i < arr.size; ++i) {
//		sum += arr.getItem(i);
//	}
//	return sum;
// }

double ArrayService::itemSum(Array arr) {
    double sum = 0;
    for (int i = 0; i < arr.size; ++i) {
        sum += arr.getItem(i);
    }
    return sum;
}

// TODO
double ArrayService::findMinItem() {
    return 0;
}

// TODO
double ArrayService::findMaxItem() {
    return 0;
}

// TODO
int ArrayService::findIndexMinItem() {
    return 0;
}

// TODO
int ArrayService::findIndexMaxItem() {
    return 0;
}