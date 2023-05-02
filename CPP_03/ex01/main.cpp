/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:12:20 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/25 16:49:03 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	ClapTrap	ct(std::string("Thierry"));
	// ScavTrap	ct(std::string("Thierry"));
	ScavTrap	st(std::string("Henry"));

	std::cout << ct << std::endl;
	std::cout << st << std::endl;

	st = ScavTrap(std::string("TX"));

	std::cout << st << std::endl;

	st.attack(std::string("Sarah CONNOR"));

	st.guardGate();
	st.guardGate();
	st.guardGate();

	return 0;
}
