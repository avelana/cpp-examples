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

    string ToString() const {
        return "Lesson[Title: " + title + ", date: " + date + ", time: " + time
            + ", room: " + std::to_string(room) + "]\n";
    }

    //} global_lesson_variable;
} global_lesson_variable{
    "global-Programming", "07.10.2019", "08:15", 521}; // Корректно, но не удобно

void PrintLesson(const Lesson& lesson) {
    cout << lesson.ToString();
}

void PrintTimeTable(const vector<Lesson>& lessons) {
    for (auto& x : lessons) {
        PrintLesson(x);
    }
}

int main() {
  vector<Lesson> lessons = {{"Programming", "07.10.2019", "08:15", 521},
                            {"Math Analysis", "07.10.2019", "09:45", 513},
                            {"Geometry", "07.10.2019", "11:15", 250}};
  // PrintTimeTable(lessons);

  // global_lesson_variable = {"Programming", "07.10.2019", "08:15", 521};
  // cout << global_lesson_variable.to_string();

  // 1. Инициализация полей
  Lesson lesson1, lesson1_1;
  lesson1.title = "les1-History";
  lesson1.date = "10.10.2019";
  lesson1.time = "13:00";
  lesson1.room = 607;

  lesson1_1.title = "les1_1-History";
  //  lesson1_1.date = "10.10.2019";
  //  lesson1_1.room = 123;
  //
  //  // ТЕКУЩЕЕ ВРЕМЯ
  //  auto now = system_clock::now();
  //  auto my_time = system_clock::to_time_t(now);
  //  stringstream ss;
  //  ss << put_time(localtime(&my_time), "%H:%M");
  //  ss >> lesson1_1.time;


  // 2. Спискок инициализаторов:
  Lesson lesson2 = {"les2-Math Analysis", "08.10.2019", "09:45", 513};
  Lesson lesson2_1 = {"les2_1-Math Analysis", "08.10.2019", "11:15"};

  // 3. Uniform инициализация
  Lesson lesson3{"English", "09.10.2019", "13:00", 522};
  Lesson lesson3_1{"English", "09.10.2019", "14:20"};

  // Если при инициализации не будет присвоено значение члену, то ему присвоится значение по
  // умолчанию, если определено default value_ или 0, для чисел и "" для string, например

  // Default value_ (если задано в объявлении структуры)
  Lesson lesson4{};

  lessons.push_back(lesson1);
  lessons.push_back(lesson1_1);
  lessons.push_back(lesson2);
  lessons.push_back(lesson2_1);
  lessons.push_back(lesson3);
  lessons.push_back(lesson3_1);
  lessons.push_back(lesson4);

  PrintTimeTable(lessons);

  return 0;
}
