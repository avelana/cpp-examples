#include <iostream>
#include <vector>
using namespace std;

void PrintClass(const string &title, const string &date, const string &time, unsigned short &room) {
  cout << "Title: " << title
       << ", date: " << date
       << ", time: " << time
       << ", room: " << room << '\n';
}
void PrintTimeTable(const vector<string> &titles, const vector<string> &dates, const vector<string> &times,
                    vector<unsigned short> &rooms) {
  int i = 0;
  while (i < titles.size()) {
    PrintClass(titles[i],
               dates[i],
               times[i],
               rooms[i]); // НО м.б. проблемы, если данные не согласованы - размер векторв разный
    ++i;
  }
}

int main() {
  vector<string> titles = {"Programming", "Math Analysis", "Geometry"};
  vector<string> dates = {"07.10.2019", "07.10.2019", "07.10.2019"};
  vector<string> times = {"08:15", "09:45", "11:15"};
  vector<unsigned short> rooms = {521, 513, 250};
  PrintTimeTable(titles, dates, times, rooms);

  return 0;
}