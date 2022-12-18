
#include "Program.h"
#include "../Logger.h"
#include "../entity/Array.h"
#include "../entity/ArrayOnVector.h"
#include "../service/ArrayCreator.h"
#include "../service/ArrayOnVectorService.h"
#include "../service/ArrayService.h"
#include "IOConsole.h"
#include <iostream>

#include <vector>

//
// bool calledMove = false;
//
// class T {
// public:
//    T() {}
//    T(T&&) {
//        std::cout <<"Ctor move\n";
//        calledMove = true;
//    }
//};
//
// T foo(bool f = true) {
//    T a;
//    T b;
//    return a;
//
////    if (f) {
////        return a;
////    } else {
////        return b;
////    }
//}
//
// struct Noisy{
//    Noisy() { std::cout << "create in " << this << '\n'; }
//    Noisy(const Noisy&) { std::cout << "create by copy\n"; }
//    Noisy(Noisy&&) { std::cout << "create by move\n"; }
//    ~Noisy() { std::cout << "delete in " << this << '\n'; }
//};
//
// Noisy f(){
//    Noisy v = Noisy(); // пропуск копирования при инициализации v
//    // из временного объекта (до С++17) / prvalue (начиная с С++17)
//    return v; // NRVO из v в объект результата (не гарантируется даже в C++17),
//}             // если оптимизация отключена, вызывается конструктор перемещения
//
// void g(Noisy arg){
//    std::cout << "&arg = " << &arg << '\n';
//}
//
// class Buffer{
// public:
//    Buffer(const std::string& buff):pBuff(nullptr),buffSize(buff.length()){
//        std::cout <<"Ctor param\n";
//        pBuff = new char[buffSize];
//        memcpy(pBuff, buff.c_str(), buffSize);
//    }
//
//    ~Buffer(){
//        std::cout <<"Destror\n";
//        destroy();
//    }
//
//    Buffer(const Buffer& other):pBuff(nullptr),buffSize(other.buffSize){
//        std::cout <<"Ctor copy\n";
//        pBuff = new char[buffSize];
//        memcpy(pBuff, other.pBuff, buffSize);
//    }
//
//    Buffer& operator=(const Buffer& other){
//        std::cout <<"Copy assignment\n";
//        destroy();
//        buffSize = other.buffSize;
//        pBuff = new char[buffSize];
//        memcpy(pBuff, other.pBuff, buffSize);
//        return *this;
//    }
//
//    Buffer(Buffer&& tmp):pBuff(tmp.pBuff),buffSize(tmp.buffSize){
//        std::cout <<"Ctor move\n";
//        tmp.pBuff = nullptr;
//    }
//
//    Buffer& operator=(Buffer&& tmp){
//        std::cout <<"Move assignment\n";
//        destroy();
//        buffSize = tmp.buffSize;
//        pBuff = tmp.pBuff;
//        tmp.pBuff = nullptr;
//        return *this;
//    }
//
// private:
//    void destroy(){
//        if (pBuff)
//            delete[] pBuff;
//    }
//
//    char* pBuff;
//    size_t buffSize;
//};
//
// Buffer CreateBuffer(const std::string& buff){
//    Buffer retBuff(buff);
//    return retBuff;
//}


