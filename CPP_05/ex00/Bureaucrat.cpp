/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:13:12 by fcatinau          #+#    #+#             */
/*   Updated: 2022/04/23 17:22:57 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default") , _grade (150){
	return ;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name) , _grade(150) {
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) , _grade(grade) {
	try {
		if (grade > 150)
		throw Bureaucrat::ErrorGrade();
	else if (grade < 1)
		throw Bureaucrat::ErrorGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) : _name(cpy._name), _grade(cpy._grade){
	return ;
}

Bureaucrat::~Bureaucrat(void){
	return ;
}

std::string	Bureaucrat::getName(void) const {
	return this->_name;
}

int	Bureaucrat::getGrade(void) const {
	return this->_grade;
}

void	Bureaucrat::downgrade(void){
	try {
		if (this->_grade + 1 > 150) {
			throw Bureaucrat::GradeTooLowException();
		}
		this->_grade++;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return ;
}

void	Bureaucrat::upgrade(void){
	try {
		if (this->_grade - 1 < 1) {
			throw Bureaucrat::GradeTooHighException();
		}
		this->_grade--;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs){
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &ostream, Bureaucrat const &ref) {
	ostream << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return ostream;
}

