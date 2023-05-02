/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:22:41 by fcatinau          #+#    #+#             */
/*   Updated: 2022/04/23 17:33:19 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default"), _is_signed(false), _grade_sign(1), _grade_exec(1) {
	return ;
}

Form::Form(std::string name) : _name(name), _is_signed(false), _grade_sign(1), _grade_exec(1) {
	return ;
}

Form::Form(std::string name, int gradesign) : _name(name), _is_signed(false), _grade_sign(gradesign), _grade_exec(1) {
	return ;
}

Form::Form(std::string name, int gradesign, int gradeexec) : _name(name), _is_signed(false), _grade_sign(gradesign), _grade_exec(gradeexec) {
	return ;
}

Form::Form(Form const &cpy) : _name(cpy._name), _is_signed(cpy._is_signed), _grade_sign(cpy._grade_sign), _grade_exec(cpy._grade_exec){
	return ;
}

Form::~Form(void) {
	return ;
}

std::string	Form::getName(void)const {
	return (this->_name);
}

void	Form::setSign( bool sign ){
	this->_is_signed = sign;
}

bool	Form::getIs_signed(void)const {
	return (this->_is_signed);
}

int		Form::getGrade_sign(void)const {
	return this->_grade_sign;
}

int		Form::getGrade_exec(void)const {
	return this->_grade_exec;
}

void	Form::execute( const Bureaucrat& executor) {

	if ( executor.getGrade() > this->_grade_exec)
		throw Form::GradeTooLowException();
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	executeForm();
}

void			Form::beSigned( Bureaucrat const & bureaucrat ) {
	if ( bureaucrat.getGrade() > this->_grade_sign )
		throw Form::GradeTooLowException();
	if ( this->_is_signed == true )
		throw Form::AlreadySigned();
	this->_is_signed = true;
}

Form	&Form::operator=(Form const & rhs){
	if (this != &rhs)
		this->_is_signed = rhs._is_signed;
	return *this;
}

std::ostream &operator<<(std::ostream &ostream, Form const &form) {
	ostream << "Form :" << form.getName();
	ostream << "\n\tIs signed :" << form.getIs_signed();
	ostream << "\n\tgrade signed :" << form.getGrade_sign();
	ostream << "\n\tgrade exec :" << form.getGrade_exec();
	return ostream;
}
