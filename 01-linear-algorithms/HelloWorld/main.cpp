////#include <iostream>
// #include <cmath>
//
///*
// * App writes the phrase Hello World!
// * @author KOG
// * @date 2019-09-04
// */
////using namespace std;
////int main() {
////  std::string text;
////  std::cout << "Computer: \"Hello world!\"\n";//  << std::endl; // '\n'
////  std::cout << "User, please, tell me something.\n";
////  std::cin >> text;
////
////  std::cout << "You told \"" << text << "\"\n";
////  int k ;
////  std::cin >> k ;
////  const int i = k;
//// const double PI = 3.14;
////  std::cout << i ;
////char c = 'a';
////c++;
////std::cout << c;
//
// #include <iostream>
//
// double result; // объявление глобальной перем.
//
// int main()
//{
//    // ввод данны
//    double width; // объявление локальной переменной ширина прям-ка
//    std::cout << "Input width";
//    std::cin >> width;
//
//    double length;// объявление локальной переменной длина прям-ка
//    std::cout << /* hygkh */ "Input length";
//    std::cin >> length;
//
//    // выч площади
//    //result = width * length;
//    double square;
//    square = width * length;
//
//    if (width > 1) {
//        square = width * length;
//    }
//
////    int n = 1;                        // declaration statement
////    n = n + 1;;;;;;;
////
////    if (i < n) {
////        ;
////    }
////        std::cout<<...
////
////    for(int i = 0; i<n; ++i){
////        s+=5;
////    };
//
//
//    // вывод результата
//    std::cout << "Square of the rectangle ("
//              << width
//              << ", "
//              << length
//              << ") equals "
//              << square
//              << std::endl;
//    return 0;
//}
//
//
//
//


#include <iostream>

int main(int argc, char* argv[]) {
    // Если бы передан дополнительный аргумент,
    if (argc > 1) {
        // то попытаемся вывести полученный аргумент
        // std::cout << argv[1]<< std:: endl;
        for (int count{0}; count < argc; ++count) {
            std::cout << count << ' ' << argv[count] << '\n';
        }

    } else {
        // В противном случае сообщаем, что аргументы не передавались
        std::cout << "Without arguments" << std::endl;
    }
    return 0;
}
