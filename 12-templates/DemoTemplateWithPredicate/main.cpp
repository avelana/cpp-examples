#include <iostream>

template<typename T>
constexpr bool Equality_comparable() {
    return Has_equal<T>() && Boolean<Equal_result<T>>() && Has_not_equal<T>()
        && Boolean<Not_equal_result<T>>();
}

template<typename T>
constexpr bool Totally_ordered() {
    return Equality_comparable<T>() // has == and !=
        && Has_less<T>() && Boolean<Less_result<T>>() && Has_greater<T>()
        && Boolean<Greater_result<T>>() && Has_less_equal<T>() && Boolean<Less_equal_result<T>>()
        && Has_greater_equal<T>() && Boolean<Greater_equal_result<T>>();
}

template<typename T>
constexpr bool Ordered() {
    return Regular<T>() && Totally_ordered<T>();
}

template<typename C>
class String {
    static_assert(Ordered<C>(), "String's character type is not ordered");
    // ...
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}