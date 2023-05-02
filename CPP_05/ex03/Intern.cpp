/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 03:14:06 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/04 05:18:24 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	_Form[0] = new ShrubberyCreationForm();
	_Form[1] = new RobotomyRequestForm();
	_Form[2] = new PresidentialPardonForm();
}

Intern::Intern( const Intern & src ) {
	for (int i = 0 ; i < 3 ; i++ )
		this->_Form[i] = src._Form[i];
}

Intern::~Intern() {
	for (int i = 0; i < 3; i++) {
		delete _Form[i];
	}
}

Intern &	Intern::operator=( Intern const & rhs ) {

	if (this != &rhs) {

		for (int i = 0; i < 3; i++) {

			delete _Form[i];
			this->_Form[i] = rhs._Form[i];
		}
	}
	return *this;
}

Form *Intern::makeForm( std::string name, std::string target)
{
	for (int i(0); i < 3; i++) {

		if (name == this->_Form[i]->getName()) {
			Form * clone = this->_Form[i]->dupForm(target);
			std::cout << "Intern creates " << *clone << std::endl;
			return clone;
		}
	}
	throw InvalidNameException();
}
