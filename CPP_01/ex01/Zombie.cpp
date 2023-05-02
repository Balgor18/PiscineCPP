/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:47:50 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 10:10:32 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (std::string str) : _name(str) {
	std::cout << "Contrusctor " << str << " called" << std::endl;
	return ;
}

Zombie::Zombie (void) {
	_name = "zombie";
	std::cout << "Default contrusctor" << std::endl;
	return ;
}

Zombie::Zombie (Zombie const &cpy) : _name(cpy._name){
	return ;
}

Zombie::~Zombie (void) {
	std::cout << "Destructor "<< this->_name << " called" << std::endl;
	return ;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

