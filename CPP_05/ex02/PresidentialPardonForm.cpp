/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:50:20 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/04 01:16:55 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardon", 25, 5), _target("Default"){
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :  Form("PresidentialPardon", 25, 5), _target(target){
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form("PresidentialPardon", 25, 5), _target(src._target){
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {
	if ( this != &rhs ) {

		this->_target = rhs._target;
		setSign(rhs.getIs_signed());
	}
	return *this;
}

void	PresidentialPardonForm::executeForm( void ) const {
	std::cout << this->_target << " has been pardon by Zafod Beeblebrox." << std::endl;
}
