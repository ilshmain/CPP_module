#include "Span.hpp"

int main() {
    Span sp = Span(5);
    try {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

    } catch (const std::exception &e) {
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return 1;
    }

    try {
        std::cout << sp.shortestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return 1;
    }

    try {
        std::cout << sp.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return 1;
    }
    return 0;
}