#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {
    private:
        std::string name;
        Weapon *w;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon &w);
        void attack() const;
        ~HumanB();
};

#endif