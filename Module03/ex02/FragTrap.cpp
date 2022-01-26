#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 30, "Noname") {
    std::cout << "Сall empty constructor FragTrap" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(100, 100, 30, name) {
    std::cout << "(Constructor) FragTrap object name \033[32m" << name  << " \033[0m" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "Сall destructor on FragTrap object \033[31m" << this->name << " \033[0m"  << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "High five!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other.hitpoints, other.attackDamage, other.energyPoints, other.name){
    std::cout << "Сall copy constructor (FragTrap) " << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    std::cout << "Assignment operator called (FragTrap) " << std::endl;
    this->name = other.name;
    this->hitpoints = other.hitpoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return *this;
}
