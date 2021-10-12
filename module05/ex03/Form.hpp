#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_indication;
	int const			_gradeToSign;
	int const			_gradeToExecute;
public:
	Form();
	Form(std::string const name, int const gradeToSign, 
		int const gradeToExecute);
	Form(const Form & form);
	virtual ~Form();

	Form & operator=(const Form & form);

	std::string	const	getName() const;
	bool		getIndication() const;
	int			getGradeToSign() const;
	int			getGardeToExecute() const;

	virtual void execute(Bureaucrat const & executor) const = 0;

	void	beSigned(Bureaucrat & b);

	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	class FormNotSigned : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};

std::ostream& operator<< (std::ostream &out, const Form &form);