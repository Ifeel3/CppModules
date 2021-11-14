#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap& copy);

	FragTrap& operator=(const FragTrap& copy);
	virtual void highFiveGuys(void);
};
#endif