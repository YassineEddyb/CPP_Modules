#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
    _brain = new Brain();
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog& obj) {
    *this = obj;
}

Dog& Dog::operator = (const Dog& obj) {
    _type = obj._type;
    *_brain = *obj._brain;
    return *this;
}

void Dog::makeSound(void) const {
    std::cout << "woof woof, ruff ruff, arf arf" << std::endl;
}

Dog::~Dog() {
    delete _brain;
    std::cout << "Dog Destructor called" << std::endl;
};