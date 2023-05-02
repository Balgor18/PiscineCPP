/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:51:23 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 12:01:25 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Claptrap"), _hit(10), _energy(10), _attack(0){
	std::cout << GREEN"Default" << RESET" constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0){
	std::cout << GREEN"Constructor " << RESET"called for " << name << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & cpy) : _name(cpy._name), _hit(cpy._hit), _energy(cpy._energy), _attack(cpy._attack){
	return ;
}

ClapTrap::~ClapTrap(void) {
	std::cout << RED"Destructor" << RESET" called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string &target) {
	if (--this->_energy == 0)
		return ;
	std::cout << "ClapTrap "CYAN << this->_name << RESET" attacks "
	<< target << ", causing " << this->_attack << " points of damage" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (--this->_energy == 0)
		return ;
	std::cout << CYAN << this->_name << RESET" repairs " << amount << " hit points" << std::endl;
	this->_hit += amount;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << CYAN << this->_name << RESET" take " << amount << " damage" << std::endl;
	this->_hit -= amount;
	if (this->_hit <= 0)
		std::cout << CYAN << this->_name << RESET" is dead" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hit = rhs._hit;
		this->_energy = rhs._energy;
		this->_attack = rhs._attack;
	}
	return *this;
}
