
#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
class Form;
#include "Bureaucrat.hpp"


class AForm {
private:
	const std::string	_name;
	bool				_sign;
	const int 			_re_sign;
	const int			_re_exe;
protected:

public:
	AForm();
	AForm(std::string name, int re_sign, int re_exe);
	AForm(const AForm &cpy);
	AForm &operator=(AForm const &rhs);
	~AForm();

	class 	GradeTooHighException : public std::exception{
	public :
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception {
	public :
		virtual const char *what() const throw();
	};
	virtual void executeForm()  = 0;
	void		beSigned(const Bureaucrat &bureaucrat);
	int			getGradeRe_sign() const;
	int			getGradeRe_exe() const;
	std::string	getName() const;
};

	std::ostream & operator<<( std::ostream & o, AForm const & rhs );


#endif