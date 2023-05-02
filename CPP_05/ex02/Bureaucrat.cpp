/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:13:12 by fcatinau          #+#    #+#             */
/*   Updated: 2022/04/23 17:28:12 by fcatinau         ###   ########.fr       */
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

void	Bureaucrat::executeForm( Form& form ) {
	try {
		form.execute(*this);
		std::cout << *this << " executed " << form.getName() << std::endl;
	}
	catch (std::exception & error) {
		std::cerr << *this << " cannot execute " << form.getName() << std::endl << error.what() << std::endl;
	}
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs){
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

void	Bureaucrat::signForm(Form const &form){
	try{
		if (form.getIs_signed() == true){
			throw Bureaucrat::FormALreadySign();
		}
		if (form.getGrade_sign() <= this->_grade){
			throw Bureaucrat::GradeTooLowException();
		}
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}
	return ;
}

std::ostream	&operator<<(std::ostream &ostream, Bureaucrat const &ref) {
	ostream << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return ostream;
}

