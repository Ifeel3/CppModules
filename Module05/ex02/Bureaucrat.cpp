#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name), grade_(grade) {
	try {
		if (grade_ > 150)
			throw GradeTooLowException();
		else if (grade_ < 1)
			throw GradeTooHighException();
		std::cout << *this << " created" << std::endl;
	}
	catch (GradeTooHighException& e) {
		grade_ = 1;
		std::cout << *this << "is too high" << std::endl;
	}
	catch (GradeTooLowException& e) {
		grade_ = 150;
		std::cout << *this << "is too low" << std::endl;
	}
}

Bureaucrat::~Bureaucrat() {
	std::cout << *this <<  " deleted" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name_(copy.name_), grade_(copy.grade_) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy) {
	grade_ = copy.grade_;
	return (*this);
}

int Bureaucrat::getGrade() const {
	return (grade_);
}

std::string Bureaucrat::getName() const {
	return (name_);
}

int Bureaucrat::operator++(int) {
	int temp = grade_;
	if (grade_ == 1)
		throw GradeTooHighException();
	else
		grade_--;
	return (temp);
}

int Bureaucrat::operator--(int) {
	int temp = grade_;
	if (grade_ == 150)
		throw GradeTooLowException();
	else
		grade_++;
	return (temp);
}

void Bureaucrat::increaseGrade() {
	try {
		(*this)++;
	}
	catch (GradeTooHighException & e){
		std::cout << *this << " is too high" << std::endl;
	}
}

void Bureaucrat::decreaseGrade() {
	try {
		(*this)--;
	}
	catch (GradeTooLowException & e) {
		std::cout << *this << " is too low" << std::endl;
	}
}

void Bureaucrat::signForm(Form &form) {
	form.beSigned(*this);
}

void Bureaucrat::executeForm(const Form &form) {
	form.execute(*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (os);
}

Bureaucrat::GradeTooHighException::GradeTooHighException() : std::exception() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException() : std::exception() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}