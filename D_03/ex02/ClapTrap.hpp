#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap {
    protected:
        std::string _name;
        unsigned int _hit_points;
        unsigned int _energy_points;
        unsigned int _attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& obj);
        ClapTrap& operator = (const ClapTrap& obj);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void printData() const;
        std::string getName() const;

        ~ClapTrap();
};

# endif