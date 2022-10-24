#include "Animal.hpp"

Animal::Animal() {
    _type = "Animal";
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(const Animal& obj) {
    std::cout << "Animal copy Constructor Called" << std::endl;

    *this = obj;
}

Animal& Animal::operator = (const Animal& obj) {
    std::cout << "Animal assignemt Operator Called" << std::endl;
    _type = obj._type;
    return *this;
}

std::string Animal::getType() const {
    return _type;
}

void Animal::makeSound(void) const {
    std::cout << "Animal type has no sound" << std::endl;
};

Animal::~Animal() {
    std::cout << "Animal Destructor called" << std::endl;
};