#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("CL4P-TP");
	clap.attack("Skag Pup");
	clap.takeDamage(5);
	clap.beRepaired(5);
	clap.takeDamage(11);
	clap.beRepaired(5);
	return 0;
}
