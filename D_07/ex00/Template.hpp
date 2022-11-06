#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>

template <typename Type>
void swap (Type &a, Type &b) {
    Type tmp = a;
    a = b;
    b = tmp;
}

template <typename Type>
Type max (Type a, Type b) {
    return (a > b ? a : b);
}

template <typename Type>
Type min (Type a, Type b) {
    return (a < b ? a : b);
}


#endif