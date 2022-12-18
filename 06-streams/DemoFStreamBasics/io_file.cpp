//
// Created by volha on 30.09.2019.
//
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

/*
 * чтения файла getline()
 */
bool ReadFileByLine(const std::string &file_path) {
  ifstream fin{file_path}; // fin - входной поток для файла file_path
  string line;
  if (fin.is_open()) {
    cout << "The content of the file \"" << file_path << "\":\n";
    while (getline(fin, line)) {
      cout << line << '\n';
    }
    cout << "File \"" << file_path << "\" has read!\n";
  } else {
    cout << "error!" << endl;
    return false;
  }
  return true;
}

/*
 * чтения файла >>
 */
bool ReadFileByString(const std::string &file_path) {
  ifstream fin{file_path};
  string line;
  if (fin.is_open()) {
    cout << "The content of the file \"" << file_path << "\":\n";
    while (fin) {
      fin >> line;
      cout << line << '\n';
    }
    cout << "File \"" << file_path << "\" has read!\n";
  } else {
    cout << "error!" << endl;
    return false;
  }
  return true;
}

/*
 * The date format:29.09.2019 03:00
 */
// чтение файла (до разделителя)
bool ReadFileByLineTillDelimiter(const std::string &file_path) {
  ifstream fin{file_path};
  if (fin.is_open()) {
    cout << "The content of the file \"" << file_path << "\":\n";

    string str_day;
    string str_month;
    string str_year;
    string str_hour;
    string str_minute;

    // while (fin_date) {
    while (getline(fin, str_day, '.')) {
      getline(fin, str_month, '.');
      getline(fin, str_year, ' ');
      getline(fin, str_hour, ':');
      getline(fin, str_minute);

      cout << str_day << '/' << str_month << '/' << str_year
           << ' ' << str_hour << ':' << str_minute << endl;
    }
    cout << "File \"" << file_path << "\" has read!\n";
    return true;
  } else {
    cout << "error!" << endl;
    cerr << "It is not possible to open input file \"" << file_path << "\"\n";
    //exit(EXIT_FAILURE);
    return false;
  }

}

bool ReadDateFileByInt(const std::string &file_path) {

  ifstream fin{file_path};
  if (fin.is_open()) {
    cout << "The content of the file \"" << file_path << "\":\n";

    int day = 0;
    int month = 0;
    int year = 0;
    int hour = 0;
    int minute = 0;

    //while (fin) {
    while (fin >> day) {
      fin.ignore(1); // игнорируем точку
      fin >> month;
      fin.ignore(1); // игнорируем точку
      fin >> year;
      fin >> hour;
      fin.ignore(1); // игнорируем двоеточее
      fin >> minute;

      cout << day << '/' << month << '/' << year
           << ' ' << hour << ':' << minute << endl;
    }

    char tmp;

    // АНАЛОГИЧНЫЙ ЦИКЛ + форматирование
    /* tmp для игнорирования пробела не используем */
//        while (fin >> day >> tmp >> month >> tmp >> year >> hour >> tmp >> minute) {
//
//          cout << setfill('0') << setw(2) << day << '/'
//               << setfill('0') << setw(2) << month << '/'
//               << year << ' '
//               << setfill('0') << setw(2) << hour << ':'
//               << setfill('0') << setw(2) << minute << endl;
//        }

    cout << "File \"" << file_path << "\" has read!\n";
  } else {
    cout << "error!" <<
         endl;
    return false;
  }
  return true;
}

bool ReadDateFileToStringStream(const std::string &file_path) {

  ifstream fin{file_path};

  string full_date;
  int day = 0;
  int month = 0;
  int year = 0;
  int hour = 0;
  int minute = 0;
  char tmp;

  if (fin.is_open()) {
    cout << "The content of the file \"" << file_path << "\":\n";

    while (getline(fin, full_date)) {

      stringstream str_stream{full_date};
      str_stream >> day >> tmp >> month >> tmp >> year >> hour >> tmp >> minute;

      cout << setfill('0') << setw(2) << day << '/'
           << setfill('0') << setw(2) << month << '/'
           << year << ' '
           << setfill('0') << setw(2) << hour << ':'
           << setfill('0') << setw(2) << minute << endl;
    }

    cout << "File \"" << file_path << "\" has read!\n";
  } else {
    cout << "error!" << endl;
    return false;
  }
  return true;
}


bool WriteToFile(const string &file_path, const string &str){
 // ofstream output(file_path);
  ofstream output(file_path, ios::app);
  output << str << endl;
  return true;
}

