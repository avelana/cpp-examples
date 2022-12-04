#include <algorithm>
#include <array>
#include <functional>
#include <iostream>
using namespace std;
using namespace placeholders;

using std::array;
using std::count_if;
using std::cout;
using std::endl;

template<typename T>
struct Predicate {
    T a;
    T b;

    Predicate(const T& t1, const T& t2) : a(t1), b(t2) { }

    bool operator()(T& n) { return (n > a && n < b) ? true : false; }
};

bool IsInRange2_5(int k) {
    return (k > 2 && k < 5) ? true : false;
}

bool IsInRange(int k) {
    return (k > 0 && k < 10) ? true : false;
}

int main() {

    //  array<int, 10> num{1, 2, 3, 9, 11, 6, 7, 8, 9, 10};
    //  //cout << count_if(num.begin(), num.end(), IsInRange) << endl;
    //  cout << count_if(num.begin(), num.end(), Predicate<int>(3, 5)) << endl;
    //  cout << count_if(num.begin(), num.end(), Predicate<int>(0, 10)) << endl;
    //
    //  array<short, 10> numShort{1, 2, 3, 9, 11, 6, 7, 8, 9, 10};
    //  cout << count_if(numShort.begin(), numShort.end(), Predicate<short>(3, 5)) << endl;

    array<short, 10> num1{1, 2, 3, 9, 11, 6, 7, 8, 9, 10};
    //  cout << count_if(num1.begin(), num1.end(), std::greater<short>(3)) <<
    //  endl;

    std::sort(num1.begin(), num1.end(), std::less<short>());
    for (auto& tmp : num1) {
        cout << tmp << ' ';
    }
    cout << endl;

    cout << count_if(num1.begin(), num1.end(), bind2nd(std::greater<short>(), 3)) << endl;

    cout << count_if(num1.begin(), num1.end(), bind(std::greater<short>(), _1, 6)) << endl;


    cout << count_if(num1.begin(), num1.end(), [](short& tmp) { return tmp > 3; }) << endl;


    return 0;
}
