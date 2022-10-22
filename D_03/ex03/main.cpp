#include "DiamondTrap.hpp"

int main() {
    DiamondTrap b;
    DiamondTrap c("a");
    
    c.attack("b");
    c.takeDamage(10);
    c.beRepaired(5);
    c.highFivesGuys();
    c.guardGate();
    c.whoAmI();
    b.whoAmI();
    c.printData();
}