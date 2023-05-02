#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main() {
	try	{
		Bureaucrat	Boss( "Dude", 1 );
		Bureaucrat	Stagiaire;
		Form		Name("Press red button", 15, 1);
		std::cout << Boss << std::endl;
		std::cout << Stagiaire << std::endl;
		std::cout << Name << std::endl;
		Stagiaire.signForm(Name);
		Boss.signForm(Name);
		std::cout << Name << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try	{
		Bureaucrat	Stagiaire;
		Form		Name("Test", 149, 1);
		std::cout << Stagiaire << std::endl;
		std::cout << Name << std::endl;
		Stagiaire.signForm(Name);
		Stagiaire.upgrade();
		std::cout << Stagiaire << std::endl;
		Stagiaire.signForm(Name);
		std::cout << Name << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
