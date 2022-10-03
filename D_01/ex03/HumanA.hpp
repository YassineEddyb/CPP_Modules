#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {
    private:
        std::string name;
        Weapon &w;
    public:
        HumanA(std::string name, Weapon &w);
        void attack() const;
        ~HumanA();
};

#endif