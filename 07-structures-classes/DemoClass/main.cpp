#include <iostream>

// struct Program{
class Program {
public:
    std::string msg;

    static void Main() {
        // read date
        std::cout << "PrintHelloWorld!\n";
        // do smth
        // outpusdata
    }

    void PrintObjMessage() { std::cout << "Hello world!" << '\n'; }

    void PrintOurMessage() { std::cout << msg << '\n'; }
};

int main() {
    // 1 way
    // Program::Main();
    // Program::PrintOurMessage();
    // 2 way
    //    Program app{};
    //    app.Main();
    Program app{"Message"};

    app.PrintObjMessage();
    app.PrintOurMessage();
    return 0;
}

// Program app{"Message"};

// app.PrintObjMessage();
// app.PrintOurMessage();
//  Program::PrintObjMessage();
//  return 0;
//}