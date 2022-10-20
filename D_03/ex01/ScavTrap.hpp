#ifndef ScavTrap_H
#define ScavTrap_H

#include "ClapTrap.hpp"
#include <iostream>
#include <string>


class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& obj);
        ScavTrap& operator = (const ScavTrap& obj);

        void attack(const std::string& target);
        void guardGate(void);

        ~ScavTrap();
};

#endif