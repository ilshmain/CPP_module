#include "Zombie.hpp"
#define SIZE 10

int main(void) {
	Zombie *zombie = zombieHorde(SIZE, "Erik");

	for (int i = 0; i < SIZE; i++) {
		zombie[i].announce();
	}

	delete[] zombie;
	return (0);
}