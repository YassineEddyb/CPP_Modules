#include "ScavTrap.hpp"

int main() {
    ScavTrap c("a");

    c.attack("b");
    c.takeDamage(10);
    c.beRepaired(5);
    c.guardGate();
    c.printData();
}