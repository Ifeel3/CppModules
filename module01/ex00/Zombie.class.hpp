#include <iostream>

class Zombie {
public:
	Zombie(std::string name);
	~Zombie(void);

	void announce(void) const;
	std::string getName(void) const;
private:
	std::string _name;
};

void	randomChump( std::string name );
Zombie* newZombie( std::string name );