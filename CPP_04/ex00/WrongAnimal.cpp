/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:32:47 by fcatinau          #+#    #+#             */
/*   Updated: 2022/04/09 06:58:20 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "Default WrongAnimal";
	std::cout << GREEN"Constructor " << RESET"WrongAnimal called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & cpy) : type(cpy.type) {
	return ;
}

WrongAnimal::~WrongAnimal () {
	std::cout << RED"Destructor " << RESET"Wrong Animal called" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const {
	return (this->type);
}

void	WrongAnimal::makeSound(void) const {
	std::cout
	<< "WrongAnimal " << this->type << " : ..." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs){
	if (this != &rhs)
		this->WrongAnimal::operator=(rhs);
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, WrongAnimal const &rhs){
	ostream << "WrongAnimal : " << rhs.getType() << std::endl;
	return ostream;
}
