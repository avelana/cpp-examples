#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> a = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int tmp;

  for (int i = 2; i < a.size(); ++i) {
    tmp = a[i];
    a[0] = tmp;
    int j = i;
    while (tmp < a[j - 1]) {  //j > 0 &&
      a[j] = a[j - 1];
      j--;
    }
    a[j] = tmp;
  }
  int k = a.size();
  for (int i = 1; i < k; ++i) {
    cout << a[i] << '\n';
  }
//  for (auto &element: a) {
//    cout << element << '\n';
//  }
  return 0;
}