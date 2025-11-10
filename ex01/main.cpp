#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	int i;
	int N;
	N = 4;
	Zombie* horde = zombieHorde(N, "HordeZombie");
	i = 0; 
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return 0;
}