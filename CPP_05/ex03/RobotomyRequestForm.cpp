/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:14:30 by fcatinau          #+#    #+#             */
/*   Updated: 2022/03/04 05:23:27 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequest", 72, 45), _target("Default"){
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45), _target(target){
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("RobotomyRequest", 72, 45), _target(src._target){
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs){
	if ( this != &rhs ) {

		this->_target = rhs._target;
		setSign(rhs.getIs_signed());
	}
	return *this;
}

void	RobotomyRequestForm::executeForm( void ) const {

	srand(time(NULL));
	int		i(rand());

	std::cout << "Wwwwwwrrrrrrrrrrrrwwwwwww Wwwwwwrrrrrrrrrrrrrrwwww " ;
	if ( i % 2 )
		std::cout << this->_target << " got robotomize" << std::endl;
	else
		std::cout << this->_target << " robotomy fail" << std::endl;

}

Form *RobotomyRequestForm::dupForm( std::string target ) {
	Form *	clone = new RobotomyRequestForm(target);
	return clone;
}
