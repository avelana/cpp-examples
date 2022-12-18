#include <iostream>


#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "constructor 1" << endl; }

    A(int n) { cout << "constructor 2 " << n << endl; }
};

class B : public A {
public:
    B() { cout << "constructor 3" << endl; }

    B(int n) : A(5) { cout << "constructor 4 " << n << endl; }
};

int main() {
    B obj;
    return 0;
}

// int main() {
//   std::cout << "Hello, World! Structures" << std::endl;
//   return 0;
// }