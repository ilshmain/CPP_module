#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>


class ClapTrap {
private:
    std::string name;
    int hitpoints;
    int energyPoints;
    int attackDamage;

public:
    ClapTrap(const std::string &name);
    virtual ~ClapTrap();

    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);

    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void clapTrapStatusLive(std::string message);
    void clapTrapStatusPoint(std::string message);
};


#endif
