#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int easyfind(T arr, int n) {
    std::vector<int>::iterator a = find(arr.begin(), arr.end(), n);

    if (a == arr.end())
        throw std::exception();
    
    return a - arr.begin();
}

#endif