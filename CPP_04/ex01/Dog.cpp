/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:18:51 by fcatinau          #+#    #+#             */
/*   Updated: 2022/04/20 17:24:50 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << GREEN"Constructor " << RESET"dog called" << std::endl;
	return ;
}

Dog::Dog(Dog const & cpy) : Animal(cpy.type), _brain(new Brain(*cpy._brain)) {
	return ;
}

Dog::~Dog(void) {
	delete this->_brain;
	std::cout << RED"Deconstructor " << RESET"dog called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "Dog " << this->type << " sound: Woof"
	<< std::endl;
}

Dog	&Dog::operator=(Dog const &rhs){
	if (this != &rhs)
	{
		this->Animal::operator=(rhs);
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, Dog const &rhs){
	ostream << "Dog : " << rhs.getType() << std::endl;
	ostream << "Brain : " << rhs.getBrain() << std::endl;
	return ostream;
}

Brain*	Dog::getBrain( void ) const {

	return this->_brain;
}
