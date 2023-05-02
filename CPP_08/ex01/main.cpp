#include "Span.hpp"

void	test(void){
	Span	sp(5);
	int		i;

	for (i = 0 ; i < 5 ; ++i)
		try
		{
			sp.addNumber(i);
		}
		catch (std::exception const &e)
		{
			std::cout << e.what() << std::endl;
		}
	std::cout << sp << std::endl;
}

int main() {
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	test();
	return 0;
}
