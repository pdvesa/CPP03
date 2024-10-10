#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <ClapTrap.hpp>

class FragTrap : public ClapTrap {
    public:
        FragTrap(const std::string &name);
        ~FragTrap();
        FragTrap(const FragTrap &src);
        FragTrap &operator=(const FragTrap &src);
        void highFivesGuys(void);
};

#endif