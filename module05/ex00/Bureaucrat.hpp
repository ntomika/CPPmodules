#pragma once

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(const Bureaucrat &cp);
	~Bureaucrat();

	Bureaucrat & operator=(const Bureaucrat & cp);

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	std::string getName() const;
	int			getGrade() const;

	void	incrementGrade();
	void	decrementGrade();
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat &b);