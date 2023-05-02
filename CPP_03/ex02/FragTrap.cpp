/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:30:59 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 11:49:49 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap",100,100,30) {
	std::cout << GREEN"Default" << RESET" fragtrap constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << GREEN << name << RESET" fragtrap constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &cpy) : ClapTrap(cpy._name, cpy._hit, cpy._energy, cpy._attack) {
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << RED << "Destructor fragtrap" << RESET" called" << std::endl;
}

void	FragTrap::highFivesGuys(void) const {
	std::cout << "FragTrap " << this->_name << " do a High Five ! " << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs){
	if (this != &rhs)
		this->ClapTrap::operator=(rhs);
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, FragTrap const &scav) {
	ostream << "FragTrap:" << std::endl << "name : " << scav.getName() << std::endl << "hit : " << scav.getHit() << std::endl;
	ostream << "energy : " << scav.getEnergy() << std::endl << "attack : " << scav.getAttack() << std::endl;
	return ostream;
}
