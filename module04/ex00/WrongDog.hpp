#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP
# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {

public:
	WrongDog();
	~WrongDog();
	WrongDog(const WrongDog& copy);

	WrongDog& operator=(const WrongDog& copy);
	void makeSound(void) const;
};

#endif