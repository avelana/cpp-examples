#include <iostream>
//#include <io.h>
#include <fcntl.h>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
  char ch0 = 48;
  char ch1 = 'F';
  //char ch2 = 'W';
  char ch2 = 'Ю';
  std::cout << ch0 << " "
            << ch1 << " "
            << ch2 << "\n";


//
//  cout << ch1 << " => " << sizeof(ch1) << " "
//       << ch2 << " => " << sizeof(ch2)
//       << endl;
//
  for (int i = -128; i < 127; i++)
    cout << i << " => " << char(i) << endl;

  _setmode(_fileno(stdout), _O_U16TEXT);
  _setmode(_fileno(stdin), _O_U16TEXT);
  _setmode(_fileno(stderr), _O_U16TEXT);

  std::wcout << L"Unicode -- English -- Русский -- Ελληνικά -- Español." << std::endl;
  // или
  //wprintf(L"%s", L"Unicode -- English -- Русский -- Ελληνικά -- Español.\n");

  wchar_t ch;
  std::wcin >> ch;

  std::wcout << L"символ = " << ch << ".\n";
  std::wstring str{ch};
  std::wcout << L"символ в строку = " << str << '\n';

  // С-строка
  const char *ptr_str = "Hello";
  //Инициализация во время объявления
  string myStr("Это первая строка.");

//Объявление с присваиванием
  string myStr1 = "Это вторая строка.";

//Копирование другой строки (копирующий конструктор)
  string myStr3(myStr1);

//Создает строку из содержимого строки с завершающим нулем
  string myStr4(ptr_str);

//Тоже, но определнный длины count
  int count = 4;
  string myStr5(myStr4, count);

//Заполнить count символами ch
  char ch10 = 'u';
  string myStr6(count, ch10);

//Копировать из диапазона [pos, pos+count)
  int pos = 3;

  string myStr7(myStr6, pos, count);

//Создание строки с содержимым диапазона [first, last),
//где first и last - InputIterator
  auto first = myStr7.begin();
  auto last = myStr7.end();

  string myStr8(first, last);
  std::string str1 = "A String";

  std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
  cout << str1;
  return 0;
}