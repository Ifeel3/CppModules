#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

private:
	std::string name_;

public:
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(DiamondTrap& copy);

	DiamondTrap& operator=(const DiamondTrap& copy);
	void whoAmI(void);
};
#endif