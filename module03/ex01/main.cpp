#include "ScavTrap.hpp"

int main()
{
	ScavTrap kek("CL4P-TP");
	kek.guardGate();
	kek.attack("Skag");
	kek.takeDamage(5);
	kek.beRepaired(5);
	kek.takeDamage(10);
	return 0;
}
