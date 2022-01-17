#include <iostream>
#include "Zombie.hpp"

int main() {

	Zombie *zombie = newZombie("Orion");

	randomChump("Postmy");
	zombie->announce();
	delete zombie;
	return (0);
}