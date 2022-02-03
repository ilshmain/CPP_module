#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <algorithm>
#include <vector>

#define DEFAULT		"\033[0m"
#define RED			"\033[31m"

class Span {
private:
    std::vector<int> vector;
    int num;
public:
    Span();
    Span(int num);

    virtual ~Span();

    Span &operator=(const Span &other);
    Span(const Span &other);

    void addNumber(int a);

    int shortestSpan();
    int longestSpan();
    void add(int add);
};


#endif
