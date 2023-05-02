/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:18:51 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 12:27:04 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	this->type = "Dog";
	std::cout << GREEN"Constructor " << RESET"dog called" << std::endl;
	return ;
}

Dog::Dog(Dog const & cpy) : Animal(cpy.type) {
	return ;
}

Dog::~Dog(void) {
	std::cout << RED"Deconstructor " << RESET"dog called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "Dog " << this->type << " sound: Woof"
	<< std::endl;
}

Dog	&Dog::operator=(Dog const &rhs){
	if (this != &rhs)
		this->Animal::operator=(rhs);
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, Dog const &rhs){
	ostream << "Dog : " << rhs.getType() << std::endl;
	return ostream;
}
