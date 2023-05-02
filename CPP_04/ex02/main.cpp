/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:32:29 by fcatinau          #+#    #+#             */
/*   Updated: 2022/04/19 01:48:10 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// const AAnimal* meta = new AAnimal();
	// std::cout << meta->getType() << " " << std::endl;
	// meta->makeSound();
	// delete meta;

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	delete j;
	delete i;

	Cat		cat;
	Cat		catcopy = cat;

	std::cout << "cat = " << cat.getBrain() << std::endl; 
	std::cout << "catcopy brain = " << catcopy.getBrain() << std::endl; 
	
	return 0;
}
