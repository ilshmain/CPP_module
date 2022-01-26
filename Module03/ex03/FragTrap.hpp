#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
    FragTrap();
    virtual ~FragTrap();
    FragTrap(std::string name);
    void highFivesGuys();
    FragTrap(const FragTrap &F);
    FragTrap& operator=(const FragTrap &F);
};

#endif
