#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &w) {
    this->w = &w;
}

void HumanB::attack() const {
    if (w)
        std::cout << name + " attacks with their " + w->getType() << std::endl;
}

HumanB::HumanB(std::string name): name(name) {}

HumanB::~HumanB() {};