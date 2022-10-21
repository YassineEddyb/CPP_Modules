#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog& obj) {
    *this = obj;
}

Dog& Dog::operator = (const Dog& obj) {
    _type = obj._type;
    return *this;
}

void Dog::makeSound(void) const {
    std::cout << "woof woof, ruff ruff, arf arf" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog Destructor called" << std::endl;
};