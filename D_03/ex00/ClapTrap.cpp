#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    _name = "ClapTrap";
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
    std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    _name = name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
    std::cout << "ClapTrap Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj) {
    *this = obj;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& obj) {
    _name = obj._name;
    _hit_points = obj._hit_points;
    _energy_points = obj._energy_points;
    _attack_damage = obj._attack_damage;
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (_energy_points > 0) {
        std::cout << "ClapTrap " + _name + " attack " + target + " cousing " << _attack_damage << " points" << std::endl;
        _energy_points--;
    } else
        std::cout << "0 left energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hit_points > 0) {
        std::cout << "ClapTrap " + _name + " took " << amount << " damage" << std::endl;
        _hit_points -= amount;
    } else 
        std::cout << "ClapTrap " + _name + " is dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energy_points > 0) {
        std::cout << "ClapTrap " + _name + " repaired " << amount << " energy points" << std::endl;
        _hit_points += amount;
        _energy_points--;
    } else 
        std::cout << "0 left energy points" << std::endl;
}

void ClapTrap::printData() const {
    std::cout << "Name: " << _name << std::endl;
    std::cout << "Hit Points: " << _hit_points << std::endl;
    std::cout << "Energy Points: " << _energy_points << std::endl;
    std::cout << "Attack Damage: " << _attack_damage << std::endl;
}

std::string ClapTrap::getName() const {
    return _name;
};

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor Called" << std::endl;
}
