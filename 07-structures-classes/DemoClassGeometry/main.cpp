#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

double CalcLength(double x, double y) {
    return hypot(x, y);
}

// struct Point {
//   double x;
//   double y;
//   string toString() const {
//     return "(" + to_string(x) + ", " + to_string(y) + ")";
//   }
// };

// struct Point {
class Point {
public:
    Point(double newX, double newY) : x(newX), y(newY) { }

    double getX() { return x; }

    double getY() { return y; }

    string toString() const { return "(" + to_string(x) + ", " + to_string(y) + ")"; }

private:
    double x;
    double y;
};

//// Отрезок
// struct LineSegment {
//   Point start;
//   Point end;
//   double length; //Каждый раз вычислять длину затратно, поэтому будем ее хранить.
//   string ToString() {
//     return "LineSegment[ start point" + start.ToString()
//         + "end point" + end.ToString()
//         + "length:" + to_string(length);
//   }
// };

// Отрезок
// struct LineSegment {
class LineSegment {
public:
    LineSegment() {
        start = nullptr;
        end = nullptr;
        length = 0;
    } // Раньше компилятор делал это сам

    // ~LineSegment() {}
    //  LineSegment() {
    //    start = {0, 0};
    //    end = {0, 0};
    //    length = 0;
    //  }
    LineSegment(const Point& new_start, const Point& new_end) {
        //    SetStart(new_start); // ПЛОХО
        //    SetEnd(new_end);
        start = start;
        end = new_end;
        updateLength();
    }

    string toString() const {
        return "LineSegment[ start point" + start.toString() + "end point" + end.toString()
            + "length:" + to_string(length);
    }

    Point getStart() const { return start; }

    Point getEnd() const { return end; }

    double getLength() const { return length; }

    void setStart(const Point& new_start) {
        start = new_start;
        updateLength();
    }

    void setEnd(const Point& new_end) {
        end = new_end;
        updateLength();
    }

private:
    Point start;
    Point end;
    double length; // Каждый раз вычислять длину затратно, поэтому будем ее хранить.

    void updateLength() {
        //    length = CalcLength(end.x - start.x, end.y - start.y);
        length = CalcLength(end.getX() - start.getX(), end.getY() - start.getY());
    }

    //
    //  LineSegment GetLineSegment(bool is_empty) {
    //    if (is_empty) {
    //      return {};
    //    } else {
    //      return *this;
    //    }
    //  }
};

// double CalcLength(LineSegment &segment) {
//   return std::hypot(segment.end.x - segment.start.x,
//                     segment.end.y - segment.start.y);
// }

// void ReverseSerment(LineSegment &segment) {
//   Point old_start = segment.GetStart();
//   Point old_end = segment.GetEnd();
//   segment.SetStart(old_end);
//   segment.SetEnd(old_start);
// }
//
void PrintLineSegment(const LineSegment& segment) {
    cout << segment.toString();
}

// void PrintLineSegment(const LineSegment &segment) {
//     cout << segment.ToString();
// }
//
// LineSegment BuildLineSegment(const Point &start, const Point &end) {
//   LineSegment segment;
//   segment.SetStart(start);
//   segment.SetEnd(end);
//   return segment;
// }

void reverseSerment(LineSegment& segment) {
    Point tmp = segment.getStart();
    segment.setStart(segment.getEnd());
    segment.setEnd(tmp);
}

int main() {
    //   std::vector<int> list {1,4,5,7,1,9};
    LineSegment segment; // { {0,0},   {1,1}   };
    //  segment.length = CalcLength(segment);
    // LineSegment segment; // НО ТЕПЕРЬ, когда есть параметризованный конструктор нужен еще и
    // default
    segment.setStart({0, 0});
    segment.setEnd({1, 1});

    PrintLineSegment(segment);

    const LineSegment segmentConst{{1, 1}, {2, 2}};
    PrintLineSegment(segmentConst);
    //
    reverseSerment(segment);
    // reverseSerment(segmentConst);
    //  PrintLineSegment(segment);
    //
    //  LineSegment segment1 = BuildLineSegment({0, 0}, {2, 2});
    //  LineSegment segment2({0, 0}, {2, 2}); // Теперь работает
    //
    //  PrintLineSegment(LineSegment({0,3},{0,10}));
    //  PrintLineSegment ({{0,3},{0,10}});
    //
    //  vector<LineSegment> segments;
    //  segments.push_back({{1,10}, {1,20}});

    return 0;
}