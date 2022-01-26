#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"

class DiamondTrap :  virtual public FragTrap,  virtual public ScavTrap{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();

    DiamondTrap(const DiamondTrap &other);
    DiamondTrap &operator=(const DiamondTrap &other);
    void attack(const std::string &target);
    void whoAmI();
};


#endif
