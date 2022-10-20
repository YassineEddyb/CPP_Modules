#include "FragTrap.hpp"

int main() {
    FragTrap c("a");

    c.attack("b");
    c.takeDamage(10);
    c.beRepaired(5);
    c.highFivesGuys();
    c.printData();
}