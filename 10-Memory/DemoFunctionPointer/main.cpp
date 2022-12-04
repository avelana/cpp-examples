#include <iostream>

void my_handler(int n) {
    std::cout << n << std::endl;
};

void hello();
void goodbye();

int add(int, int);
int subtract(int, int);
int multiply(int, int);

int main() {
    using Handle_type = void (*)(int);

    Handle_type handle = my_handler;
    handle(10); // Эквивалентно my_handler (10)


    void (*function_pointer)(); // определим указатель на функцию

    function_pointer = hello;
    function_pointer(); // hello();
    function_pointer = goodbye;
    function_pointer(); // goodbye()

    int a = 10;
    int b = 5;
    int result;
    int (*operation)(int, int);
    // int operation(int, int);

    operation = add;
    result = operation(a, b);
    // result = (*operation)(a, b); // альтернативный вариант
    std::cout << "result=" << result << std::endl; // result=15

    operation = subtract;
    result = operation(a, b);
    std::cout << "result=" << result << std::endl; // result=5

    int (*operations[])(int, int) = {add, subtract, multiply};

    // получаем длину массива
    int length = sizeof(operations) / sizeof(operations[0]);
    std::cout << "l = " << length << std::endl;
    std::cout << "sizeof(operations[0]) = " << sizeof(operations[0]) << std::endl;
    ;
    std::cout << "handle = " << sizeof(handle) << std::endl;
    ;


    for (int i = 0; i < length; i++) {
        std::cout << operations[i](a, b) << "\n"; // вызов функции по указателю
    }

    return 0;
}

void hello() {
    std::cout << "Hello, World" << std::endl;
}

void goodbye() {
    std::cout << "Good Bye, World" << std::endl;
}

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}
