#include "Span.hpp"

int main () {
    Span s(5);

    try {
        std::cout << s.longestSpan() << std::endl;
        std::cout << s.shortestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        s.addNumber(6);
        s.addNumber(1);
        s.addNumber(2);
        s.addNumber(9);
        s.addNumber(20);
        s.addNumber(8);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }


    std::cout << s.longestSpan() << std::endl;
    std::cout << s.shortestSpan() << std::endl;
}