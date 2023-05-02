#include "Bureaucrat.hpp"

int		main()
{
	try	{
		Bureaucrat	Stagiaire;
		std::cout << Stagiaire << std::endl;
		Stagiaire.upgrade();
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try	{
		Bureaucrat	Grannou("Grannou", 150);
		std::cout << Grannou << std::endl;
		Grannou.downgrade();
		std::cout << Grannou << std::endl;
		Grannou.upgrade();
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	test("test", 1);
		std::cout << test << std::endl;
		test.upgrade();
		std::cout << test << std::endl;
		test.downgrade();
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	Bureaucrat	me("me", 0);
}
