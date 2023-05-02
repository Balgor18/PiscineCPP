/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:24:43 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/21 09:55:48 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon star_wars = Weapon("Light saber");
	HumanA rayan("Bob", star_wars);// HumanA reference on weapon

	rayan.attack();
	star_wars.setType("Hands");
	rayan.attack();
	Weapon grenade = Weapon("Holy grenade");
	HumanB maxime("Jim");// HumanB pointer on weapon

	maxime.setWeapon(grenade);
	maxime.attack();
	maxime.setWeapon(star_wars);
	maxime.attack();
	star_wars.setType("Hands");
	maxime.attack();
	return (0);
}
