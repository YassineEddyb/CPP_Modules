#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename Type>
void iter(Type* arr, int size, void fun(const Type&)) {
    for(int i = 0; i < size; i++) {
        fun(arr[i]);
    }
};

#endif