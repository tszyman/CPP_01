#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce(); // Announce from heap zombie
	randomChump("StackZombie"); // Create and announce from stack zombie, destroyed automatically after function ends
	heapZombie->announce(); // Announce again from heap zombie to show it's still alive
	delete heapZombie;
	return 0;
}