int Program::main() {
    //	const size_t N = 10;
    //	std::vector<int> arr;
    //	std::cout << "Create vector \n";
    //	for (size_t i = 0; i < N; ++i) {
    //		arr.push_back(N-i);
    //	}
    //
    //	outputToFile("data\\initial_data.txt", arr, ' ');
    //
    //	std::vector<int> tmpArr;
    //	inputFromFile("data\\initial_data.txt", tmpArr, ' ');
    //
    //	std::cout << "Output \n";
    //	outputToConsole(tmpArr, ' ');
    //
    //
    //	std::cout << "Quick sort \n";
    //	quickSort(arr, 0, N - 1, ascending);
    //	outputToConsole(arr, ' ');
    //
    //	quickSort(arr, 0, N - 1, descending);
    //	outputToConsole(arr, ' ');
    //
    //	outputToFile("data\\output.txt", arr, ',');


    //    T tmp = foo(false);
    //
    //    Buffer buffer1 = CreateBuffer("123"); // срабатывает конструктор
    //        // перемещения (-)
    //        Buffer buffer2 = buffer1;             // срабатывает конструктор
    //        // копирования (+)
    //        buffer2 = CreateBuffer("123");        // срабатывает конструктор перемещения, затем
    //        оператор перемещения buffer2 = buffer1;                    // срабатывает оператор
    //        присваивания
    //
    //
    //    Noisy v = f(); // пропуск копирования при инициализации v
    //    // из временного объекта, возвращаемого f() (до C++17)
    //    // из prvalue f() (начиная с C++17)
    //
    //    std::cout << "&v = " << &v << '\n';
    //
    //    g(f()); // пропуск копирования при инициализации параметра функции g()
    //    // из временного объекта, возвращаемого f() (до C++17)
    //    // из prvalue f() (начиная с C++17)
    //
    //-----------------------------------------------------------------------------
    Logger::out("---ArrayOnVector---");
    ArrayOnVector arr1{{1, 0, 3, 4, 5, 6, 7}};
    IOConsole::show("1) intitialised by list: ");
    IOConsole::show(arr1);

    ArrayOnVector arr2;
    IOConsole::show("2) default: ");
    IOConsole::show(arr2);

    ArrayOnVector arr3(10);
    IOConsole::show("3) 10 places: ");
    IOConsole::show(arr3);

    ArrayOnVector arr4(7, 12.7);
    IOConsole::show("4) initialised by value: ");
    IOConsole::show(arr4);

    ArrayOnVector arr5 = arr4;
    IOConsole::show("5) copy to 5th from 4th: ");
    IOConsole::show(arr5);

    arr4.pushBackItem(100.6);
    IOConsole::show("--4) 4th has changed: ");
    IOConsole::show(arr4);
    IOConsole::show("--5) 5th is the same: ");
    IOConsole::show(arr5);

    ArrayOnVectorService service;
    try {
        ArrayOnVector arr6 = service.arraySum(arr1, arr4);
        IOConsole::show("6) sum of 1st and 4th: ");
        IOConsole::show(arr6);

    } catch (const char* ex) {
        std::cerr << ex;
    }

    IOConsole::show("7) Items sum of the 1st arr = ");
    IOConsole::show(service.itemSum(arr1), "");

    Logger::out("\n---Array---");

    Array arrStatic1{{1, 3, 4, 5, 6, 7}};
    IOConsole::show("*1) intialised by list: ");
    IOConsole::show(arrStatic1);

    Array arrStatic2;
    IOConsole::show("*2) defualt: ");
    IOConsole::show(arrStatic2);

    Array arrStatic3(10);
    IOConsole::show("*3) just 10 places: ");
    IOConsole::show(arrStatic3);

    Array arrStatic4(6, 15.7);
    IOConsole::show("*4) initialised by value: ");
    IOConsole::show(arrStatic4);

    ArrayService serviceSt;
    IOConsole::show("*5) Sum of two  arrayStatic (1st + 4th) is new array:\n");
    Array arrStatic5 = serviceSt.arraySum(arrStatic1, arrStatic4);
    IOConsole::show(arrStatic5);

    Array arrStatic6 = arrStatic4;
    IOConsole::show("*6) copy of 4th ");
    IOConsole::show(arrStatic6);

    arrStatic4.setItem(0, 100.6);
    IOConsole::show("**4) changed 4th: ");
    IOConsole::show(arrStatic4);
    IOConsole::show("**6) 6th: ");
    IOConsole::show(arrStatic6);

    IOConsole::show("*7) Sum of the 1st arrStatic = ");
    IOConsole::show(serviceSt.itemSum(arrStatic1), "\n"); // just as example
    // of argument by value

    arrStatic3 = arrStatic5;
    IOConsole::show("*8) copy assignment to 3th from 5th: ");
    IOConsole::show(arrStatic3);

    Logger::out("\n---Create the arrays with ArrayCreator---");
    try {
        ArrayCreator arrayCreator;

        Array arr11 = arrayCreator.createArray(ARRAY_EMPTY, {{}});
        IOConsole::show("%% 1) empty array, ");
        IOConsole::show(arr11);

        int n = 9;
        Array arr22 = arrayCreator.createArray(ARRAY_DEFAULT, {{SIZE, &n}});
        IOConsole::show("%% 2) default array, ");
        IOConsole::show(arr22);

        double value = 7.7;
        Array arr33 = arrayCreator
            .createArray(ARRAY_VALUE, {{SIZE, &n}, {VALUE, &value}});
        IOConsole::show("%% 3) fill array by value, ");
        IOConsole::show(arr33);

        double valueBegin = -7.7;
        double valueEnd = 156.3;

        Array arr44 = arrayCreator.createArray(
            ARRAY_RANDOM,
            {
                {SIZE, &n},
                {VALUE_BEGIN, &valueBegin},
                {VALUE_END, &valueEnd},
            }
        );
        IOConsole::show("%% 4) fill array randomly, ");
        IOConsole::show(arr44);

        std::initializer_list<double> list = {-2.7, 0.7, 0, 2, -5.8};

        Array arr55 = arrayCreator.createArray(ARRAY_FROM_LIST, {{INITIALIZER_LIST, &list}});
        IOConsole::show("%% 5) fill array by initializer_list, ");
        IOConsole::show(arr55);

        std::string name = "..\\data\\inputListDouble.txt";
        Array arr66 = arrayCreator.createArray(ARRAY_FROM_FILE, {{FILE_PATH, &name}});
        IOConsole::show("%% 6) fill array by initializer_list, ");
        IOConsole::show(arr66);

    } catch (const char* ex) {
        Logger::out(ex);
    }
    return 0;
}
