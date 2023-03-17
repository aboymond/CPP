
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <exception>


class Bureaucrat {
private:
	const std::string _name ;
	int 		_grade;
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
	void			incrementation();
	void			decrementation();
};
	std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs );


#endif
