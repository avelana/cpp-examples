#include "sortings.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> a = {9.3, 8, 7.5, 6, 5, 4, 3, 2, 1, 0};
    array<double, 12> arr = {9.3, 8, 7.5, 6, 5, 4, 3, 2, 1, 0};

    const size_t size = 12;

    BubbleSort<double>(a);
    BubbleSortArray<double, size>(arr);


    for (auto& element : a) {
        cout << element << '\n';
    }
    return 0;
}