#include <cstdlib>
#include <deque>
#include <iostream>
#include <list>
#include <vector>
#include "MutantStack.hpp"

int main(void) {
	MutantStack<int>			mut;
	std::list<int>				lst;
	MutantStack<int>::iterator	iter0;
	int							i;

	for (i = 0 ; i < 10 ; ++i)
	{
		mut.push(i);
		lst.push_back(i);
	}
	iter0 = mut.begin();
	std::cout << "mut {";
	while (iter0 != mut.end())
	{
		std::cout << *iter0;
		if (++iter0 != mut.end())
			std::cout << ", ";
	}
	std::cout << "}" << std::endl;
	return (0);
}