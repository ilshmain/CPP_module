#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : name(name), hitpoints(10), energyPoints(10), attackDamage(0) {
    std::cout   << "Object name \033[32m"
                << name << "\033[0m ClapTrap constructor called"
                <<std::endl;
}

void ClapTrap::attack(const std::string &target) {

    if (this->energyPoints > 0) {
        std::cout   << "ClapTrap \033[32m" << this->name
                    << "\033[0m  attack  \033[31m" << target
                    << "\033[0m causing " << this->attackDamage
                    << " points of damage!"  << std::endl;
        this->energyPoints -= 1;
    } else {
        std::cout << "Energy point = 0!!! " << std::endl;
    }
}

void ClapTrap::clapTrapStatusLive(std::string message) {
    std::cout << "ClapTrap \033[31m" << this->name << "\033[0m" << message << std::endl;
}

void ClapTrap::clapTrapStatusPoint(std::string message) {
    std::cout << "ClapTrap \033[32m" << this->name << "\033[0m " << message << this->hitpoints  << " !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->hitpoints <= 0){
        clapTrapStatusLive("is already dead!");
        return;
    }

    this->hitpoints -= amount;
    this->hitpoints <= 0 ? clapTrapStatusLive(" is dead!") : clapTrapStatusPoint("life left ");
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->hitpoints <= 0){
        clapTrapStatusLive(" is already dead!");
        std::cout << "It can't be revived" << std::endl;
        return;
    } else {
        if (this->energyPoints > 0) {
            std::cout << this->name << " restored " << amount  << " hitpoints!"<< std::endl;
            this->hitpoints += amount;
            std::cout << "Current state of health " << this->name << " " << this->hitpoints << std::endl;
            this->energyPoints -= 1;
        } else
            std::cout << "Energy point = 0!!! " << std::endl;
    }
}

ClapTrap::~ClapTrap() {
    std::cout << "Сall destructor on object \033[31m" << this->name  << "\033[0m " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name),
                                            hitpoints(other.hitpoints),
                                            energyPoints(other.hitpoints),
                                            attackDamage(other.attackDamage)
{
    std::cout << "Сall copy constructor " << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    this->name = other.name;
    this->attackDamage = other.attackDamage;
    this->hitpoints = other.hitpoints;
    this->energyPoints = other.energyPoints;

    std::cout << "Assignment operator called " << std::endl;
    return *this;
}
