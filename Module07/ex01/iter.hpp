#include "iostream"

template <typename T>
void array(T *mas, int len, void (*func)(T&)) {
    for (int i = 0; i < len; i++) {
        func(mas[i]);
    }
}