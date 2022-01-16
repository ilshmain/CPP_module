#include "HumanA.hpp"

HumanA::~HumanA() {};
HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {}

void HumanA::attack() {
	std::cout << "HumanA name " << this->name <<std::endl;
	std::cout << "Attacks witth " << weapon.getType() <<std::endl;
}
