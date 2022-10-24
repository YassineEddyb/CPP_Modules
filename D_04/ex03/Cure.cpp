#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
    std::cout << "Cure Default Constructor Called" << std::endl;
}

Cure::Cure(const Cure& obj) {
    *this = obj;
}

Cure& Cure::operator = (const Cure& obj) {
    _type = obj._type;
    return *this;
}

Cure* Cure::clone() const {
    Cure *cure = new Cure();
    *cure = *this;
    return cure;
}

void Cure::use(ICharacter& target) {
    (void)target;
}

Cure::~Cure() {
    std::cout << "Cure Destructor Called" << std::endl;
}