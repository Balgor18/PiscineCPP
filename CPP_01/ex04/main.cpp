/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:39:01 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/21 14:57:53 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	sed_buff(std::ofstream &file, std::string last, std::string new_one, std::string buf) {
	size_t	pos;
	size_t	toSkip;

	pos = buf.find(last);
	if (pos == std::string::npos)
	{
		file << buf << "\n";
		return ;
	}
	else
	{
		file << buf.substr(0, pos);
		file << new_one;
		toSkip = pos + last.length();
		sed_buff(file, last, new_one, buf.substr(toSkip));
	}
}

int	main(int argc, char **argv) {

	std::ifstream	file_in;
	std::ofstream	file_out;
	std::string		tmp;
	std::string		last;
	std::string		new_one;

	if (argc != 4)
	{
		std::cout << "Wrong numbers of argument" << std::endl;
		return (1);
	}
	last = argv[2];
	new_one = argv[3];
	file_in.open(argv[1]);
	if (file_in.fail())
	{
		std::cout << "Error openning file_in" << std::endl;
		return (1);
	}
	tmp = argv[1];
	tmp += ".replace";
	file_out.open(tmp.c_str());
	if (file_out.fail())
	{
		file_in.close();
		std::cout << "Error openning file_out" << std::endl;
		return (1);
	}
	tmp.clear();
	while (getline(file_in, tmp))
		sed_buff(file_out, last, new_one, tmp);
	file_in.close();
	file_out.close();
	return 0;
}
