#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) : name("") {}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie()
{
	std::cout << name << " has been desteroyed." << std::endl;
}

//setter for name
void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce() const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

