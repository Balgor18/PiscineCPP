#include <iostream>

#include "iter.hpp"

void	increment(int &i){
	i++;
	return ;
}

void	increment_char(char &s){
	s++;
}

int	main(void){
	int		i[4] = {0, 1, 2, 3};
	char	str[6] = {"0123\0"};

	std::cout << "Int tab : " << std::endl;
	std::cout << "\t" << i[0] << " " << i[1] << " " << i[2] << " " << i[3] << std::endl;
	::iter(i, 4 , &increment);
	std::cout << "\t" << i[0] << " " << i[1] << " " << i[2] << " " << i[3] << std::endl;
	std::cout << "Str tab : " << std::endl;
	std::cout << "\t" << str << std::endl;
	::iter(str, 6 , &increment_char);
	std::cout << "\t" << str << std::endl;
	return 0;
}
