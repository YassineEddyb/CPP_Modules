#include "WrongCat.hpp"

WrongCat::WrongCat() {
    _type = "WrongCat";
    std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) {
    *this = obj;
}

WrongCat& WrongCat::operator = (const WrongCat& obj) {
    _type = obj._type;
    return *this;
}

void WrongCat::makeSound(void) const {
    std::cout << "meow meow, mew mew" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Destructor called" << std::endl;
};