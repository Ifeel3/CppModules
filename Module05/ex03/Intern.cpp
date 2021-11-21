#include "Intern.hpp"

Intern::Intern() {
	forms_[0] = "Shrubbery request";
	forms_[1] = "Robotomy request";
	forms_[2] = "Pardon request";
	std::cout << "Intern created" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern deleted" << std::endl;
}

Intern::Intern(const Intern &copy) {
	*this = copy;
}

Intern& Intern::operator=(const Intern &copy) {
	for (int i = 0; i < 3; i++)
		forms_[i] = copy.forms_[i];
	return (*this);
}



Form* Intern::makeForm(const std::string &form, std::string target) {
	Form *temp;
	int i;
	try {
		for (i = 0; i < 3; i++) {
			if (form == forms_[i])
				break;
		}
		switch(i) {
			case 0:
				temp = new ShrubberyCreationForm(target);
				break;
			case 1:
				temp = new RobotomyRequestForm(target);
				break;
			case 2:
				temp = new PresidentialPardonForm(target);
				break;
			default:
				throw WrongForm();
		}
		std::cout << "Intern creates " << temp->getName() << std::endl;
		return (temp);
	}
	catch (WrongForm& e) {
		std::cout << "Intern cannot create form, bad form name" << std::endl;
		return (NULL);
	}
}

Intern::WrongForm::WrongForm() {}

Intern::WrongForm::~WrongForm() throw() {}