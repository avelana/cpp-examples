#include <cstdint>
#include <iostream>

union S {
    std::int32_t n; // occupies 4 bytes
    std::uint16_t s[2]; // occupies 4 bytes
    std::uint8_t c; // occupies 1 byte
};

// объявление типа "объединение Floats"
union Floats {
    float f; // рассматривается 4 байта
    double d; // рассматривается 8 байт
};

int main() {
    S s = {0x12345678}; // initializes the first member, s.n is now the active member
    // at this point, reading from s.s or s.c is undefined behavior (UB)
    std::cout << std::hex << "s.n = " << s.n << '\n';
    s.s[0] = 0x0011; // s.s is now the active member
    // at this point, reading from n or c is UB but most compilers define it
    std::cout << "s.c is now " << +s.c << '\n' // 11 or 00, depending on platform
              << "s.n is now " << s.n << '\n'; // 12340011 or 00115678


    Floats Fl;
    int d;
    Fl.f = 20.5; // Fl.d не определено
    Fl.d = -100.35; // теперь Fl.f не определено

    d = sizeof(Fl); // d = 8
}

union имя_типа_объединения {
    тип переменная1;
    тип переменная2;
    ... тип переменнаяN;
};
