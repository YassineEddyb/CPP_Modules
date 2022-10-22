#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    _name = "DiamondTrap";
    ClapTrap::_name = _name + "_clap_name";
    _hit_points = ClapTrap::_hit_points;
    _energy_points = ScavTrap::_energy_points;
    _attack_damage = FragTrap::_attack_damage;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
    _name = name;
    ClapTrap::_name = name + "_clap_name";
    _hit_points = FragTrap::_hit_points;
    _energy_points = ScavTrap::_energy_points;
    _attack_damage = FragTrap::_attack_damage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) {
    *this = obj;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& obj)
{
    _name = obj._name;
    _hit_points = obj._hit_points;
    _energy_points = obj._energy_points;
    _attack_damage = obj._attack_damage;
    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "my name is: "<< _name <<" and my granpa's name is : "<< ClapTrap::_name << std::endl;
};

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}
