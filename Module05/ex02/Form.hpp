#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
protected:
	const std::string name_;
	const int gradeToSign_;
	const int gradeToExecute_;
	bool itSigned_;

public:
	Form(std::string name, int gradeToSign, int gradeToExecute);
	virtual ~Form();
	Form(const Form& copy);

	Form& operator=(const Form& copy);
	std::string getName(void) const;
	int getSignGrade(void) const;
	int getExecuteGrade(void) const;
	void beSigned(const Bureaucrat& signer);
	void execute(Bureaucrat const & executor) const;
	virtual void exec(void) const = 0;

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

	class NotSigned : std::exception {
	public:
		NotSigned();
		virtual ~NotSigned() throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif