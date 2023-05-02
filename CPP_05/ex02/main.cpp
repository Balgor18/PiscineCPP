#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int		main() {
	Bureaucrat		indic("Meyer", 120);
	Bureaucrat		capo("Frank Nitti", 40);
	Bureaucrat		godfather("Al Capone", 1);

	std::cout << indic << std::endl;
	std::cout << capo << std::endl;
	std::cout << godfather << std::endl;
	std::cout << std::endl;
	try	{
		Form	*Shrub = new ShrubberyCreationForm("happyTree");
		Form	*Robot = new RobotomyRequestForm("Dirk Gently");
		Form	*Pardon = new PresidentialPardonForm("Jim Carrey");
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

	try	{
		Form	*Robot_2 = new RobotomyRequestForm("Arthur Dent");
		Form	*Pardon_2 = new PresidentialPardonForm("Daffy duck");
		std::cout << *Robot_2 << std::endl;
		std::cout << *Pardon_2 << std::endl;
		std::cout << std::endl;

		indic.signForm(*Robot_2);
		capo.signForm(*Robot_2);
		indic.executeForm(*Robot_2);
		godfather.executeForm(*Pardon_2);
		std::cout << std::endl;

		delete Robot_2;
		delete Pardon_2;
	}
	catch (std::exception & error) {

		std::cout << error.what() << std::endl;
	}
}
