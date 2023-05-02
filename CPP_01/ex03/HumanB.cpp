/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:13:49 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/21 14:56:50 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << GREEN"Constructor "RESET << name << "called" << std::endl;
	return ;
}

HumanB::HumanB(HumanB const &cpy) : _name(cpy._name), _weapon(cpy._weapon){
	return ;
}

HumanB::~HumanB()
{
	std::cout << RED"Destructor "RESET << this->_name << "called" << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " has no weapon" << std::endl;
	else
	{
		std::cout << this->_name << " attacks with his ";
		std::cout << (this->_weapon)->getType() << std::endl;
	}
}
