#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
	Animal *cat = new Cat();
	Animal *cat2;

	cat2 = Cat(cat);
}