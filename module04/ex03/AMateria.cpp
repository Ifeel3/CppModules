#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : type_(type) {}

AMateria::AMateria(const AMateria &copy) : type_(copy.type_) {}

AMateria &AMateria::operator=(const AMateria &copy) {
	type_ = copy.type_;
	return (*this);
}

const std::string &AMateria::getType() const {
	return (type_);
}

