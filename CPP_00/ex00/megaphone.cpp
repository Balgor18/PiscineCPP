#include <iostream>

static void	print_line(char *s)
{
	while (*s)
	{
		if (islower(*s))
			std::cout << (char)toupper(*s);
		else
			std::cout << *s;
		s++;
	}
}

int	main(int ac, char **av)
{
	char	empty[] = "* loud and unbearable feedback noise *";

	if (ac == 1)
		print_line(empty);
	else
	{
		av++;
		while (*av)
		{
			print_line(*av);
			av++;
		}
	}
	std::cout << std::endl;
	return 0;
}
