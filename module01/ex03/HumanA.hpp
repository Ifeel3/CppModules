#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanA {
public:
	HumanA(const std::string& name, Weapon& weapon);
	~HumanA();
	void attack(void) const;
	const std::string& getName(void) const;
	const std::string& getWeaponType(void) const;

private:
	Weapon& _weapon;
	std::string _name;
};

#endif