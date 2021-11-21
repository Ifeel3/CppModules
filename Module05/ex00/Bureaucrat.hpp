#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

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