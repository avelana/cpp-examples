#include <iostream>
#include <map>
#include <string>

int main() {
  bool is_palindrome = true;
  std::map<bool, std::string> result = {{true, "Yes"}, {false, "No"}};
  // Тестовые случаи:
  std::string str = "abcdefafedcba";
  //std::string str = "abcdeffedcba";
  //std::string str = "abc";
  //std::string str = "a";
  //std::string str = "";

  int n = str.size();
  int middle_index = n / 2;

  for (int i = 0; is_palindrome && i < middle_index; ++i) {
    if (str[i] != str[n - 1 - i]) {
      is_palindrome = false;
    }
  }
  std::cout << result[is_palindrome];
  return 0;
}