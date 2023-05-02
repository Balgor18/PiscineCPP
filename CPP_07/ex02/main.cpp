#include <iostream>
#include <cstdlib>
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

static void	test0(void)
{
	Array<int>	a(2);

	std::cout << a << std::endl;
}

static void	test1(void)
{
	Array<short>	a(3);

	std::cout << a << std::endl;
}

static void	test2(void)
{
	Array<long>	a(4);

	std::cout << a << std::endl;
}

static void	test3(void)
{
	Array<double>	a(5);

	std::cout << a << std::endl;
}

static void	test4(void)
{
	Array<std::string>	a(6);

	std::cout << a << std::endl;
}

int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//

	test0();
	test1();
	test2();
	test3();
	test4();
	return 0;
}
