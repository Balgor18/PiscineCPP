/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:16:49 by fcatinau          #+#    #+#             */
/*   Updated: 2022/04/19 01:40:29 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Default type"){
	std::cout << GREEN"Constuctor " << RESET"animal called" << std::endl;
	return ;
}

Animal::Animal(std::string type) : type(type){
	std::cout << GREEN"Constuctor " << RESET"animal called" << std::endl;
	return ;
}

Animal::Animal(Animal const &cpy) : type(cpy.type){
	std::cout << GREEN"Copy constructor " << RESET"animal called" << std::endl;
	return ;
}

Animal::~Animal(void) {
	std::cout << RED"Deconstructor " << RESET"animal called" << std::endl;
	return ;
}

std::string	Animal::getType(void) const {
	return (this->type);
}

void	Animal::makeSound(void) const {
	std::cout << "Animal " << this->type << " sound: ..."
	<< std::endl;
}

Animal	&Animal::operator=(Animal const &rhs){
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, Animal const &rhs){
	ostream << rhs.getType() << std::endl;
	return ostream;
}
