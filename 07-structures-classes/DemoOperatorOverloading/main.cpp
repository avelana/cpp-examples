#include "BankAccount.h"
#include "BankAccountList.h"
#include "DollarAccout.h"
#include "Time.h"
#include <fstream>
#include <iostream>
#include <vector>

class A {
public:
    A() { std::cout << "A\n"; }
};

class B {
private:
    A m_a; // B содержит A, как переменную-член

public:
    B() { std::cout << "B\n"; }
};

B b;

class Program {
private:
    static std::string FILE_OUT; //("time.txt");

    static void TimeExample() {
        Time tmp{4, 30, 25};
        std::cout << tmp.ToString() << '\n';

        using std::cout;
        using std::endl;
        using std::vector;

        // Результаты забега: ЭСТАФЕТА
        // Экиден – это эстафета на марафонской дистанции 42км 195м.
        // В команде 6 человек
        // http://atblog.ru/2010/11/26/chiba-ekiden-rezultaty/

    Time start;
    Time result{2, 11, 19}; //2:11:35

    Time sportsman1(0, 16, 0); // 5 км  // 00:14:00
    Time sportsman2(0, 16, 15); // 5 км // 00:30:15
    Time sportsman3(0, 29, 25); // 10 км // 00:59:40
    Time sportsman4(0, 16, 52); // 5 км // 01:16:32
    Time sportsman5(0, 29, 42); // 10 км // 01:46:14
    Time sportsman6(0, 23, 21); // 7 км 195м // 02:09:35

    vector<Time> team;
    team.push_back(sportsman1);
    team.push_back(sportsman2);
    team.push_back(sportsman3);
    team.push_back(sportsman4);
    team.push_back(sportsman5);
    team.push_back(sportsman6);

    Time total;
    int i = 1;
    for (auto &sportsman : team) {
      cout << "Time after " << i++ << " relay = "; // время после первого этапа эстафеты

      // total = total.Sum(sportsman);

      // total = total.operator+(sportsman); // нотация с функцией
      total = total + sportsman; // нотация с операцией

      cout << total.ToString();
      cout << '\n';
    }
//    cout <<(total * 2.0).ToString()<< '\n';
//    cout <<(2.0 * total ).ToString()<<'\n';


    // cout << sportsman1;
    //    cout << sportsman2 << sportsman3;
    //
    //    std::ofstream fout;
    //    fout.open(FILE_OUT);
    //    Time trip(12, 40) ;
    //    fout << trip;


    // cout << "Total time = " << (sportsman1 + sportsman2 + sportsman3 + sportsman4 + sportsman5 +
    // sportsman6).ToString();
    }

    static void BankAccountExample() {
        // BankAccount bank;
        BankAccount bank_account1{200};
        BankAccount bank_account2(250);
        BankAccount totalSum = bank_account1 + bank_account2;

        std::cout << "I have " << totalSum.getValue() << " rub." << std::endl;
        std::cout << "I have " << totalSum << " rub." << std::endl;
        std::cout << "I not have " << !totalSum << " rub." << std::endl;
        std::cout << "Compare " << (bank_account1 == bank_account2) << std::endl;
        std::cout << bank_account1 << '\n';
        std::cout << ++bank_account1 << '\n';
        std::cout << bank_account1++ << '\n';
        std::cout << bank_account1 << '\n';
        std::cout << --bank_account1 << '\n';
        std::cout << bank_account1-- << '\n';
        std::cout << bank_account1 << '\n';
    }

    static void ArrayExample() {
        BankAccount bank_account1{800};
        BankAccount bank_account2(200);

        BankAccountList array;
        array.add(bank_account1);
        array.add(bank_account2);

        std::cout << "\nOperator []\n";
        std::cout << array[0] << '\n';
        std::cout << array[1] << '\n';

        BankAccount bank_account3{500};
        array[1] = bank_account3; // вызывается неконстантная версия operator[]()
        std::cout << array[0] << '\n';
        std::cout << array[1] << '\n';
        // std::cout << array[10] << '\n';

        int k = bank_account2;
        std::cout << "k = " << k;

        const BankAccountList carray{BankAccount{900}};
        BankAccount bank_account4{400};
        // carray[0] = bank_account4; // ошибка компиляции: вызывается константная версия
        // operator[](), которая возвращает константную ссылку. Выполнять операцию присваивания
        // нельзя
        std::cout << carray[0];

        DollarAccout d{100};
        BankAccount ba = d;

        std::cout << ba;

        int a = 7; // копирующая инициализация
        BankAccount vtb = BankAccount(80); // копирующая инициализация, вызывается BankAccount(80)
        BankAccount invest =
            9; // копирующая инициализация. Компилятор будет искать пути конвертации 9 в
               // BankAccount, что приведет к вызову конструктора BankAccount(9)
        std::cout << invest;
    }

public:
    static int Main() {
        // TimeExample();
        // BankAccountExample();
        ArrayExample();
        return 0;
    }
};

// инициализация статического поля за пределами объявления класса
std::string Program::FILE_OUT = "time.txt";

// An object of this type represents a linear function of one variable a*x + b.
struct Linear {
    double a, b;

    double operator()(double x) const { return a * x + b; }
};

int main() {

    // return Program::Main();

    Linear f{2, 1}; // Represents function 2x + 1.
    Linear g{-1, 0}; // Represents function -x.
    // f and g are objects that can be used like a function.

    double f_0 = f(0);
    double f_1 = f(1);

    double g_0 = g(0);

    std::cout << "f_0= " << f_0;
    return 0;
    // укороченная оценку (булевых выражений) - short-circuit evaluation.
    //  int i = 1;
    //  if (false && ++i) {
    //
    //  }
    //  std::cout << "i = " << i << '\n';
}