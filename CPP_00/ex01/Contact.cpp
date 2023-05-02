#include <iostream>
#include "Contact.hpp"
#include <iomanip>

// Contact::Contact (std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret)
// : _first_name(first_name), _last_name(last_name), _nickname(nickname), _phone_number(phone), _dark_secret(secret) {
// 	std::cout << "Constructor called" << std::endl;
// 	return ;
// }

Contact::Contact(void)
{
	std::cout << "Contact constructor called" << std::endl;
	return ;
}

Contact::~Contact (void){
	std::cout << "Contact destructor called" << std::endl;
	return ;
}

void	Contact::setFirst_name(std::string str)
{
	this->_first_name = str;
	return ;
}

void	Contact::setLast_name(std::string str)
{
	this->_last_name = str;
	return ;
}

void	Contact::setNickname(std::string str)
{
	this->_nickname = str;
	return ;
}

void	Contact::setPhone(std::string str)
{
	this->_phone_number = str;
	return ;
}

void	Contact::setDark_secret(std::string str)
{
	this->_dark_secret = str;
	return ;
}

//use resize
void	Contact::affContact(int index) const {
	std::string	tmp;

	std::cout << std::setw(10) << index << "|" ;

	tmp = this->_first_name;
	if (tmp.length() >= 10)
	{
		tmp.resize(9);
		tmp.resize(10, '.');
	}
	std::cout << std::setw(10) << tmp << "|";
	tmp = this->_last_name;
	if (tmp.length() >= 10)
	{
		tmp.resize(9);
		tmp.resize(10, '.');
	}
	std::cout << std::setw(10) << tmp << "|";
	tmp = this->_nickname;
	if (tmp.length() >= 10)
	{
		tmp.resize(9);
		tmp.resize(10, '.');
	}
	std::cout << std::setw(10) << tmp << "|";
	std::cout << std::endl;
}

void	Contact::aff_one_contact (void) const {
	std::cout << "Name : " << this->_first_name << std::endl;
	std::cout << "Last name : " << this->_last_name << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Phone number : " << this->_phone_number << std::endl;
	std::cout << "Darkest secret : " << this->_dark_secret << std::endl;
}
