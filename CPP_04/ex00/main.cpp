/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:32:29 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/28 13:58:21 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound(); //will output the cat sound!
	delete meta;
	delete j;
	delete i;

	const WrongAnimal* Wa = new WrongAnimal();
	const WrongAnimal* Wb = new WrongCat();

	std::cout << Wa->getType() << " " << std::endl;
	std::cout << Wb->getType() << " " << std::endl;
	Wa->makeSound();
	Wb->makeSound();

	delete Wa;
	delete Wb;

	return 0;
}
