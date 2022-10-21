#include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat& obj) {
    *this = obj;
}

Cat& Cat::operator = (const Cat& obj) {
    _type = obj._type;
    return *this;
}

void Cat::makeSound(void) const {
    std::cout << "meow meow, mew mew" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat Destructor called" << std::endl;
};