//
// Created by volha on 13.10.2019.
//

#include <iostream>
#include "Time.h"
Time::Time() {
  hour = minute = second = 0;
}
Time::Time(const int h, const int m, const int sec) {
  hour = h;
  minute = m;
  second = sec;
  Normalize();
}
void Time::AddSec(int sec) {
  second += sec;
  minute += second / 60;
  second %= 60;
  hour += minute / 60;
  minute %= 60;
}

void Time::AddMin(int m) {
  minute += m;
  hour += minute / 60;
  minute %= 60;
}
void Time::AddHr(int h) {
  hour += h;
}
void Time::Reset(int h, int m, int sec) {
  hour = h;
  minute = m;
  second = sec;
}
void Time::Normalize() {
  minute += second / 60;
  second %= 60;
  hour += minute / 60;
  minute %= 60;
}
//Time Time::Sum(const Time &t) const {
Time Time::operator+(const Time &t) const {
  Time sum;

  sum.second = second + t.second;
  sum.minute = minute + t.minute + sum.second / 60;
  sum.second %= 60;
  sum.hour = hour + t.hour + sum.minute / 60;
  sum.minute %= 60;
  // std::cout << sum.ToString(); // логирование
  return sum;
}

Time Time::operator*(double n) const {
  Time result;

  long total_seconds = n * (hour * 3600 + minute * 60 + second);
  //std::cout << total_seconds << '\n';
  result.hour = total_seconds / 3600;
  total_seconds = total_seconds % 3600;

  //std::cout << total_seconds << '\n';
  result.minute = total_seconds / 60;
  result.second = total_seconds % 60;

  total_seconds = total_seconds % 60;
  //std::cout << total_seconds << '\n';

  std::cout << "Result from function-member\n" << '\n';

  return result;
}

std::string Time::ToString() const {
  return std::to_string(hour) + " hours, " + std::to_string(minute) + " minutes, "
      + std::to_string(second) + " seconds";
}

//Time operator*(double n, const Time &t) {
//  std::cout << "Result from independent function\n" ;
//  return t * n;
//
//}

Time operator*(double n, const Time &t) {
  Time result;

  long total_seconds = n * (t.hour * 3600 + t.minute * 60 + t.second);

  result.hour = total_seconds / 3600;
  total_seconds = total_seconds % 3600;

  result.minute = total_seconds / 60;
  result.second = total_seconds % 60;

  total_seconds = total_seconds % 60;

  return result;
}

//void operator<<(std::ostream & os, const Time & t) {
//  os << t.hour << " hours, " << t.minute << " minutes, " + t.second << " seconds";
//}
//std::ostream& operator<<(std::ostream & os, const Time & t) {
//  os << t.hour << " hours, "<<  t.minute << " minutes, " << t.second << " seconds";
//}
