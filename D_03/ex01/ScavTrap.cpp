#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    _name = "ScavTrap";
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    _name = name;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) {
    *this = obj;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& obj) {
    _name = obj._name;
    _hit_points = obj._hit_points;
    _energy_points = obj._energy_points;
    _attack_damage = obj._attack_damage;
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (_energy_points > 0) {
        std::cout << "ScavTrap " + _name + " attack " + target + " cousing " << _attack_damage << " points" << std::endl;
        _energy_points--;
    } else
        std::cout << "0 left energy points" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}
