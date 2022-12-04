#include <array>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    array<int, 10> a = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    vector<int> b = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int tmp;
    for (int i = 0; i < a.size(); ++i) {
        for (int j = a.size() - 1; j > i; --j) {
            if (a[j - 1] > a[j]) {
                swap(a[j - 1], a[j]);
            }
        }
    }

    for (auto& element : a) {
        cout << element << '\n';
  }
  return 0;
}