
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <exception>
class Bureaucrat;
#include "Form.hpp"


class Bureaucrat {
private:
	const std::string _name ;
	int 		_grade;
	bool		_inc_dec;
protected:

public:
	Bureaucrat();
	Bureaucrat(std::string const & name, int grade);
	Bureaucrat(const Bureaucrat &cpy);
	Bureaucrat &operator=(Bureaucrat const &rhs);
	~Bureaucrat();

class 	GradeTooHighException : public std::exception{
public :
	virtual const char* what() const throw();
};

class	GradeTooLowException : public std::exception{
public :
	virtual const char* what() const throw();
};

	int 			getGrade() const;
	std::string		getName() const;
	bool			getInc_Dec() const;
	void			incrementation();
	void			decrementation();
	void			signForm(AForm &form);
	void			executeForm(AForm const & form);
};
	std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs );


#endif
