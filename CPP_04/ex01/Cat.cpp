/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:55:17 by fcatinau          #+#    #+#             */
/*   Updated: 2022/04/20 17:24:47 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << GREEN"Constructor " << RESET"cat called" << std::endl;
	return ;
}

Cat::Cat(Cat const & cpy) : Animal(cpy.type), _brain(new Brain(*cpy._brain)){
	return ;
}

Cat::~Cat(void) {
	delete this->_brain;
	std::cout << RED"Deconstructor " << RESET"cat called" << std::endl;
	return ;
}

void	Cat::makeSound(void) const {
	std::cout << "Cat " << this->type << " sound: meow"
	<< std::endl;
}

Cat	&Cat::operator=(Cat const &rhs){
	if (this != &rhs)
	{
		this->Animal::operator=(rhs);
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, Cat const &rhs){
	ostream << "Cat : " << rhs.getType() << std::endl;
	ostream << "Brain : " << rhs.getBrain() << std::endl;
	return ostream;
}

Brain*	Cat::getBrain( void ) const {

	return this->_brain;
}
