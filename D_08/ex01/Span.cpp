#include "Span.hpp"


Span::Span() {

}

Span::Span(const Span& obj) {
    (void)obj;
}

Span::Span(unsigned int N) {
    _index = 0;
    _arr = std::vector<int>(N);
}

Span& Span::operator = (const Span& obj) {
    (void)obj;
    return *this;
}

int& Span::operator[] (int index) {
    return _arr[index];
}

int Span::size() const{
    return _index;
}

void Span::addNumber(int num) {
    if (_index >= _arr.capacity())
        throw Span::MaxElementExceeded();
    _arr[_index] = num;
    _index++;
}

void Span::addNumberRange(int *arr, int size) {
    if (!arr)
        throw Span::NotEnoughElements();
    for (int i = 0; i < size; i++) {
        addNumber(arr[i]);
    }
}

int Span::longestSpan() const{
    if (_index <= 1)
        throw Span::NotEnoughElements();
    int small = *std::min_element(_arr.begin(), _arr.begin() + _index);
    int big = *std::max_element(_arr.begin(), _arr.begin() + _index);

    return (big - small);
}

int Span::shortestSpan() const{
    if (_index <= 1)
        throw Span::NotEnoughElements();
    std::vector<int> sorted_arr = _arr;
    sort(sorted_arr.begin(), sorted_arr.end());
    std::vector<int>::iterator first = sorted_arr.begin();
    std::vector<int>::iterator last = first + _index;

    int small = *(last - 1) - *(last - 2);
    while(first < --last) {
        if (last - (last - 1) < small)
            small = *(last) - *(last - 1);
    }

    return small;
}

const char* Span::MaxElementExceeded::what () const throw() {
    return "Max element exceeded";
}

const char* Span::NotEnoughElements::what () const throw() {
    return "Not enough elements";
}

Span::~Span() {
    std::cout << "Span Destructor" << std::endl;
}
