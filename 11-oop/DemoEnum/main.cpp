#include <iostream>
enum class MonthNumber { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

// инициализация по умолчанию
enum Digits {
    ZERO, // ZERO=0 - ПО УМОЛЧАНИЮ
    ONE, // ONE=1
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX, // SIX = 6
    SEVEN,
    EIGHT,
    NINE // NINE = 9
};

// явная инициализация
enum class DaysInMonth {
    JANUARY = 31,
    FEBRUARY = 28,
    MARCH = 31,
    APRIL = 30,
    MAY1 = 31,
    JUNE = 30,
    JULY = 31,
    AUGUST = 31,
    SEPTEMBER = 30,
    OCTOBER = 31,
    NOVEMBER = 30,
    DECEMBER = 31
};

enum DBL {
    x = 2 //.65 - error
};

int main() {
    std::cout << "Months:\n";
    std::cout << int(MonthNumber::JAN);
    std::cout << (int)MonthNumber::JAN;
    //  std::cout << MonthNumber::JAN; - error
    //  std::cout << JAN; - error

    MonthNumber f, j;
    f = MonthNumber ::FEB;
    j = MonthNumber(7);
    //  std::cout << f;
    //  std::cout << j;
    //  std::cout << FEB;

    // MonthNumber first_month = 1; // ошибка компиляции
    MonthNumber first_month = static_cast<MonthNumber>(1); // но так делать не рекомендуется

    // std::cin >> first_month; // ошибка компиляции

    using namespace std;

    switch (f) {
        case MonthNumber::JAN:
            cout << "January" << endl;
            break;
        case MonthNumber::FEB:
            cout << "February" << endl;
            break;
        case MonthNumber::MAR:
            cout << "March" << endl;
            break;
        case MonthNumber::APR:
            cout << "April" << endl;
            break;
        case MonthNumber::MAY:
            cout << "May" << endl;
            break;
        case MonthNumber::JUN:
            cout << "June" << endl;
            break;
        case MonthNumber::JUL:
            cout << "July" << endl;
            break;
        case MonthNumber::AUG:
            cout << "August" << endl;
            break;
        case MonthNumber::SEP:
            cout << "September" << endl;
            break;
        case MonthNumber::NOV:
            cout << "November" << endl;
            break;
        case MonthNumber::DEC:
            cout << "December" << endl;
            break;
    }
    //  if (readFileContents() == SUCCESS)  {
    //    // Делаем что-нибудь
    //  }
    //  else  {
    //    // Выводим сообщение об ошибке
    //  }
    return 0;
}

//#include <iostream>
//
//int main() {
// // enum Fruits {
//  enum class Fruits {
//    LEMON, // LEMON находится внутри той же области видимости, что и Fruits
//    KIWI
//  };
//
//  //enum Colors {
//  enum class Colors {
//    PINK, // PINK находится внутри той же области видимости, что и Colors
//    GRAY
//  };
//
// // Fruits fruit = LEMON; // Fruits и LEMON доступны в одной области видимости (добавлять префикс не нужно)
// // Colors color = PINK; // Colors и PINK доступны в одной области видимости (добавлять префикс не нужно)
//  Fruits fruit = Fruits::LEMON; // Fruits и LEMON доступны в одной области видимости (добавлять префикс не нужно)
//  Colors color = Colors::PINK; // Colors и PINK доступны в одной области видимости (добавлять префикс не нужно)
//
//  if (fruit == color) // компилятор будет сравнивать эти переменные как целые числа
//    std::cout << "fruit and color are equal\n"; // и обнаружит, что они равны!
//  else
//    std::cout << "fruit and color are not equal\n";
//
//  return 0;
//}