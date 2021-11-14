#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

protected:
	std::string name_;
	unsigned int hitpoints_;
	unsigned int energypoints_;
	unsigned int attackdamage_;

public:
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(ClapTrap& copy);

	ClapTrap& operator=(const ClapTrap& copy);
	void attack(const std::string& target) const;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif