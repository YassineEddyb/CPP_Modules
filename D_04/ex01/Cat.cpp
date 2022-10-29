#include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
    _brain = new Brain();
    std::cout << "Cat Default Constructor Called " << std::endl;
}

Cat::Cat(const Cat& obj) {
    _brain = new Brain();
    *this = obj;
}

Cat& Cat::operator = (const Cat& obj) {
    _type = obj._type;
    *_brain = *(obj._brain);

    return *this;
}

void Cat::makeSound(void) const {
    std::cout << "meow meow, mew mew" << std::endl;
}

Cat::~Cat() {
    delete _brain;
    std::cout << "Cat Destructor called" << std::endl;
};