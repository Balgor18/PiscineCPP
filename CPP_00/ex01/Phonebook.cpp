#include <iostream>
#include "Phonebook.hpp"
#include <iomanip>
#include <cstdlib>

Phonebook::Phonebook ( void )
{
	std::cout << "Phonebook constructor called" << std::endl;
	this->nb = 0;
	this->index = 0;
	return ;
}

Phonebook::~Phonebook ( void )
{
	std::cout << "Phonebook destructor called" << std::endl;
	return ;
}

bool	is_all_num(std::string str)
{
	const char	*s = str.c_str();
	if (!*s)
		return (false);
	while (*s)
	{
		if (!std::isdigit(*s))
			return false;
		s++;
	}
	return true;
}

// http://www-igm.univ-mlv.fr/~dr/CPP/c++-faq/pointers-to-members.html
bool	Phonebook::add_param(std::string announce, void (Contact::*fct)(std::string), int index, int check_ret)
{
	std::string	ret;

	while (1) {
		std::cout << announce;
		std::getline(std::cin, ret);
		if (check_ret)
			if (!is_all_num(ret))
				return (false);
		if (std::cin.eof())
			return (false);
		if (ret.length() > 0)
		{
			(this->list[index].*fct)(ret);//<-- https://www.codeproject.com/Articles/7150/Member-Function-Pointers-and-the-Fastest-Possible
			break ;
		}
	}
	return (true);
}

void	Phonebook::addContact(void){
	std::string	ret;

	if (this->index == 8)
		this->index = 0;
	if (!add_param("Please enter First name :\n>", &Contact::setFirst_name, index, 0))
		return ;
	if (!add_param("Please enter last name :\n>", &Contact::setLast_name, index, 0))
		return ;
	if (!add_param("Please enter Nickname :\n>", &Contact::setNickname, index, 0))
		return ;
	if (!add_param("Please enter phone number (only_digit):\n>", &Contact::setPhone, index, 1))
		return ;
	if (!add_param("Please enter dark secret :\n>", &Contact::setDark_secret, index, 0))
		return ;
	this->index++;
	if (this->nb != 8)
		this->nb++;
	return ;
}

void	Phonebook::affSearch(void)
{
	std::string	ret;

	if (this->nb == 0){
		std::cout << "Phonebook empty" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < this->nb; i++)
		this->list[i].affContact(i);
	std::cout << "See more details on contact enter his index :" << std::endl;
	std::getline(std::cin, ret);
	if (std::cin.eof() || !is_all_num(ret))
		return ;
	if (atoi(ret.c_str()) > this->nb || atoi(ret.c_str()) < 0) {
		std::cout << "Error index" << std::endl;
		return ;
	}
	this->list[atoi(ret.c_str())].aff_one_contact();
}
