/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:00:34 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/15 12:39:33 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie *horde = zombieHorde(5, "What");
	Zombie *horde2 = zombieHorde(15, "if");

	delete [] horde;
	delete [] horde2;
	return (0);
}
