#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string name_;
	const int gradeToSign_;
	const int gradeToExecute_;
	bool itSigned_;

public:
	Form(std::string name, int gradeToSign, int gradeToExecute);
	~Form();
	Form(const Form& copy);

	Form& operator=(const Form& copy);
	std::string getName(void) const;
	int getSignGrade(void) const;
	int getExecuteGrade(void) const;
	void beSigned(const Bureaucrat& signer);

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

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif