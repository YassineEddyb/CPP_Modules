#ifndef ScavTrap_H
#define ScavTrap_H

#include "ClapTrap.hpp"
#include <iostream>
#include <string>


class FragTrap : public ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& obj);
        FragTrap& operator = (const FragTrap& obj);

        void highFivesGuys(void);

        ~FragTrap();
};

#endif