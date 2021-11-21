#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name_(name), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute) {
	if (gradeToSign_ > 150 || gradeToExecute_ > 150)
		throw Form::GradeTooLowException();
	else if (gradeToSign_ < 1 || gradeToExecute_ < 1)
		throw Form::GradeTooHighException();
	itSigned_ = false;
	std::cout << *this << " created" << std::endl;
}

Form::~Form() {
	std::cout << *this << " deleted" << std::endl;
}

Form::Form(const Form &copy) : name_(copy.name_), gradeToSign_(copy.gradeToSign_), gradeToExecute_(copy.gradeToExecute_), itSigned_(copy.itSigned_) {}

Form& Form::operator=(const Form &copy) {
	itSigned_ = copy.itSigned_;
	return (*this);
}

std::string Form::getName() const {
	return (name_);
}

int Form::getSignGrade() const {
	return (gradeToSign_);
}

int Form::getExecuteGrade() const {
	return (gradeToExecute_);
}

void Form::beSigned(const Bureaucrat &signer) {
	try {
		if (gradeToSign_ < signer.getGrade())
			throw GradeTooHighException();
		else {
			itSigned_ = true;
			std::cout << signer.getName() << " signs " << name_ << std::endl;
		}
	}
	catch (GradeTooHighException& e) {
		std::cout << signer.getName() << " cannot sign " << name_ << " because grade of form too high" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
	os << obj.getName() << ", form signGrade: " << obj.getSignGrade() << ", executeGrade: " << obj.getExecuteGrade();
	return (os);
}

Form::GradeTooHighException::GradeTooHighException() : std::exception() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooLowException::GradeTooLowException() : std::exception() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}