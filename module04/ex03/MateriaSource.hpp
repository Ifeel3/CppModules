#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    AMateria *mat_[MAX_M];
public:
    MateriaSource(void);
    MateriaSource(const MateriaSource &copy);
    MateriaSource &operator=(const MateriaSource &copy);
    ~MateriaSource();
    void learnMateria(AMateria *copy);
    AMateria *createMateria(std::string const &type);
};

#endif
