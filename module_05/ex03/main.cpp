#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main() {

	srand((unsigned) time(NULL));
	try {
			Intern RandomIntern3;
			AForm* rrf3;
			rrf3 = RandomIntern3.makeForm("Presidential pardon", "Pardon");
			Bureaucrat gaby("alex", 5);
			gaby.signForm(*rrf3);
			gaby.executeForm(*rrf3);

			Intern RandomIntern2;
			AForm *rrf2;
			rrf2 = RandomIntern2.makeForm("Robotomy request", "Robot");
			Bureaucrat alex("alex", 32);
			alex.signForm(*rrf2);
			alex.executeForm(*rrf2);

			Intern RandomIntern;
			AForm *rrf;
			rrf = RandomIntern.makeForm("Shrubbery creation", "Bender");
			Bureaucrat quent("quent", 6);
			quent.signForm(*rrf);
			quent.executeForm(*rrf);
			std::cout << std::endl;
		}

		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
}

