#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
    std::cout << "Ice Default Constructor Called" << std::endl;
}

Ice::Ice(const Ice& obj) {
    *this = obj;
}

Ice& Ice::operator = (const Ice& obj) {
    _type = obj._type;
    return *this;
}

AMateria* Ice::clone() const {
    Ice *ice = new Ice();
    *ice = *this;
    return ice;
}

void Ice::use(ICharacter& target) {
    std::cout << "shoots an ice bolt at " << std::endl;
}

Ice::~Ice() {
    std::cout << "Ice Destructor Called" << std::endl;
}