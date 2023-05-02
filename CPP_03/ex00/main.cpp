/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:12:20 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/24 22:24:17 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	clap;
	ClapTrap	Minus("Minus");
	ClapTrap	Cortex("Cortex");

	std::cout << "--------------------------------------" << std::endl;
	clap.beRepaired(10);
	clap.attack("You");
	clap.takeDamage(19);

	std::cout << "--------------------------------------" << std::endl;
	Minus.beRepaired(1);
	Minus.attack("clap");
	Minus.takeDamage(12);
	std::cout << "--------------------------------------" << std::endl;
	Cortex.attack("Minus");
	Cortex.beRepaired(3);
	Cortex.takeDamage(12);
	std::cout << "--------------------------------------" << std::endl;
	return 0;
}