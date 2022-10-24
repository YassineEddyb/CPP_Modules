#include "AMateria.hpp"

AMateria::AMateria() {
    _type = "AMateria";
    std::cout << "AMateria Default Constructor Called" << std::endl;
}

AMateria::AMateria(const AMateria& obj) {
    *this = obj;
}

AMateria& AMateria::operator = (const AMateria& obj) {
    _type = obj._type;
    return *this;
}

AMateria::AMateria(std::string const & type) {
    _type = type;
    std::cout << "AMateria Default Constructor Called" << std::endl;
}

std::string const & AMateria::getType() const {
    return _type;
}

void AMateria::use(ICharacter& target) {
    (void)target;
}

AMateria::~AMateria() {
    std::cout << "AMateria Destructor Called" << std::endl;
}
