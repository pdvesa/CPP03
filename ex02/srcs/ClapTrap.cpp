#include <ClapTrap.hpp>

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _damage(0) {
    std::cout << "Constructor called once more" << std::endl;
}

ClapTrap::ClapTrap() : _name("We don't know"), _hp(10), _energy(10), _damage(0) {
    std::cout << "Default constructor called once more" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called once more" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (_energy == 0 || _hp == 0) {
        std::cout << "No way ClapTrap can function anymore :(" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _damage << " points of damage!" << std::endl;
    --_energy;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << _name << " takes damage for " << amount << " points!" << std::endl;
    if (amount > _hp) {
        _hp = 0;
        std::cout << "Bot is dead :(" << std::endl;
    }
    else
        _hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energy == 0 || _hp == 0) {
        std::cout << "No way " << _name << " can function anymore :(" << std::endl;
        return ;
    }
    std::cout << _name << " repairs health for " << amount << " points!" << std::endl;
    _hp += amount;
    --_energy;
}

void ClapTrap::printElements(void) {
    std::cout << "Bot name " << _name << " health " << _hp << " energy " << _energy << " damage " << _damage << std::endl;
}