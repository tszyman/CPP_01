#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
	int i;

	if (N <= 0)
		return NULL;

	Zombie* horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		std::stringstream ss;
		ss << name << "_" << i;
		horde[i].setName(ss.str());
		i++;
	}
	return horde;
}