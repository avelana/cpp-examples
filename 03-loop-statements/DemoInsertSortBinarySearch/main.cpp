#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> a = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int tmp;
  int left, right;

  for (int i = 1; i < a.size(); ++i) {
    tmp = a[i];
    left = 0;
    right = i;
    while (left < right) {
      int m = (left + right) / 2;
      if (a[m] < tmp) {
        left = m + 1;
      } else {
        right = m;
      }
    }
    for (int j = i; j > right; --j) {
      a[j] = a[j - 1];
    }
    a[right] = tmp;

  }
  for (auto &element: a) {
    cout << element << '\n';
  }
  return 0;
}