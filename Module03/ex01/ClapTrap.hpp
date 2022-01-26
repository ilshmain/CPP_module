#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>


class ClapTrap {
protected:
    ClapTrap(int m_hitpoints, int m_energyPoints, int m_attackDamage, std::string m_name);
    std::string name;
    int hitpoints;
    int energyPoints;
    int attackDamage;

public:
    ClapTrap();
    ClapTrap(const std::string &name);
    virtual ~ClapTrap();

    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);

    virtual void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void clapTrapStatusLive(std::string message);
    void clapTrapStatusPoint(std::string message);
};


#endif
