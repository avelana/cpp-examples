/*
 * https://prog-cpp.ru/uml-classes/
 * Программа получает данные с датчика температуры (вводятся с консоли) — по 5 измерений
 * для каждого из двух объектов класса TemperatureMeasure и усредняет их.
 * Также предусмотрен класс ShowMeasure для вывода измеренных значений.
 */
#include <iostream>
using namespace std;

class Sensor {
    int value_;

public:
    Sensor() { value_ = 0; }

    void setValue(int value) { this->value_ += value; }

    int getValue() { return value_; }
};

class MeasureCount {
    int number;
    static int total;

public:
    MeasureCount() { number = 0; }

    void increment() {
        number++;
        total++;
    }

    int getNumber() { return number; }

    static int getTotal() { return total; }
};

int MeasureCount::total = 0;

class ITemperatureMeasure {
public:
    virtual void setValue() = 0;
    virtual double getValue() = 0;
};

class TemperatureMeasure : public virtual ITemperatureMeasure {
private:
    Sensor* h; // агрегация
    MeasureCount* measure; // композиция
public:
    TemperatureMeasure(Sensor* h);

    int getNumber() { return measure->getNumber(); }

    double getValue() { return (double)h->getValue() / measure->getNumber(); }

    void setValue() {
        int value;
        measure->increment();
        cout << "t[" << measure->getNumber() << "]= ";
        cin >> value;
        h->setValue(value);
    }

    static int getTotal() { return MeasureCount::getTotal(); }
};

TemperatureMeasure::TemperatureMeasure(Sensor* h) {
    measure = new MeasureCount();
    this->h = h;
}

class ShowTemperature // зависимость
{
public:
    static void Show(TemperatureMeasure t) {
        cout << t.getNumber() << ": ";
        cout << t.getValue() << " oC" << endl;
    }
};

int main() {
    Sensor* h1 = new Sensor();
    TemperatureMeasure tc1(h1);
    for (int i = 0; i < 5; i++)
        tc1.setValue();
    ShowTemperature::Show(tc1);
    cout << endl;
    Sensor* h2 = new Sensor();
    TemperatureMeasure tc2(h2);
    for (int i = 0; i < 5; i++)
        tc2.setValue();
    ShowTemperature::Show(tc2);
    cout << endl;
    cout << "Total: " << TemperatureMeasure::getTotal() << endl;
    cin.get();
    cin.get();
    return 0;
}