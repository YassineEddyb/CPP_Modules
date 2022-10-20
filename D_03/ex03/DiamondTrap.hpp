#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap {
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& obj);
        DiamondTrap& operator = (const DiamondTrap& obj);

        void whoAmI();

        ~DiamondTrap();
};

#endif