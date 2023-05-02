#include <iostream>
#include "easyfind.hpp"
#include <list>
#include <vector>

int	main(void) {
	std::list<int>	list;
	std::list<int>::const_iterator ite;

	for (int i = 0; i < 100; i++){
		list.push_back(i);
	}

	try {
		ite = easyfind(list, 42);
		std::cout << *ite << ": " << &*ite << std::endl;
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}

	std::vector<int> vect(42, 100);
	std::vector<int>::const_iterator iter;

	try {
		iter = easyfind(vect, 43);
		std::cout << *iter << ": " << &*iter << std::endl;
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}
