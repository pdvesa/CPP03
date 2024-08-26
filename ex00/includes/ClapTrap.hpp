#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    private:
        std::string _name;
        unsigned int _hp;
        unsigned int _energy;
        unsigned int _damage;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif