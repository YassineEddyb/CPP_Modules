# include "HumanA.hpp"

void HumanA::attack() const {
    std::cout << name + " attacks with their " + w.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &w): name(name), w(w) {};

HumanA::~HumanA() {};
