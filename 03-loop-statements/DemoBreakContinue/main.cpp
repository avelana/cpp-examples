#include <iostream>
#include <vector>
using namespace std;

int main() {

  // BREAK

  int sum = 0;
  int i = 1;
  for (;;) {
    if (i <= 100) {
      sum += i;
    } else {
      break;
    }
    ++i;
  }
  std::cout << "sum = " << sum << '\n';

  const int kK = 3;

  vector<vector<int>>
      matrix = {{0, 1, 2, 3, 4, 5, 6}, {0, 1, 3, 4}, {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, {0, 1, 2, 3, 4, 5}};
  const int kN = matrix.size();

  std::cout << "Full matrix:\n";
  for (int i = 0; i < kN; i++) {
    for (int j = 0; j < matrix[i].size(); j++) {
      std::cout << "matrix[" << i << ", " << j << "] = " << matrix[i][j] << ' ';
    }
    std::cout << '\n';
  }

  std::cout << "\nThe first " << kK << "columns of the matrix:\n";

  for (int i = 0; i < kN; i++) {
    for (int j = 0; j < matrix[i].size(); j++) {  //только этот цикл будет  прерван
      if (j == kK) break;
      std::cout << "matrix[" << i << ", " << j << "] = " << matrix[i][j] << ' ';
    }
    std::cout << '\n';
  }



  // CONTINUE
  std::cout << "\nThe column " << kK << "of the matrix is missed:\n";

  for (int i = 0; i < kN; i++) {
    for (int j = 0; j < matrix[i].size(); j++) {  // на этот цикл перейдет управление после continue
      if (j == kK) continue;  // пропускаем столбец с индексом kK
      std::cout << "matrix[" << i << ", " << j << "] = " << matrix[i][j] << ' ';
    }
    std::cout << '\n';
  }

  return 0;
}
