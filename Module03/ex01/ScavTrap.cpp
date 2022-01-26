#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(100, 50, 20, name) {
    std::cout << "(Constructor)ScavTrap object name \033[32m" << name << " \033[0m" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Сall destructor on ScavTrap object \033[31m" << this->name << " \033[0m" << " "  << std::endl;
}

void ScavTrap::attack(const std::string &target)  {
    std::cout << "ScavTrap \033[32m" << this->name << " \033[0m attack  " << target << " causing " << this->attackDamage << " points of damage!"  << std::endl;
}

void ScavTrap::guardGate() {
    std::cout	<<	"ScavTrap " << this->name << " have entered the Gate keeper mode!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other.hitpoints, other.energyPoints, other.attackDamage, other.name) {
    std::cout << "Сall copy constructor (ScavTrap) " << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other){
    std::cout << "Assignment operator called (ScavTrap) " << std::endl;
    this->name = other.name;
    this->hitpoints = other.hitpoints;
    this->attackDamage = other.attackDamage;
    this->energyPoints = other.energyPoints;
    return *this;
}

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20, "Noname"){
}

