/*
 * initial example is from https://en.cppreference.com/w/cpp/io/basic_ios/eof
 * then i added more code
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {

  cout << "Example 1. File is absent.\n";
  std::string file_path = "data/test.txt";
  std::ifstream absent_file(file_path);
  if (!absent_file)  // operator! is used here
  {
    std::cout << "File opening failed\n";
    //return EXIT_FAILURE;
  }

  cout << "Example 2 (wrong out). File is empty.\n";
  file_path = "data/empty_file.txt";
  std::ifstream empty_fin(file_path); // Открываем пустой файл
  if (!empty_fin.eof()) {     // eof() == false, т.к. мы еще ничего не читали
    int value;
    empty_fin >> value;       // Пытаемся читать число, а его там нет.
    // Здесь eof() == true, но мы это не проверяем.
    std::cout << value; // Выведется 0. ЧТО НЕВЕРНО!
  }
  std::cout << '\n';

  cout << "Example 3 (empty out. It is correct).\n";
  // Объекты std::istream умеют преобразовываться в bool,
  // каждая операция чтения возвращает ссылку на std::istream.
  // Поэтому идиоматичный код выглядит следующим образом:
  std::ifstream input_stream(file_path);
  int value;
  while (input_stream >> value) {
    cout << value; // or do smth with value
  }

  cout << "Example 4. File is not empty.\n";
  file_path = "data/input.txt";
//  std::ifstream input(file_path);
//  // Или для строки:
//  string str;
//  while (getline(input, str)) {
//    cout << str;
//  }
//
//
//  // Или сразу для нескольких значений:
//  string value1, value2;
//  while (input >> value1 >> value2) {
//    cout << value1 << value2;
//  }
//  // Если при чтении value1 произойдет ошибка, то все последующие операции чтения (т.е. value2) будут игнорироваться,
//  // по этому можно читать сразу несколько значений сразу, и уже потом проверять состояние std::istream.


  std::ifstream file(file_path);
  // typical C++ I/O loop uses the return value of the I/O function
  // as the loop controlling condition, operator bool() is used here
  //for (int n; file >> n;) {
  int n;
  while (file >> n) {
    std::cout << n << ' ';
  }
  std::cout << '\n';

  if (file.bad())
    std::cout << "I/O error while reading\n";
  else if (file.eof())
    std::cout << "End of file reached successfully\n";
  else if (file.fail())
    std::cout << "Non-integer data encountered\n";

  return 0;
}
