#include "HumanB.hpp"

HumanB::~HumanB() {};

void HumanB::attack() {
	std::cout << "HumanB name " << this->name <<std::endl;
	std::cout << "Attacks witth " << this->weapon->getType() <<std::endl;
}

HumanB::HumanB(const std::string &name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon &weapon) {
	HumanB::weapon = &weapon;
}