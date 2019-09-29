#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "io_file.h"

using namespace std;

int main() {
//  char ch;
//  cout << "1) Input a char\n";
//  cin.get(ch); //извлекает символ из потока
//  cin.ignore(32767, '\n'); // удаляем символ новой строки из входного потока данных
//  cout << "ch = " << ch << '\n';
//
//  int n;
//  string str;
//  cout << "2) Input a number and a string\n";
//  cin >> n >> str; // 123a bcdef
//  cin.ignore(32767, '\n'); // удаляем символ новой строки из входного потока данных
//  cout << "n = " << n << ", str = " << str << '\n';
//
//  char ch1;
//  cout << "3) Input a char\n";
//  cin.get(ch1); //извлекает символ из потока
//  //cin.get(ch1);
//  cin.ignore(32767, '\n'); // удаляем символ новой строки из входного потока данных
//  cout << "ch = " << ch1 << '\n';
//
//  string str_line;
//  cout << "4) Input a line, you can use the space\n";
//  getline(cin, str_line);
//  //cin.ignore(32767, '\n'); // удаляем символ новой строки из входного потока данных
//  cout << "str_line = " << str_line << '\n';
//
//  string str_line_without_space;
//  cout << "5) Input a line\n";
//  getline(cin, str_line_without_space, ' '); // разделитель слов в стоке - пробел
//  cin.ignore(32767, '\n'); // удаляем символ новой строки из входного потока данных
//  cout << "str_line = " << str_line_without_space << '\n';

  string file_path;
  cout << "6) Input the name of the file: (remember - the file must be at the same folder as *.exe "
       << "or write the full file path)\n";
  cin >> file_path;

  if (!ReadFileByLine(file_path)) {
    cerr << "It is not possible to open input file \"" << file_path << "\"\n";
  }

  if (!ReadFileByString(file_path)) {
    cerr << "It is not possible to open input file \"" << file_path << "\"\n";
  }

  // Reading formatted file
  string file_date_path = "data/dates.txt";

  if (!ReadFileByLineTillDelimiter(file_date_path)) {
    cerr << "It is not possible to open input file \"" << file_date_path << "\"\n";
  }

  if (!ReadFileByInt(file_date_path)) {
    cerr << "It is not possible to open input file \"" << file_date_path << "\"\n";
  }

  if (!ReadFileToStringStream(file_date_path)) {
    cerr << "It is not possible to open input file \"" << file_date_path << "\"\n";
  }

  return 0;
}