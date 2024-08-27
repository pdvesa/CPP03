#include <FragTrap.hpp>

int main() {
    FragTrap mrBOT("AGENT 47");
    mrBOT.attack("RANDOM NPC");
    mrBOT.takeDamage(9);
    mrBOT.beRepaired(7);
    mrBOT.takeDamage(100);
    mrBOT.printElements();
}

//add forgor constructors