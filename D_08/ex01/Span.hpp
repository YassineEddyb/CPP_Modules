#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
    private:
        unsigned int _index;
        std::vector<int> _arr;
    public:
        Span();
        Span(const Span& obj);
        Span(unsigned int N);
        Span& operator = (const Span& obj);
        int& operator[] (int index);

        void addNumber(int num);
        int size ();
        int shortestSpan();
        int longestSpan();

        class MaxElementExceeded : public std::exception {
            public:
                const char* what () const throw();
        };
        class NotEnoughElements : public std::exception {
            public:
                const char* what () const throw();
        };

        ~Span();
};

#endif