#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HHPP

#include <queue>
#include <deque>
#include <iostream>

template<typename T, typename Container=std::deque<T> >
class MutantStack : public std::queue<T,Container> {
    public:
        typedef typename Container::iterator iterator;

        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end();  }
};



#endif