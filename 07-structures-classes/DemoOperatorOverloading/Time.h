//
// Created by volha on 13.10.2019.
//

#ifndef DEMO_OPERATOR_OVERLOADING_TIME_H_
#define DEMO_OPERATOR_OVERLOADING_TIME_H_

class Time {
private:
    int hour;
    int minute;
    int second;
    void Normalize();

public:
    Time();
    // h не м.б. default т.к. будет error: call of overloaded 'Time()' is ambiguous
    // т.к. вызов перегруженного конструктора неоднозначен

    Time(int h, int m = 0, int sec = 0);

    void AddMin(int m);
    void AddHr(int h);
    void AddSec(int sec);
    void Reset(int h = 0, int m = 0, int sec = 0);
    std::string ToString() const;

    // Time Sum(const Time &t) const;
    Time operator+(const Time& t) const;

    Time operator*(double n) const;
    friend Time operator*(double m, const Time& t);

    // friend void operator<<(std::ostream &os, const Time &t);
    friend std::ostream& operator<<(std::ostream& os, const Time& t);
    // Упр. реализовать перегрузку операторов:
    //  Time operator-(const Time & t) const;

    //  Time &operator-=(const Time&);
    //  Time &operator+=(const Time&);

    //  bool operator<(const Time &);
    //  bool operator>(const Time &);
    //  bool operator==(const Time &);
    //  bool operator!=(const Time &);
};


//Time operator* (double n, const Time & t) ;

#endif // DEMO_OPERATOR_OVERLOADING_TIME_H_
