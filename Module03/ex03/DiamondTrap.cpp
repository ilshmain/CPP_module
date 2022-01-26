#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(100, 50, 30, "Noname_clap_name") {
    std::cout << "Сall empty constructor DiamondTrap" << std::endl;
    this->name = ClapTrap::name;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "Сall destructor on object \033[31m" << this->name  << "\033[0m " << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :  ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    this->name = name;
    this->attackDamage = FragTrap::attackDamage;
    this->energyPoints = ScavTrap::energyPoints;
    this->hitpoints = FragTrap::hitpoints;
    std::cout << "(Constructor)DiamondTrap object name \033[32m" << name << " \033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ScavTrap(other) {
    std::cout << "Сall copy constructor (DiamondTrap) " << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    std::cout << "DiamondTrap \033[32m" << this->name << " \033[0m attack  " << target << " causing " << this->attackDamage << " points of damage!"  << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "\033[35m" << this->name << "\033[0m(DiamondTrap) | \033[35m" << ClapTrap::name << "\033[0m(ClapTrap)" << std::endl;;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    std::cout << "Assignment operator called (DiamondTrap) " << std::endl;
    this->name = other.name;
    this->hitpoints = other.hitpoints;
    this->attackDamage = other.attackDamage;
    this->energyPoints = other.energyPoints;
    return *this;
}
