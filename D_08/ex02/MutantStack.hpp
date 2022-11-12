#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack() {};
        MutantStack(const MutantStack& obj) {
            *this = obj;
        };
        MutantStack& operator = (const MutantStack& obj) {
            (void)obj;
            return *this;
        };
        ~MutantStack() {};

        iterator begin() { 
            return this->c.begin();
        }
        iterator end() {
            return this->c.end();
        }
};


#endif