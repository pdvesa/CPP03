#include <ScavTrap.hpp>

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "Scav constructor called" << std::endl;
    _hp = 100;
    _energy = 50;
    _damage = 20;
}

ScavTrap::~ScavTrap() {
     std::cout << "Scav destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (_energy == 0 || _hp == 0) {
        std::cout << "No way ScavTrap can function anymore :(" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _damage << " points of damage!" << std::endl;
    --_energy;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is guarding the gate!" << std::endl;
}