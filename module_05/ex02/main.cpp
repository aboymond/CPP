#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(){

	srand((unsigned) time(NULL));
	try
	{
		PresidentialPardonForm stupid = PresidentialPardonForm("Break the boss car");
//		AForm form("B53", 12, 150);
		Bureaucrat quent("quent", 6);
		while (quent.getGrade() > 4){
			quent.incrementation();
			std::cout << quent << std::endl;
			std::cout << stupid << std::endl;
			quent.signForm(stupid);
			quent.executeForm(stupid);
			std::cout << std::endl;
		}

		std::cout << "----------------------------------------------------------" << std::endl;

		RobotomyRequestForm robot = RobotomyRequestForm("CutCut");
		Bureaucrat alex("alex", 40);
		while (alex.getGrade() < 47){
			alex.decrementation();
			std::cout << alex << std::endl;
			std::cout << robot << std::endl;
			alex.signForm(robot);
			alex.executeForm(robot);
			std::cout << std::endl;
		}

		std::cout << "----------------------------------------------------------" << std::endl;

		ShrubberyCreationForm shrubb = ShrubberyCreationForm("Tree");
		Bureaucrat gaby("gaby", 135);
		while (gaby.getGrade() < 139) {
			gaby.decrementation();
			std::cout << gaby << std::endl;
			std::cout << shrubb << std::endl;
			gaby.signForm(shrubb);
			gaby.executeForm(shrubb);
			std::cout << std::endl;
		}

	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;

	}
}
