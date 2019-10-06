#include <iostream>
#include <vector>

using namespace std;

struct Lesson {
  string title;
  string date;
  string time;
  unsigned short room;
  string to_string() const {
    return "Lesson[Title: " + title + ", date: " + date + ", time: " + time
        + ", room: " + std::to_string(room) + "]\n";
  }
}
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

  return 0;
}
