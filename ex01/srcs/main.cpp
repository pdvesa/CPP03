#include <ScavTrap.hpp>

int main() {
    ScavTrap mrBOT("GEMINI");
    mrBOT.attack("Wild Monke");
    mrBOT.takeDamage(9);
    mrBOT.beRepaired(7);
    mrBOT.takeDamage(100);
}

//add forgor constructors