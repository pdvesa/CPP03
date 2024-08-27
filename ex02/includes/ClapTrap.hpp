#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    protected:
        std::string _name;
        unsigned int _hp;
        unsigned int _energy;
        unsigned int _damage;
        ClapTrap(const ClapTrap &src);
        ClapTrap &operator=(const ClapTrap &src);
    public:
        ClapTrap(std::string name);
        ClapTrap();
        ~ClapTrap();
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void printElements(void);
};

#endif