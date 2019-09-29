#include <iostream>
#include <set>
using namespace std;
int main() {

  set<int> s1;
  multiset<int> ms1;

  ms1.insert(1);
  ms1.insert(2);
  ms1.insert(2);

  s1.insert(3);
  s1.insert(1);
  s1.insert(2);
  s1.insert(2);

  s1.insert(1);
  s1.insert(2);

  cout << "Set:\n";
  for (auto &tmp:s1) {
    cout << tmp;
  }
  cout << "\nThe size of the set is initially " << s1.size()
       << "." << endl;

  s1.clear();
  cout << "The size of the set after clearing is "
       << s1.size() << "." << endl;

  ms1.insert(1);
  ms1.insert(2);
  ms1.insert(3);

  cout << "Multiset:\n";
  for (auto &tmp:ms1) {
    cout << tmp;
  }

  set<string> month;

  month.insert("January");
  month.insert("February");
  month.insert("March");
  month.insert("April");
  cout << month.size() << '\n'; // будет выведено 4
  cout << month.max_size() << '\n';
  cout << *(month.begin()) << '\n'; // April
  cout << *(month.end()) << '\n'; // NULL
  cout << *(month.rbegin()) << '\n'; // March
  cout << *(month.rend()) << '\n'; // January
  cout << month.count("January") << '\n'; // 1

  cout << *month.lower_bound("January") << '\n'; // January
  cout << *month.upper_bound("January") << '\n'; // March

  cout << *(month.equal_range("January")).first << '\n'; // January
  cout << *(month.equal_range("January")).second << '\n'; // March

  cout << *month.find("January") << '\n'; // January

  month.erase("January");
  cout << month.count("January") << '\n'; // 0

  month.clear();
  cout << month.size() << '\n'; // 0

  return 0;
}