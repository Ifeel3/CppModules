#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanB {
public:
	HumanB(const std::string& name);
	~HumanB();
	void attack(void) const;
	void setWeapon(Weapon& weapon);
	const std::string& getName(void) const;
	const std::string& getWeaponType(void) const;

private:
	Weapon* _weapon;
	std::string _name;
};

#endif