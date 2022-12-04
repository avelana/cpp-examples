#include "src/A.h"
#include "src/Copier.h"
#include "src/Teacher.h"
#include "src/X.h"
#include <iostream>
#include <vector>

int main() {

    C obj;

    // std::cout << obj.a; // Ошибка компиляции. Член класса найден в нескольких базовых классах
    std::cout << obj.B::a; // так можно

    Teacher teacher("Ivanov", 35, "сш", 800, 1);
    // std::cout << teacher.toString() << std::endl;
    std::cout << '\n' << teacher.toString() << std::endl;


    // Copier copier;

    // Решение 1
    // вызов метода определенного суперкласса
    //  copier.Printer::turn_on();
    //  copier.Scanner::turn_on();
    // copier.turn_on();

    // Решение 2
    // обработка экземпляра copier как экземпляра Printer с помощью статического преобразования
    // static_cast<Printer&>( copier ).turn_on();

    //  // Решение 3
    // // copier.turn_on(); // ошибка компиляции, если Compiler.turn_on ф-ция закоментирована
    //
    // // Решение 4
    // copier.turn_on();
    //  std::cout << "id = " << copier.getId() <<"\n";
    //
    //  int kN = 10;
    ////
    //  std::vector<Copier> v ;
    //  std::vector<Printer> vP ;
    //  std::vector<Scanner> vS ;
    //
    //  for (int i = 1; i<= kN; ++i){
    //    Copier tmp;
    //    Copier tmpP;
    //    Copier tmpS;
    //    v.push_back(tmp);
    //    vP.push_back(tmpP);
    //    vS.push_back(tmpS);
    //
    //  }
    //  std::cout << "Copiers:\n";
    //  for (auto &tmp:v){
    //    std::cout << tmp.getId() << "\n";
    //
    //  }
    //  std::cout << "Printers:\n";
    //  for (auto &tmpP:vP){
    //    std::cout << tmpP.getId() << "\n";
    //
    //  }
    // Q(char c,float d,int val)
    //  Q objQ('a', 5.6,10); // !!! НО В ВЫВОДЕ a 5.600000 0
    //  std::cout << objQ.toString() << std::endl;

    return 0;
}
