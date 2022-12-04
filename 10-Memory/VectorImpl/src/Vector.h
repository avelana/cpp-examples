#pragma once

class Vector {
    int size_; // Размер
    double* elem_; // Указатель на элементы
public:
    Vector() : size_{0} {}; // Конструктор;

    // Vector() = default;
    // Vector(char) = delete; // любое использование этого конструктора приведет к ошибке

    // Ключевое слово explicit делает этот конструктор закрытым для выполнения любых неявных
    // преобразований
    explicit Vector(int s); // Конструктор;

    Vector(const Vector& arg); // 18.З.1. Копирующие конструкторы, Страуструп стр.693
    Vector& operator=(const Vector&); // Копирующее присваивание

    Vector(Vector&& v); // Перемещающий конструктор
    Vector& operator=(Vector&&); // Перемещающее присваивание

    ~Vector() { // Деструктор
        delete[] elem_; // Освобождение памяти
    }

    int size() const { // Текущий размер
        return size_;
    }

    double get(int n) const { // Чтение
        return elem_[n];
    }

    void set(int n, double v) { // Запись
        elem_[n] = v;
    }
};
