#include <iostream>
#include <fstream>
#include <vector>
#include "Time.h"

class Program {
 private:
  static std::string FILE_OUT;//("time.txt");
 public:
  static int Main() {
    Time tmp{4, 30, 25};
    std::cout << tmp.ToString() << '\n';

    using std::cout;
    using std::endl;
    using std::vector;

    // Результаты забега: ЭСТАФЕТА
    // Экиден – это эстафета на марафонской дистанции 42км 195м.
    //В команде 6 человек
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


    //cout << "Total time = " << (sportsman1 + sportsman2 + sportsman3 + sportsman4 + sportsman5 + sportsman6).ToString();
    return 0;
  }
};

// инициализация статического озя за пределами объявления класса
std::string Program::FILE_OUT = "time.txt";

int main() {

  return Program::Main();


  //укороченная оценку (булевых выражений) - short-circuit evaluation.
  int i = 1;
  if (false && ++i) {

  }
  std::cout << "i = " << i << '\n';

}