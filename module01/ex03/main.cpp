#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	Weapon club("Spiked club");
	HumanA josh("Josh", club);
	josh.attack();
	club.setType("Other weapon");
	josh.attack();
	Weapon spike("Simple spike");
	HumanB sam("Sam");
	sam.setWeapon(spike);
	sam.attack();
	spike.setType("Other weapon");
	sam.attack();
}