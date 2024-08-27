#include <FragTrap.hpp>

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "Frag constructor called" << std::endl;
    _hp = 100;
    _energy = 100;
    _damage = 30;
}

FragTrap::~FragTrap() {
     std::cout << "Frag destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "Requesting the HIGHEST of fives" << std::endl;
}