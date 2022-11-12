#include "Span.hpp"

int main () {
    Span s(5);
    int arr[5] = {3, 4, 100, 30, -1};

    try {
        std::cout << s.longestSpan() << std::endl;
        std::cout << s.shortestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        s.addNumber(6);
        s.addNumberRange(arr, 5);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }


    std::cout << s.longestSpan() << std::endl;
    std::cout << s.shortestSpan() << std::endl;
}