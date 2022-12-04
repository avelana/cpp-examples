#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

// print numbers in descending order
void PrintNumbersDescOrder(int number) {
    if (number > 0) {
        cout << number << ' ';
        PrintNumbersDescOrder(number - 1);
    }
}

// print numbers in descending order
void PrintVector(const vector<int>& list, int number) {
    if (number > 0) {
        PrintVector(list, number - 1);
        cout << list[number] << ' ';
    }
}

// print numbers in descending order
void MakeVector(vector<int>& the_list, int number) {
    if (number > 0) {
        the_list.push_back(number);
        MakeVector(the_list, number - 1);
        cout << the_list[number] << "---";
    }
}

int Fibonacci(int number) {
    if (number == 0)
        return 0; // базовый случай (условие завершения)
    if (number == 1)
        return 1; // базовый случай (условие завершения)
    return Fibonacci(number - 1) + Fibonacci(number - 2);
}

double calc(double x, int n);

double power(double x, int n) {
    if (n == 1) {
        return x;
    }
    return x * calc(x, n - 1);
}

double calc(double x, int n) {
    return power(x, n) / n;
}

template<typename T>
T GetData(string str) {
    cout << str;
    T tmp;
    cin >> tmp;
    return tmp;
}

template<typename T>
void OutputData(string str, T res) {
    cout << str;
    cout << res;
}

int main() {
    // Example 1
    // PrintNumbersDescOrder(100); //0xC00000FD: Stack overflow

    //  // Example 2
    //  vector<int> list;
    //  const int kN = 10;
    //  MakeVector(list, kN);
    //  //PrintVector(list, kN);

    //  for (int count=0; count < kN; ++count)
    //    cout << Fibonacci(count) << " ";


    // input data
    int n = GetData<int>("Input integer number - the power");
    double x = GetData<double>("Input double number - the argument");

    // service
    double res = calc(x, n);

    // print data;
    OutputData("output: ", res);
    return 0;
}
