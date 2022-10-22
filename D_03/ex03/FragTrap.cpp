#include "FragTrap.hpp"

FragTrap::FragTrap() {
    _name = "FragTrap";
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
    _name = name;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) {
    *this = obj;
}

FragTrap& FragTrap::operator = (const FragTrap& obj) {
    _name = obj._name;
    _hit_points = obj._hit_points;
    _energy_points = obj._energy_points;
    _attack_damage = obj._attack_damage;
    return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "High fives guys!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}
