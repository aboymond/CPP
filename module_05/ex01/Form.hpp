
#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
class Form;
#include "Bureaucrat.hpp"


class Form {
private:
	const std::string	_name;
	bool				_sign;
	const int 			_re_sign;
	const int			_re_exe;
protected:

public:
	Form();
	Form(std::string name, int re_sign, int re_exe);
	Form(const Form &cpy);
	Form &operator=(Form const &rhs);
	~Form();

	class 	GradeTooHighException : public std::exception{
	public :
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception {
	public :
		virtual const char *what() const throw();
	};

	void		beSigned(const Bureaucrat &bureaucrat);
	int			getGradeRe_sign() const;
	int			getGradeRe_exe() const;
	std::string	getName() const;
};

	std::ostream & operator<<( std::ostream & o, Form const & rhs );


#endif
