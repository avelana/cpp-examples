#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> a = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int tmp;

  int left = 0, right = a.size() - 1;
  int k = right;
  do {
    for (int j = right; j > left; --j) {//j ← R downto L do
      if (a[j - 1] > a[j]) {
        swap(a[j - 1], a[j]);
        k = j;
      }
    }
    left = k;
    for (int j = left + 1; j <= right; ++j) {
        if (a[j - 1] > a[j]) {
            swap(a[j - 1], a[j]);
            k = j;
        }
    }
    right = k - 1;
  } while (left < right);


  //  for (int i = 0; i < a.Size(); ++i) {
  //    for (int j = a.Size()-1; j > i; --j) {
  //      if (a[j - 1] > a[j]) {
  //        swap(a[j - 1], a[j]);
  //      }
  //    }
  //  }

  for (auto& element : a) {
      cout << element << '\n';
  }
  return 0;
}