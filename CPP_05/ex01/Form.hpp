/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:22:44 by fcatinau          #+#    #+#             */
/*   Updated: 2022/04/23 17:39:59 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private :
		const std::string _name;
		bool	_is_signed;
		const int		_grade_sign;
		const int		_grade_exec;

	public :
		Form(void);
		Form(std::string name);
		Form(std::string name, int gradesign);
		Form(std::string name, int gradesign, int gradeexec);
		Form(Form const &cpy);
		~Form(void);
		std::string	getName(void)const;
		bool	getIs_signed(void)const;
		int		getGrade_sign(void)const;
		int		getGrade_exec(void)const;
		void	beSigned(Bureaucrat const &bur);
		void	setSign( bool sign );

		class	GradeTooHighException : public std::exception {
			public :
				virtual const char *what() const throw() {
					return ("Grade too hight");
				}
		};
		class	GradeTooLowException : public std::exception {
			public :
				virtual const char *what() const throw() {
					return ("Grade low hight");
				}
		};
		class	AlreadySigned : public std::exception {
			public :
				virtual const char *what() const throw() {
					return ("Form is already signed");
				}
		};
		Form &operator=(Form const &rhs);
};

std::ostream &operator<<(std::ostream &ostream, Form const &form);
#endif
