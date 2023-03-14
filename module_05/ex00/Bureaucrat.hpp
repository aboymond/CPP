
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>


class Bureaucrat {
private:
	std::string _name const;
	int 		_grade;
protected:

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat &cpy);
	Bureaucrat &operator=(Bureaucrat const &rhs);
	~Bureaucrat();

class 	GradeTooHighExeption() : public std::Exeption{
public :
	virtual const char* what() const throw()
};

class	GradeTooLowExeption() : public std::Exeption{
public :
	virtual const char* what() const throw()
};

	int 			getGrade() const;
	std::string		getName() const;
};


#endif
