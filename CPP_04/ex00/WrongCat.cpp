/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:40:53 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 12:28:56 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat (void) {
	this->type = "WrongCat";
	std::cout << GREEN"Constructor " << RESET"wrong cat called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & cpy) {
	this->type = cpy.type;
	return ;
}

WrongCat::~WrongCat (void) {
	std::cout << RED"Destructor " << RESET"wrong cat called" << std::endl;
	return ;
}

void	WrongCat::makeSound(void) const {
	std::cout
	<< "WrongCat "
	<< this->type
	<< " Meow"
	<< std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs){
	if (this != &rhs)
		this->WrongAnimal::operator=(rhs);
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, WrongCat const &rhs){
	ostream << "WrongAnimal : " << rhs.getType() << std::endl;
	return ostream;
}
