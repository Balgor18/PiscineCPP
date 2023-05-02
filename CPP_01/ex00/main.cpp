/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:00:34 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/16 10:08:20 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	Zombie	grannou = Zombie("grannou");
	Zombie	mlormois = Zombie("mlormois");
	Zombie	rmechety = Zombie();
	grannou.announce();
	mlormois.announce();
	rmechety.announce();
	randomChump("random_stud");

	Zombie	*new_zombie = newZombie("Heap");
	new_zombie->announce();
	delete(new_zombie);
	return (0);
}
