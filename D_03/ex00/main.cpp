#include "ClapTrap.hpp"

int main() {
    ClapTrap c("a");

    c.attack("b");
    c.takeDamage(10);
    c.beRepaired(5);
    c.printData();
}