#include <iostream>
#include "iter.hpp"

template <typename T>
void decrement(T &s) {
    s--;
}

template <typename T>
void increment(T &s) {
    s++;
}

int main() {
    int  mas[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        std::cout << mas[i];
    }
    std::cout << "\n\n";
    ::array(mas, 5, increment);

    for (int i = 0; i < 5; i++) {
        std::cout << mas[i];
    }
    std::cout << "\n\n";

    ::array(mas, 5, decrement);

    for (int i = 0; i < 5; i++) {
        std::cout << mas[i];
    }
    std::cout << "\n";
}