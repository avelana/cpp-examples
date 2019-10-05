#include <iostream>
#include <map>

int main() {

  using namespace std;
  // ---- MAP - ключи уникальные
  map<string, int> seq1 = {{"ab", 1}, {"cde", 2}, {"fghik", 3}};
  int sum = 0;
  string concat;
  for (auto &x : seq1) {
    concat += x.first;
    sum += x.second;
  }
  cout << concat << endl;
  cout << sum << endl;

  // ---- MULTIMAP - ключи могут повторяться
  multimap<int, int> seq2;
  size_t i;

  seq2.insert(make_pair(1, 1));
  seq2.insert(make_pair(2, 1));
  seq2.insert(make_pair(1, 4));
  seq2.insert(make_pair(2, 1));

  for (auto &x : seq2) {

  }
  // Элементы не должны иметь уникальные ключи в мультикарте,
  // поэтому дубликаты разрешены тоже считаются
  i = seq2.count(1);
  cout << "The number of elements in m1 with a sort key of 1 is: " << i << ".\n";

  i = seq2.count(2);
  cout << "The number of elements in m1 with a sort key of 2 is: " << i << ".\n";

  i = seq2.count(3);
  cout << "The number of elements in m1 with a sort key of 3 is: " << i << ".\n";

  auto seq2_crIter = seq2.crend(); // итератор за последним элементом
  seq2_crIter--;
  cout << "The last element of the reversed multimap m1 is " << (*seq2_crIter).first << ".\n";

  return 0;
}