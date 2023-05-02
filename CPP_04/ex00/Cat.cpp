/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:55:17 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 12:27:18 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->type = "Cat";
	std::cout << GREEN"Constructor " << RESET"cat called" << std::endl;
	return ;
}

Cat::Cat(Cat const & cpy) : Animal(cpy.type) {
	return ;
}

Cat::~Cat(void) {
	std::cout << RED"Deconstructor " << RESET"cat called" << std::endl;
	return ;
}

void	Cat::makeSound(void) const {
	std::cout << "Cat " << this->type << " sound: meow"
	<< std::endl;
}

Cat	&Cat::operator=(Cat const &rhs){
	if (this != &rhs)
		this->Animal::operator=(rhs);
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, Cat const &rhs){
	ostream << "Cat : " << rhs.getType() << std::endl;
	return ostream;
}
