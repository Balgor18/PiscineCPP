/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:55:50 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 13:57:20 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30), FragTrap(name), ScavTrap(name), _name(name){
	std::cout << GREEN"DiamondTrap " << RESET"Constructor called" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << RED"DiamondTrap " << RESET"Destructor called" << std::endl;
	return ;
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "ClapTrap name " << this->ClapTrap::_name
	<< " DiamondTrap name : " << this->_name << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs) {
	if (this != &rhs) {
		this->ScavTrap::operator=(rhs);
		this->FragTrap::operator=(rhs);
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, DiamondTrap const &cpy) {
	ostream << "DiamondTrap:" << std::endl << "name : " << cpy.getName() << std::endl;
	ostream << "hit : " << cpy.getHit() << std::endl << "energy : " << cpy.getEnergy() << std::endl;
	ostream << "attack : " << cpy.getAttack() << std::endl;
	return ostream;
}
