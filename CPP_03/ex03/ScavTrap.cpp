/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:32:04 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 11:44:18 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap", 100, 50, 20)
{
	std::cout << GREEN"Default" << RESET" ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << GREEN << name << RESET" ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &cpy) : ClapTrap(cpy._name, cpy._hit, cpy._energy, cpy._attack) {
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << RED << "Destructor ScavTrap" << RESET" called" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << this->_name
	<< " enter to Gate mode" << std::endl;
	return ;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " CYAN << this->_name;
	if (--this->_energy <= 0)
		std::cout << RESET" not enought energy" << std::endl;
	std::cout << RESET" attack " << target << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs){
	if (this != &rhs)
		this->ClapTrap::operator=(rhs);
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, ScavTrap const &scav) {
	ostream << "ScavTrap:" << std::endl << "name : " << scav.getName() << std::endl << "hit : " << scav.getHit() << std::endl;
	ostream << "energy : " << scav.getEnergy() << std::endl << "attack : " << scav.getAttack() << std::endl;
	return ostream;
}

