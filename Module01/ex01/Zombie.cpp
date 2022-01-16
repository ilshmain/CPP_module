#include "Zombie.hpp"

Zombie::Zombie() {}

void Zombie::setName(const std::string &name) {
	Zombie::name = name;
};

Zombie::Zombie(const std::string &name) : name(name) {
}

Zombie::~Zombie() {
	std::cout << this->name << " zombie died" << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}