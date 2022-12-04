// https://ru.stackoverflow.com/questions/449291/Отображение-кириллицы-в-clion
//#include <iostream>
//#include <locale>
//#include <codecvt>
//
///*
// * Source https://en.cppreference.com/w/cpp/locale/locale/locale
// * ERROR!!!
// */
//int main()
//{
//  std::locale l1;  // l1 is a copy of the classic "C" locale
//  std::locale l2("en_US.UTF-8"); // l2 is a unicode locale
//  std::locale l3(l1, l2, std::locale::ctype); // l3 is "C" except for ctype, which is unicode
//  std::locale l4(l1, new std::codecvt_utf8<wchar_t>); // l4 is "C" except for codecvt
//  std::cout << "Locale names:\nl1: " << l1.name() << "\nl2: " << l2.name()
//            << "\nl3: " << l3.name() << "\nl4: " << l4.name() << '\n';
//}


//#include <iostream>
//#include <clocale>
//using namespace std;
//int main ()
//{
//  setlocale(LC_CTYPE, "Russian"); //Поддержка русских символов в с++
//  cout << "Выводим русские слова на экран";
//  return 0;
//}
//
//#include<iostream>
// #include<clocale>
// #include <windows.h>
// using namespace std;
//
// int main()
//{
//   //setlocale(LC_CTYPE, "");
//
//   SetConsoleCP (CP_UTF8);
//   SetConsoleOutputCP (CP_UTF8);

//  auto  tmp = GetConsoleOutputCP();
//  string test = u8"Russian:вапршывгарп Greek: αβγδ; German: Übergrößenträger";
//  SetConsoleOutputCP(CP_UTF8);
//  cout << test;

//  SetConsoleOutputCP(tmp);
//
//  cout << "Русский текст?! Да ладно!" << endl;
//  char ch ;
//  cin >> ch;
//  cout << "ch = " << (int)ch << "-'это буква";
//  cin.get();
//  return 0;
//}

#include <cctype>
#include <iostream>
#include <windows.h>
using namespace std;

int main() {

  setlocale(LC_ALL, "Rus");
  //SetConsoleCP(866); //CP_UTF8   // 1251
  //SetConsoleOutputCP(CP_UTF8); // 1251 - в VS

  //SetConsoleCP(866); //CP_UTF8   // 1251
  //SetConsoleOutputCP(866); // 1251 - в VS
  //SetConsoleOutputCP(CP_UTF8);

  SetConsoleCP(1251); //CP_UTF8   // 1251 // 866
  string ch;
  cin >> ch;

  SetConsoleOutputCP(CP_UTF8); // 1251 - в VS

  cout << "ch = " << (short) ch[0] << "-это буква, строка = ";
  SetConsoleOutputCP(1251);
  cout << ch << '\n';
  if (isalpha((unsigned char) ch[0])) cout << "is alpha" << endl;
  else cout << "no alpha\n" << endl;

  system("pause");
  return 0;
}

