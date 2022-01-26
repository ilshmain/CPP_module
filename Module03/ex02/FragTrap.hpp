#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ScavTrap.hpp"

class FragTrap :  public ClapTrap {
private:

public:
    FragTrap();
    virtual ~FragTrap();
    explicit FragTrap(std::string name);
    void highFivesGuys();
    FragTrap(const FragTrap &F);
    FragTrap& operator=(const FragTrap &F);
};

#endif
