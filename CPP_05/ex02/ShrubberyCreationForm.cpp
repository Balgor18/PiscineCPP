/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:31:53 by fcatinau          #+#    #+#             */
/*   Updated: 2022/04/23 17:29:34 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreation", 145, 137), _target("Default") {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :Form("ShrubberyCreation", 145, 137), _target(target){
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form("ShrubberyCreation", 145, 137), _target(src._target) {
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm & rhs ) {
	if ( this != &rhs ) {

		this->_target = rhs._target;
		setSign(rhs.getIs_signed());
	}
	return *this;
}

void	ShrubberyCreationForm::executeForm( void ) const {

	std::string		name( this->_target + "_shrubbery" );
	std::ofstream	out( name.c_str() );

	out << "     ccee88oo" << std::endl;
	out << "  C8O8O8Q8PoOb o8oo" << std::endl;
	out << " dOB69QO8PdUOpugoO9bD" << std::endl;
	out << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
	out << "    6OuU  /p u gcoUodpP" << std::endl;
	out << "      \\\\//  /douUP" << std::endl;
	out << "        \\\\////" << std::endl;
	out << "         |||/\\" << std::endl;
	out << "         |||\\/" << std::endl;
	out << "         |||||" << std::endl;
	out << "   .....//||||\\...." << std::endl;
}
