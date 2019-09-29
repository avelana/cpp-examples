#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> a = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

  int idx_min;
  for (int i = 0; i < a.size(); ++i) {
    idx_min = i;
    for (int j = i + 1; j < a.size(); ++j) {
      if (a[j] < a[idx_min]) {
        idx_min = j;
      }
    }
    swap(a[i], a[idx_min]);
  }

  for (auto &element: a) {
    cout << element << '\n';
  }
  return 0;
}