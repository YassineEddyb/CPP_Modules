#include "Cat.hpp"


Cat::Cat() {
    _type = "Cat";
    _brain = new Brain();
    std::cout << "Cat Default Constructor Called "<< _brain << std::endl;
}

Cat::Cat(const Cat& obj) {
    *this = obj;
}

Cat& Cat::operator = (const Cat& obj) {
    _type = obj._type;
    _brain = obj._brain;
    std::cout << "Brain copy assingment operator called" << std::endl;
    return *this;
}

void Cat::makeSound(void) const {
    std::cout << "meow meow, mew mew " << _brain<< std::endl;
}

Cat::~Cat() {
    delete _brain;
    std::cout << "Cat Destructor called" << std::endl;
};