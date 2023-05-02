/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:13:37 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 10:13:37 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	std::cout << GREEN"Constructor "RESET << name << "called" << std::endl;
	return ;
}

HumanA::HumanA(HumanA const &cpy) : _name(cpy._name), _weapon(cpy._weapon){
	return ;
}

HumanA::~HumanA()
{
	std::cout << RED"Destructor "RESET << this->_name << "called" << std::endl;
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType();
	std::cout << std::endl;
}
