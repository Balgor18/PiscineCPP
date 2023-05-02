/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:21:41 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/15 14:41:36 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main(void) {
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "--------------------Address------------------" << std::endl;
	std::cout << std::setw(10) << "brain " << &brain << std::endl;
	std::cout << std::setw(10) << "stringPTR " << stringPTR << std::endl;
	std::cout << std::setw(10) << "stringREF " << &stringREF << std::endl;

	std::cout << "---------------------Value-------------------" << std::endl;
	std::cout << std::setw(10) << "brain " << brain << std::endl;
	std::cout << std::setw(10) << "stringPTR " << *stringPTR << std::endl;
	std::cout << std::setw(10) << "stringREF " << stringREF << std::endl;

	*stringPTR = "We change the value";

	std::cout << "---------------------Value-------------------" << std::endl;
	std::cout << std::setw(10) << "brain " << brain << std::endl;
	std::cout << std::setw(10) << "stringPTR " << *stringPTR << std::endl;
	std::cout << std::setw(10) << "stringREF " << stringREF << std::endl;
	return 0;
}
