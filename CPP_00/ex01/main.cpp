#include <iostream>
#include <ios>
#include "Phonebook.hpp"
#include <string>

int	main()
{
	Phonebook	list;
	std::string	ret;

	while (true)
	{
		std::cout << "ADD, SEARCH, EXIT" << std::endl << ">>";
		std::getline(std::cin, ret);
		if (ret.compare("ADD") == 0)
			list.addContact();
		else if (ret.compare("SEARCH") == 0)
			list.affSearch();
		if (ret.compare("EXIT") == 0 || std::cin.eof())
			break ;
	}
	return 0;
}
