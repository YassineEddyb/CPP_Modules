#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain& obj) {
    *this = obj;
}

Brain& Brain::operator = (const Brain& obj) {
    for(int i = 0; i < SIZE; i++)
        _ideas[i] = obj._ideas[i];

    std::cout << "Brain copy assignment operator called" << std::endl;
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain Destructor called" << std::endl;
}