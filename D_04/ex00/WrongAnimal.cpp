#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    _type = "WrongAnimal";
    std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) {
    std::cout << "WrongAnimal Constructor Called" << std::endl;
    *this = obj;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& obj) {
    _type = obj._type;
    return *this;
}

std::string WrongAnimal::getType() const {
    return _type;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal type has no sound" << std::endl;
};

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal Destructor called" << std::endl;
};