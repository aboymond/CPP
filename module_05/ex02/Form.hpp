
#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
class AForm;
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
	virtual ~AForm();

	class 	GradeTooHighException : public std::exception{
	public :
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception {
	public :
		virtual const char* what() const throw();
	};

	class	ExecutorException : public std::exception {
	public :
		virtual const char* what() const throw();
	};

	
	virtual void	execute(Bureaucrat const &executor) const = 0;
	bool			getSign() const;
	void			beSigned(const Bureaucrat &bureaucrat);
	int				getGradeRe_sign() const;
	int				getGradeRe_exe() const;
	std::string		getName() const;
};

	std::ostream & operator<<( std::ostream & o, AForm const & rhs );


#endif