/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:12:20 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/25 17:46:03 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	ClapTrap	eno("Enora");
	ScavTrap	fl("Florian");
	FragTrap	frag("Rayan");

	std::cout << eno << std::endl;
	std::cout << fl << std::endl;
	std::cout << frag << std::endl;

	frag = FragTrap("Maxime");

	std::cout << frag << std::endl;

	frag.highFivesGuys();

	return 0;
}
