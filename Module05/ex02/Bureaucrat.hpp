#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {
private:
	const std::string name_;
	int grade_;
	int operator++(int n);
	int operator--(int n);

public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& copy);

	Bureaucrat& operator=(const Bureaucrat& copy);
	std::string getName(void) const;
	int getGrade(void) const;
	void increaseGrade(void);
	void decreaseGrade(void);
	void signForm(Form& form);
	void executeForm(const Form& form);

	class GradeTooHighException : std::exception {
	public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();
	};

	class GradeTooLowException : std::exception {
	public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif