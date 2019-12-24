// https://en.cppreference.com/w/cpp/string/char_traits
// Определенные пользователем черты символьного типа могут использоваться для сравнения без учета регистра
#include<regex>
#include <iostream>
#include <fstream>

#include <cctype>

struct ci_char_traits : public std::char_traits<char> {
  static char to_upper(char ch) {
    return std::toupper((unsigned char) ch);
  }
  static bool eq(char c1, char c2) {
    return to_upper(c1) == to_upper(c2);
  }
  static bool lt(char c1, char c2) {
    return to_upper(c1) < to_upper(c2);
  }
  static int compare(const char *s1, const char *s2, size_t n) {
    while (n-- != 0) {
      if (to_upper(*s1) < to_upper(*s2)) return -1;
      if (to_upper(*s1) > to_upper(*s2)) return 1;
      ++s1;
      ++s2;
    }
    return 0;
  }
  static const char *find(const char *s, int n, char a) {
    auto const ua(to_upper(a));
    while (n-- != 0) {
      if (to_upper(*s) == ua)
        return s;
      s++;
    }
    return nullptr;
  }
};

using ci_string = std::basic_string<char, ci_char_traits>;

std::ostream &operator<<(std::ostream &os, const ci_string &str) {
  return os.write(str.data(), str.size());
}

int main() {
  char ch_0 = 48;
  char ch_1 = 'F';
  char ch_2 = '\n';

  ci_string s1 = "Hello";
  ci_string s2 = "heLLo";
  if (s1 == s2)
    std::cout << s1 << " and " << s2 << " are equal\n";

//  // ПРИМЕР ЗАМЕНЫ ТОЧЕК НА !
//  std::string text
//      ("Lorem ipsum dolor sit amet. Unde omnis dolor repellendus architecto. Facilis est laborum et iusto odio dignissimos ducimus. Sequi nesciunt, neque porro quisquam est, omnis iste natus error. Sit voluptatem sequi nesciunt, neque porro quisquam est. Saepe eveniet, ut aut perferendis doloribus asperiores. Aspernatur aut odit aut odit aut odit aut officiis. Sunt, explicabo eligendi optio, cumque nihil impedit, quo minus. Voluptatem, quia dolor repellendus ratione voluptatem accusantium doloremque laudantium, totam rem aperiam.");
//  int size = text.size();
//  for (int ix = 0; ix < size; ++ix) {
//    if (text[ix] == '.') {
//      text[ix] = '!';
//    }
//  }
//
//  std::cout << text;
//
//  using namespace std;
//  std::string filename = "input.txt";
//  std::fstream s(filename, s.in);
//
//  regex pat{R"(\w { 2 }\s*\d{ 5 } ( -\d {
//    4 )) ? ) " } ; // Шаблон индекса
//    for (string line; getline(file, line);) {
//      smatch matches;
//      if (reqex_search(line, matches, pat))
//        //Полное соответствие
//        cout << lineno << " : 11 << matches [ O ] << ' \n ' ;
//      if (l < matches.size() && matches[l].matched)
//        11
//      Подша блон
//      cout << " \ t : " << matches[l] << 1 \n
//      ' ;
//    }
//  }

}