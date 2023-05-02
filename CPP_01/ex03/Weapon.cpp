/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:52:15 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 10:17:00 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) {
	this->_type = weapon;
	std::cout << GREEN"Contrusctor "RESET<< weapon << " called" << std::endl;
}

Weapon::Weapon(void) {
	this->_type = "Hands";
	std::cout << GREEN"Contrusctor "RESET << this->_type <<" called" << std::endl;
}

Weapon::Weapon(Weapon const &cpy) : _type(cpy._type){
	return ;
}


Weapon::~Weapon(void) {
	std::cout << RED"Destructor "RESET << this->_type << std::endl;
	return ;
}

std::string	Weapon::getType(void) const {
	return (this->_type);
}

void	Weapon::setType(std::string val) {
	this->_type = val;
}
