#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie {

private:
	std::string name;

public:
	Zombie(const std::string &name);
	~Zombie();

	void announce();
};

Zombie*	newZombie( std::string name );
void	randomChump(std::string name);

#endif