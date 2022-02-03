#include "Span.hpp"


Span::Span() {}

Span::Span(int num) {
    this->num = num;
}

Span::~Span() {}

Span &Span::operator=(const Span &other) {
    this->vector = other.vector;
    this->num = other.num;
    return *this;
}

Span::Span(const Span &other) {
    this->vector = other.vector;
    this->num = other.num;
}

void Span::addNumber(int a) {
    if (this->vector.size() < this->num)
        vector.push_back(a);
    else
        throw std::out_of_range("Array is full");
}

int Span::shortestSpan() {
    int count = 0;
    int min = 0;

    if (this->vector.size() < 2)
        throw std::out_of_range("Not enough values in array");

    std::vector<int> vectorDop;
    std::vector<int>::iterator it;


    vectorDop = this->vector;
    sort(vectorDop.begin(), vectorDop.end());
    it = vectorDop.begin();


    while (it != vectorDop.end()) {
        if (count == 0) {
            count = *it;
            it++;
            min = *it - count;
            count = *it;
        } else {
            if (*it - count < min)
                min = *it - count;
            count = *it;
        }
        it++;
    }
    return min;
}

int Span::longestSpan() {
    int min;
    int max;

    if (this->vector.size() < 2)
        std::out_of_range("Not enough values in array");
    min = *std::min_element(this->vector.begin(), this->vector.end());
    max = *std::max_element(this->vector.begin(), this->vector.end());

    return max - min;
}

void Span::add(int add) {
    for (int i = 0; i < add; i++) {
        this->vector.push_back(i);
    }
}

