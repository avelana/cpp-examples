#include <iostream>
#include <vector>

#include <ctime>   // localtime
#include <iomanip> // put_time
#include <chrono>

using namespace std;
using namespace chrono;

struct Lesson {
  string title = "Meeting";
  string date;
  string time;
  unsigned short room = 505;
  string to_string() const {
    return "Lesson[Title: " + title + ", date: " + date + ", time: " + time
        + ", room: " + std::to_string(room) + "]\n";
  }
} global_lesson_variable;

//void PrintLesson(const string &title, const string &date, const string &time, unsigned short &room) {
//  cout << "Title: " << title
//       << ", date: " << date
//       << ", time: " << time
//       << ", room: " << room << '\n';
//}
//void PrintTimeTable(const vector<string> &titles, const vector<string> &dates, const vector<string> &times,
//                    vector<unsigned short> &rooms) {
//  int i = 0;
//  while (i < titles.size()) {
//    // НО м.б. проблемы, если данные не согласованы, например - размер векторов разный
//    PrintLesson(titles[i], dates[i], times[i], rooms[i]);
//    ++i;
//  }
//}
void PrintLesson(const Lesson &lesson) {
//  cout << "Title: " << lesson.title
//       << ", date: " << lesson.date
//       << ", time: " << lesson.time
//       << ", room: " << lesson.room << '\n';
  cout << lesson.to_string();
}
void PrintTimeTable(const vector<Lesson> &lessons) {
  for (auto &x: lessons) {
    PrintLesson(x);
  }
}

struct NaturalNumber {
  unsigned int value = 1;
  string to_string() {
    return std::to_string(value);
  };
};
NaturalNumber TheNextNumber(NaturalNumber n) {
  NaturalNumber tmp{++n.value};
  return tmp;
};

int main() {
  // БЕЗ СТРУКТУР
//  vector<string> titles = {"Programming", "Math Analysis", "Geometry"};
//  vector<string> dates = {"07.10.2019", "07.10.2019", "07.10.2019"};
//  vector<string> times = {"08:15", "09:45", "11:15"};
//  vector<unsigned short> rooms = {521, 513, 250};
//  PrintTimeTable(titles, dates, times, rooms);

  // С ИСПОЛЬЗОВАНИЕМ СТРУКТУР
  vector<Lesson> lessons = {{"Programming", "07.10.2019", "08:15", 521},
                            {"Math Analysis", "07.10.2019", "09:45", 513},
                            {"Geometry", "07.10.2019", "11:15", 250}};
  PrintTimeTable(lessons);

  global_lesson_variable = {"Programming", "07.10.2019", "08:15", 521};
  cout << global_lesson_variable.to_string();

  // 1. Инициализация полей
  Lesson lesson1, lesson1_1;
  lesson1.title = "History";
  lesson1.date = "10.10.2019";
  lesson1.time = "13:00";
  lesson1.room = 607;

  lesson1_1.title = "History";
  lesson1_1.date = "10.10.2019";
  lesson1_1.room = 123;

  // ТЕКУЩЕЕ ВРЕМЯ
  auto now = system_clock::now();
  auto my_time = system_clock::to_time_t(now);
  stringstream ss;
  ss << put_time(localtime(&my_time), "%H:%M");
  ss >> lesson1_1.time;


  // 2. Спискок инициализаторов:
  Lesson lesson2 = {"Math Analysis", "08.10.2019", "09:45", 513};
  Lesson lesson2_1 = {"Math Analysis", "08.10.2019", "11:15"};

  // 3. Uniform инициализация
  Lesson lesson3{"English", "09.10.2019", "13:00", 522};
  Lesson lesson3_1{"English", "09.10.2019", "14:20"};

  // Если при инициализации не будет присвоено значение члену, то ему присвоится значение по умолчанию (напр. 0, "")

  // Default value (если задано в объявлении структуры)
  Lesson lesson4{};

  lessons.push_back(lesson1);
  lessons.push_back(lesson1_1);
  lessons.push_back(lesson2);
  lessons.push_back(lesson2_1);
  lessons.push_back(lesson3);
  lessons.push_back(lesson3_1);
  lessons.push_back(lesson4);

  PrintTimeTable(lessons);

  NaturalNumber a{100};
  NaturalNumber b{};
  b = TheNextNumber(a);

  cout << a.to_string() << ' ' << b.to_string() << '\n';
  NaturalNumber num{};
  for (int i = 1; i <= 10; ++i) {
    cout << num.to_string() << ' ';
    num = TheNextNumber(num);
  }
  cout << '\n';


  // Внутреннее объявление
  struct Employee {
    short id;
    int age;
    float salary;
    string to_string() {
      return "Employee[id: " + std::to_string(id)
          + ", age: " + std::to_string(age)
          + ", salary: " + std::to_string(salary) + "]";
    }
  };

  struct Company {
    Employee CEO; // Employee является структурой внутри структуры Company
    int numberOfEmployees;
    string to_string() {
      return "Company[\nCEO: " + CEO.to_string()
          + ",\n numberOfEmployees: " + std::to_string(numberOfEmployees) + "]\n";
    }
  };

  Company myCompany{{3, 35, 55000.0f}, 7};
  cout << myCompany.to_string();

  cout << "myCompany.CEO.id = " << myCompany.CEO.id << '\n';

  return 0;
}
