#include <cassert>
#include <cmath>
#include <iostream>
using std::cin;
using std::cout;

int main() {
    cout << "Calculation of the sqrt(a)\n";
    cout << "Input nonnegative number: ";
    double a;
    double res;
    cin >> a;
    // Предполагается, что значение а неотрицательное
    assert(a >= 0 && " a must be nonnegative!");
    // assert( a>=0 );
    //    if (a < 0) {
    //        abort();
    //    }
    res = sqrt(a);
    cout << "The result of sqrt(" << a << ") is equal " << res << '\n';
    return 0;
}