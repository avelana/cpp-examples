//
// Created by volha on 10/12/2021.
//
// int Factorial(int n) {
//    return 0;
//}

int Factorial(int n) {
    if (n < 0) // если пользователь ввел отрицательное число
        return 0; // возвращаем ноль
    if (n == 0) //
        return 1; // возвращаем факториал от нуля
    else // Во всех остальных случаях
        return n * Factorial(n - 1); // делаем рекурсию.
}