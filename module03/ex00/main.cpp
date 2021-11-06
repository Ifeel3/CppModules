#include "ClapTrap.hpp"

int main()
{
	ClapTrap kek("CL4P-TP", 10, 10, 0);
	kek.attack("Skag");
	kek.takeDamage(5);
	kek.beRepaired(5);
	kek.takeDamage(10);
	return 0;
}
