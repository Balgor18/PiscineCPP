/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:16:49 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 12:46:40 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {
	this->type = "Default type";
	std::cout << GREEN"Constuctor " << RESET"animal called" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string type) : type(type){
	std::cout << GREEN"Constuctor " << RESET"animal called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &src) : type(src.type) {
	return ;
}

AAnimal::~AAnimal(void) {
	std::cout << RED"Deconstructor " << RESET"animal called" << std::endl;
	return ;
}

std::string	AAnimal::getType(void) const {
	return (this->type);
}

void	AAnimal::makeSound(void) const {
	std::cout << "Animal " << this->type << " sound: ..."
	<< std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &rhs) {
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, AAnimal const &rhs)
{
	ostream << "Animal:" << std::endl
	<<"type: " << rhs.getType() << std::endl;
	return ostream;
}
