#include "Brain.hpp"

Brain::Brain() {
    // std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain& obj) {
    *this = obj;
}

Brain& Brain::operator = (const Brain& obj) {
    for(int i = 0; i < SIZE; i++)
        _ideas[i] = obj._ideas[i];

    std::cout << "Brain copy assingment operator called" << std::endl;
    return *this;
}

void Brain::setIdeas(std::string* ideas) {
    for (int i = 0; i < SIZE; i++)
        _ideas[i] = ideas[i];
}

std::string* Brain::getIdeas() {
    return _ideas;
}

Brain::~Brain() {
    // std::cout << "Brain Destructor called" << std::endl;
}