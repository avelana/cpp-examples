#include <iostream>

template<class T>
class Auto_ptr1 {
    T* m_ptr;

public:
    // Получаем указатель для "владения" через конструктор
    Auto_ptr1(T* ptr = nullptr) : m_ptr(ptr) { }

    // Деструктор позаботится об удалении указателя
    ~Auto_ptr1() { delete m_ptr; }

    // Выполняем перегрузку операторов разыменования и ->, чтобы иметь возможность использовать
    // Auto_ptr1 как m_ptr
    T& operator*() const { return *m_ptr; }

    T* operator->() const { return m_ptr; }
};

// Класс для проверки работоспособности кода выше
class Item {
public:
    Item() { std::cout << "Item acquired\n"; }

    ~Item() { std::cout << "Item destroyed\n"; }
};

int main() {
    Auto_ptr1<Item> item(new Item); // динамическое выделение памяти

    // ... но никакого явного delete здесь не нужно

    // Также обратите внимание на то, что Item-у в угловых скобках не требуется символ *, поскольку
    // это предоставляется шаблоном класса

    return 0;
} // item выходит из области видимости здесь, и уничтожает выделенный Item вместо нас