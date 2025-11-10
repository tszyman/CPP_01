#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	Weapon club("crude spiked club");

	HumanA andrew("Andrew", club);
	andrew.attack();

	club.setType("even more crude spiked club");
	andrew.attack();

	HumanB bob("Bob");
	bob.attack();
	bob.setWeapon(club);
	bob.attack();

	club.setType("spiked club crude as never");
	bob.attack();

	HumanB bob2("Bob(weaponized)", club);
	bob2.attack();

	return 0;
}