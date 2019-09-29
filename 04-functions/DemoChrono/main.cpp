/*
 * Example is taken at https://ru.cppreference.com/w/cpp/chrono
 */
#include <iostream>
#include <chrono>
#include <ctime>
//#include <windows.h>
#include <locale>
using namespace std::chrono;

int fibonacci(int n) {
  if (n < 3) return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

void check_locale(const char *locale_name) {
  if (std::setlocale(LC_ALL, locale_name) == NULL)
    printf("setlocale FAILED : %s\n", locale_name);
  else
    printf("setlocale   OK   : %s\n", locale_name);

  try {
    std::locale my_locale(locale_name);
    printf("ctor   OK   : %s\n", locale_name);
  }
  catch (std::exception &e) {
    printf("ctor FAILED : %s : %s\n", locale_name, e.what());
  }
}

int main() {

  //setlocale(LC_ALL, "ru_RU.UTF-8");
  //устанавливаем глобальную локализацию
  //std::locale utf8_locale("ru_RU.utf8");
  //std::locale utf8_locale("ru_RU.CP1251");
  //std::locale::global(utf8_locale);

  //std::locale::global(std::locale("Rus"));

  //std::setlocale(LC_ALL, "ru_RU.utf8");

  // std::setlocale(LC_ALL,"ru_RU.UTF-8");
  // check_locale("en_US.UTF-8");
  //check_locale("fi_FI.UTF-8");
  // check_locale("ru_RU.UTF-8");
//  std::setlocale(LC_ALL,"en_US.UTF-8");
//  auto cur_loc = std::locale().name();
//  std::cout << "--" << cur_loc << "--\n";
  //std::locale::global(std::locale("ru_RU.utf8"));
  //setlocale(LC_ALL, "Russian");
  //setlocale(LC_ALL, "ru_RU.UTF-8");
//
//  SetConsoleCP(CP_UTF8);
//  SetConsoleOutputCP(CP_UTF8);
  //system("chcp 65001");
  //  setlocale(LC_ALL, "");
//
//
//  system("chcp 65001");
//  std::cout << "Введите букву\n";
//  char ch;
//  std::cin >> ch;
//  std::cout << "буква = " << ch << " - это была буква\n";

  // ЗАСЕКАЕМ ВРЕМЯ НАЧАЛА РАБОТЫ АЛГОРИТМА

  // system_clock – представляет время системы.
  // system_clock::now() - возвращает момент времени (time_point), в который этот метод вызван.
  // std::chrono::time_point - это момент времени, который представляет продолжительность времени,
  // которое прошло с начала эпохи конкретных часов.

  //std::chrono::time_point<std::chrono::system_clock> start = std::chrono::system_clock::now();
  // ЭТО ЖЕ, но короче:
  //auto start = std::chrono::system_clock::now();

  // ЕЩЕ короче, за счет использования namespace:
  auto start = system_clock::now();

  // ВЫПОЛНЕНИЕ АЛГОРИТМА
  int result = fibonacci(42);

  // ЗАСЕКАЕМ ВРЕМЯ ОКОНЧАНИЯ РАБОТЫ АЛГОРИТМА
  //std::chrono::time_point<std::chrono::system_clock> end = std::chrono::system_clock::now();
  auto end = system_clock::now();

  // Чтобы получить интервал времени, прошедший с момента начала отсчета, можно вызвать time_since_epoch:
  system_clock::duration tse = start.time_since_epoch();

  // продолжительность в секундахб милисекундах
  auto elapsed_seconds = duration_cast<seconds>(end - start).count();
  auto elapsed_milliseconds = duration_cast<milliseconds>(end - start).count();


  // Преобразование time_point в число, например для сериализации или вывода на экран, можно осуществить через С-тип time_t:
  std::time_t end_time = system_clock::to_time_t(end);

  // Функция std::ctime не поддерживает локализацию.
  std::cout << "Calculations are finished at " << std::ctime(&end_time)
            << "Algorithm execution time: " << elapsed_seconds << "s\n"
            << "Algorithm execution time: " << elapsed_milliseconds << "ms\n";



  // продолжительность в секундахб милисекундах
  auto tse_elapsed_seconds = tse.count();
  auto tse_elapsed_milliseconds = tse.count();
  std::cout << "Время выполнения: (tse) " << tse_elapsed_seconds << "s\n"
            << "Время выполнения: (tse)" << tse_elapsed_milliseconds << "ms\n";

}