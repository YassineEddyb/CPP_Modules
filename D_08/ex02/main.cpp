#include "MutantStack.hpp"

#include <iostream>

int main() {
    MutantStack<int> stack;

    for(int i = 0; i < 10; ++i)
        stack.push(i);

    MutantStack<int>::iterator start = stack.begin(); 
    MutantStack<int>::iterator end = stack.end();
    while(start != end) {
        std::cout << *start << std::endl;
        start++;
    }

    return 0;
}