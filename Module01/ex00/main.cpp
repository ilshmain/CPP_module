#include <iostream>
#include "Zombie.hpp"

int main() {

	Zombie *zombie = newZombie("Orion");

	randomChump("Postmy");
	zombie->voice();
	delete zombie;
	return (0);
}