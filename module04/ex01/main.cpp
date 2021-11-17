#include "Cat.hpp"
#include "Dog.hpp"
#define AMOUNT 4
int main(void) {
	Animal *animals[AMOUNT];

	for (int i = 0; i < AMOUNT; i++) {
		if (i < AMOUNT / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	std::cout << std::endl;
	for (int i = 0; i < AMOUNT; i++)
		delete animals[i];
}