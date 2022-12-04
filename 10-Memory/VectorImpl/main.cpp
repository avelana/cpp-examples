#include "src/Vector.h"
#include <iostream>
using namespace std;

void PrintVector(string title, const Vector& v) {
    cout << title << "(Size = " << v.size() << "):"
         << "\n";
    for (int i = 0; i < v.size(); ++i) {
        cout << v.get(i) << " "; // элементов
    }
    cout << endl;
}

// Vector Fill (istream& is) {
//   Vector res;
//  // for (double x; is >> x;) res.push_back(x);
//   return res;
// }

int main() {
    std::cout << "Demo Vector" << std::endl;
    //  char n = 3;
    //  Vector v2(n); // Определяем вектор из трех элементов


    Vector v1(3.35462546); // Определяем вектор из трех элементов

    PrintVector("Vector v1", v1);

    v1.set(2, 2.2); // Устана вливаем v [2] равным 2.2
    PrintVector("Vector v1, after settings", v1);

    Vector v2 = v1; // Что здесь происходит?
    // можно написать
    // Vector v2 (v) ;
    PrintVector("Vector v2 = v1", v2);
    v1.set(1, 99); // Устанавливаем v [1] равным 99
    v2.set(0, 88); // Устанавливаем v2 [ 0] равным 88
    PrintVector("Vector v1, after settings", v1);
    PrintVector("Vector v2, after settings", v2);
    cout << v1.get(0) << ' ' << v2.get(1);
    //
    Vector v3(4);
    PrintVector("Vector v3 ", v3);
    v3 = v1;
    PrintVector("Vector v3 , after settings", v3);


    return 0;
}