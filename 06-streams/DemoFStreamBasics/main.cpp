#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <windows.h>
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
//
//  // ПЕРВЫЙ способ чтения файла
//  string file_path;
//  cout << "6) Input the name of the file: (remember - the file must be at the same folder as *.exe "
//       << "or write the full file path)\n";
//  cin >> file_path;
//  ifstream fin{file_path}; // fin - входной поток для файла file_name
//  string line;
//  if (fin.is_open()) {
//    cout << "The content of the file \"" << file_path << "\":\n";
//    while (getline(fin, line)) {
//      cout << line << '\n';
//    }
//    cout << "File \"" << file_path << "\" has read!\n";
//  } else {
//    cout << "error!" << endl;
//    cerr << "It is not possible to open input file \"" << file_path << "\"\n";
//    //exit(EXIT_FAILURE);
//  }
//
//  // ВТОРОЙ способ чтения файла
//  ifstream fin1{file_path}; // fin - входной поток для файла file_path
//  string line1;
//  if (fin1.is_open()) {
//    cout << "The content of the file \"" << file_path << "\":\n";
//    while (fin1) {
//      fin1 >> line1;
//      cout << line1 << '\n';
//    }
//    cout << "File \"" << file_path << "\" has read!\n" ;
//  } else {
//    cout << "error!" << endl;
//    cerr << "It is not possible to open input file \"" << file_path << "\"\n";
//    //exit(EXIT_FAILURE);
//  }

  // ТРЕТИЙ способ чтения файла (до разделителя)
  string file_date_path = "data/dates.txt";
  ifstream fin_date{file_date_path};
  if (fin_date.is_open()) {
    cout << "The content of the file \"" << file_date_path << "\":\n";

    string str_day;
    string str_month;
    string str_year;
    string str_hour;
    string str_minute;

    // while (fin_date) {
    while (getline(fin_date, str_day, '.')) {
      getline(fin_date, str_month, '.');
      getline(fin_date, str_year, ' ');
      getline(fin_date, str_hour, ':');
      getline(fin_date, str_minute);

      cout << str_day << '/' << str_month << '/' << str_year
           << ' ' << str_hour << ':' << str_minute << endl;
    }
    cout << "File \"" << file_date_path << "\" has read!\n";
  } else {
    cout << "error!" << endl;
    cerr << "It is not possible to open input file \"" << file_date_path << "\"\n";
    //exit(EXIT_FAILURE);
  }


  // ВТОРОЙ способ чтения файла (int)
  ifstream fin_date1{file_date_path};
  if (fin_date1.is_open()) {
    cout << "The content of the file \"" << file_date_path << "\":\n";

    int day = 0;
    int month = 0;
    int year = 0;
    int hour = 0;
    int minute = 0;

    //  while (fin_date1) {
//    while (fin_date1 >> day){
//      fin_date1.ignore(1) ; // игнорируем точку
//      fin_date1 >> month;
//      fin_date1.ignore(1) ; // игнорируем точку
//      fin_date1 >> year;
//      fin_date1.ignore(1) ; // игнорируем пробел
//      fin_date1 >> hour;
//      fin_date1.ignore(1) ; // игнорируем двоеточее
//      fin_date1 >> minute;
//
//      cout << day << '/' << month << '/' << year
//           << ' ' << hour << ':' << minute << endl;
//    }
//    char tmp;
//
//    /* tmp для игнорирования пробела не используем */
//    while (fin_date1 >> day >> tmp >> month  >> tmp >> year >> hour >> tmp >> minute){
//
//     cout <<  setfill('0') << setw(2) << day << '/'
//      << setfill('0') << setw(2) << month << '/'
//      << year << ' '
//      << setfill('0') << setw(2) << hour << ':'
//      << setfill('0') << setw(2) << minute << endl;
//    }
//
//    cout << "File \"" << file_date_path << "\" has read!\n";
//  } else {
//    cout << "error!" << endl;
//    cerr << "It is not possible to open input file \"" << file_date_path << "\"\n";
//    //exit(EXIT_FAILURE);
//  }

    char tmp;
    string full_date;
    /* tmp для игнорирования пробела не используем */
    while (getline(fin_date1, full_date)) {

      stringstream str_stream{full_date};
      str_stream >> day >> tmp >> month >> tmp >> year >> hour >> tmp >> minute;

      cout << setfill('0') << setw(2) << day << '/'
           << setfill('0') << setw(2) << month << '/'
           << year << ' '
           << setfill('0') << setw(2) << hour << ':'
           << setfill('0') << setw(2) << minute << endl;
    }

    cout << "File \"" << file_date_path << "\" has read!\n";
  } else {
    cout << "error!" << endl;
    cerr << "It is not possible to open input file \"" << file_date_path << "\"\n";
    //exit(EXIT_FAILURE);
  }

  return 0;
}