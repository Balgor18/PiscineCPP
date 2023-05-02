/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:12:20 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/25 23:54:00 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	ClapTrap	clap("Lucie");
	ScavTrap	scav("Jeanne");
	FragTrap	frag("Astrid");
	DiamondTrap	diamond("Gaelle");

	diamond.whoAmI();
	diamond.attack("Jessica");
	std::cout << diamond << std::endl;

	return 0;
}
