#include <iostream>
#include "Zombie.class.hpp"

int main()
{
	Zombie kek("Shawn");
	Zombie* lol = newZombie("Cheburek");
	lol->announce();
	kek.announce();
	randomChump("Duke");
	delete lol;
	return 0;
}
