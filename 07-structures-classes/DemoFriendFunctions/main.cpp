#include <iostream>

class Integer {
private:
    int value;

public:
    Integer(int i) : value(i) { }

    // унарный +
    friend Integer operator+(const Integer& i);

    // унарный -
    friend Integer operator-(const Integer& i);

    // префиксный инкремент
    friend const Integer& operator++(Integer& i);

    // постфиксный инкремент
    friend const Integer operator++(Integer& i, int);

    // префиксный декремент
    friend const Integer& operator--(Integer& i);

    // постфиксный декремент
    friend const Integer operator--(Integer& i, int);
    friend std::ostream& operator<<(std::ostream& os, const Integer& i);
};

// унарный плюс ничего не делает.
Integer operator+(const Integer& i) {
    return Integer(i.value);
}

Integer operator-(const Integer& i) {
    return Integer(-i.value);
}

// префиксная версия возвращает значение после инкремента
const Integer& operator++(Integer& i) {
    i.value++;
    return i;
}

// постфиксная версия возвращает значение до инкремента
const Integer operator++(Integer& i, int) {
    Integer oldValue(i.value);
    i.value++;
    return oldValue;
}

// префиксная версия возвращает значение после декремента
const Integer& operator--(Integer& i) {
    i.value--;
    return i;
}

// постфиксная версия возвращает значение до декремента
const Integer operator--(Integer& i, int) {
    Integer oldValue(i.value);
    i.value--;
    return oldValue;
}

std::ostream& operator<<(std::ostream& os, const Integer& i) {
    os << i.value;
    return os;
}

class Program {
public:
    static int Main() {

        Integer i(1);
        i++;
        std::cout << i << '\n';
        i--;
        std::cout << i << '\n';
        std::cout << -i << '\n';


        return 0;
    }
};

int main() {
    int _1k = 9;
    std::cout << "_1k = " << _1k << '\n';
    int value;
    int value_;
    int _value;
    int _1value;
    // int 1value;
    int __value;
    int new_value;
    int New_value;
    int NewValue;
    // int New Value;
    int New_Value;
    int New_Value_;
    int NEWVALUE;
    int NEW_VALUE;
    // int void;
    int _void;


    return Program::Main();
    ;
}