#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap kek("CL4P-TP");
	kek.whoAmI();
	kek.attack("Skag");
	kek.takeDamage(5);
	kek.beRepaired(5);
	kek.takeDamage(10);
	return 0;
}
