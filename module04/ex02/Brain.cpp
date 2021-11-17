#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain deleted" << std::endl;
}

Brain::Brain(const Brain &copy) {
	*this = copy;
}

Brain &Brain::operator=(const Brain &copy) {
	for (int i = 0; i < 100; i++) {
		ideas[i] = copy.ideas[i];
	}
	return (*this);
}