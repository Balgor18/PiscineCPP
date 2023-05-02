#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int		main() {
	Bureaucrat	indic("Meyer", 120);
	Bureaucrat	capo("Frank Nitti", 40);
	Bureaucrat	godfather("Al Capone", 1);
	Intern		lol;

	std::cout << indic << std::endl;
	std::cout << capo << std::endl;
	std::cout << godfather << std::endl;
	std::cout << std::endl;
	try	{
		Form	*Shrub = lol.makeForm("ShrubberyCreation", "Tree");
		Form	*Robot = lol.makeForm("RobotomyRequest", "Bender");
		Form	*Pardon = lol.makeForm("PresidentialPardon", "Jim Carrey");

		std::cout << *Shrub << std::endl;
		std::cout << *Robot << std::endl;
		std::cout << *Pardon << std::endl;
		std::cout << std::endl;

		indic.signForm(*Shrub);
		indic.executeForm(*Shrub);
		capo.signForm(*Robot);
		capo.executeForm(*Robot);
		godfather.signForm(*Pardon);
		godfather.executeForm(*Pardon);
		std::cout << std::endl;

		delete Shrub;
		delete Robot;
		delete Pardon;
	}
	catch(std::exception & error) {
		std::cout << error.what() << std::endl;
	}
}
