#ifndef INTERN_HPP
# define INTERN_HPP
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
private:
	std::string forms_[3];
public:
	Intern(void);
	~Intern(void);
	Intern(const Intern& copy);

	Intern& operator=(const Intern& copy);
	Form* makeForm(const std::string& form, std::string target);

	class WrongForm : std::exception {
	public:
		WrongForm();
		virtual ~WrongForm() throw ();
	};
};

#endif