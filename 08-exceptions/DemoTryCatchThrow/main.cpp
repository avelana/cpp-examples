#include <fcntl.h>
#include <io.h>
#include <iostream>

// Пример 1
int main() {
    throw 1; // прекращение вызова после создания экземпляра int
    return 0;
}

// Пример 2
// #include <cstdlib>
// #include <exception>
// void AbortFunction(){
//  std::cerr << "***Program is terminate***\n";
//  std::exit(1);
//}
// int main() {
//  std::set_terminate(AbortFunction);
//  throw 1;
//  return 0;
//}

// Пример 3
// #include <iostream>
// #include <cstdlib>
// #include <exception>
//
// int main()
//{
//  std::set_terminate([](){ std::cout << "Необработанное исключение\n"; std::abort();});
//  throw 1;
//}

// Пример https://en.cppreference.com/w/cpp/language/try_catch
// #include <iostream>
// #include <vector>
//
// int main() {
//  _setmode(_fileno(stdout), _O_U16TEXT);
//  _setmode(_fileno(stdin), _O_U16TEXT);
//  _setmode(_fileno(stderr), _O_U16TEXT);
//  try {
//    std::wcout << L"Создание целочисленного исключения ...\n";
//    throw 42;
//  } catch (int i) {
//    std::wcout << L" было получено целочисленное исключение со значением: " << i << '\n';
//  }
//
//  try {
//    std::wcout << L"Создание вектора размером 5... \n";
//    std::vector<int> v(5);
//    std::wcout << L"Доступ к 11-му элементу вектора...\n";
//    std::wcout << v.at(10); // vector::at() throws std::out_of_range
//  } catch (const std::exception& e) { // caught by reference to base
//    std::wcout << L" стандартное исключение перехвачено с сообщением  '" << e.what() << "'\n";
//  }
//
//}
