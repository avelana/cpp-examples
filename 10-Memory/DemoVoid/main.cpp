#include <iostream>

enum Type { INT, DOUBLE, CSTRING };

void printValue(void* ptr, Type type) {
    switch (type) {
        case INT:
            std::cout << *static_cast<int*>(ptr)
                      << '\n'; // конвертируем в указатель типа int и разыменовываем
            break;
        case DOUBLE:
            std::cout << *static_cast<double*>(ptr)
                      << '\n'; // конвертируем в указатель типа double и разыменовываем
            break;
        case CSTRING:
            std::cout << static_cast<char*>(ptr)
                      << '\n'; // конвертируем в указатель типа char (без разыменования)
            // std::cout знает, что char* следует обрабатывать как строку C-style
            // Если бы мы разыменовали результат (целое выражение), то тогда бы вывелся просто
            // первый символ из массива букв, на который указывает ptr
            break;
    }
}

int main() {

    int nResult;
    float fResult;

    struct Something {
        int n;
        float f;
    };

    Something sResult;

    void* ptr;
    ptr = &nResult; // допустимо
    ptr = &fResult; // допустимо
    ptr = &sResult; // допустимо


    int value = 7;
    void* voidPtr = &value;

    // std::cout << *voidPtr << std::endl; // запрещено: нельзя разыменовать указатель типа void
    int* intPtr = static_cast<int*>(voidPtr
    ); // однако, если мы конвертируем наш указатель типа void в указатель типа int,
    std::cout << *intPtr
              << std::endl; // то мы сможем его разыменовать, будто бы это обычный указатель


    int nValue = 7;
    double dValue = 9.3;
    char szValue[] = "Hello";

    printValue(&nValue, INT);
    printValue(&dValue, DOUBLE);
    printValue(szValue, CSTRING);

    void* ptr1 = 0; // ptr - это указатель типа void, который сейчас является нулевым

    // int nResult1 = 0;
    // printValue(&nResult1, CSTRING); // компилятор промолчит. Но что будет в результате?
    // Непонятно!


    return 0;
}
