#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    for (int i = 0; i < MAX_M; i++)
		mat_[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	for (int i = 0; i < MAX_M; i++)
		mat_[i] = copy.mat_[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
	for (int i = 0; i < MAX_M; i++) {
		delete mat_[i];
		mat_[i] = copy.mat_[i]->clone();
	}
    return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < MAX_M; i++)
        delete mat_[i];
}

void MateriaSource::learnMateria(AMateria *copy) {
	for (int i = 0; i < MAX_M; i++){
		if (mat_[i] == NULL) {
			mat_[i] = copy;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < MAX_M; i++){
		if (mat_[i]->getType() == type) {
			return (mat_[i]->clone());
		}
	}
	return (NULL);
}
